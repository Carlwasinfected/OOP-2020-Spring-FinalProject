#include "historywindow.h"
#include "ui_historywindow.h"

/*构造函数*/
HistoryWindow::HistoryWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HistoryWindow)
{
    // 初始化ui
    ui->setupUi(this);
    this->setWindowTitle("历史记录查询");
    this->setWindowIcon(QIcon("../resource/img/mainwindow_logo.ico"));
    
    // 显示历史记录查询结果
    ShowHistory();
    
    // 绑定信号槽
    connect(ui->pushbutton_return, SIGNAL(clicked()), this, SLOT(ReturnToMainWindow()));
    connect(ui->pushutton_clear_history, SIGNAL(clicked()), this, SLOT(ClearHistory()));
    connect(ui->pushbutton_save, SIGNAL(clicked()), this, SLOT(SaveHistoryResult()));
}

/*析构函数*/
HistoryWindow::~HistoryWindow()
{
    delete ui;
}

/* no-static member function */
/*显示当前cache中的历史结果*/
void HistoryWindow::ShowHistory() {
    QQueue<QString>* cptr = &MainWindow::result_cache;
    QString tmp = "";

    // 判断cache队列长度
    if (cptr->size() == 0) {
        ui->textBrowser->setText(tr("<h4>本系统近期还<font color = red>没有</font>查询记录！</h4>"));
    } else {
        tmp += "<h4>以下是最近查询的<font color = red>" + QString::number(cptr->size()) + "条</font>查询记录！</h4>";
        
        // 迭代器从队列尾向队列头迭代，输出队列中的元素
        QQueue<QString>::const_reverse_iterator const_rev_iter;
        for(const_rev_iter = cptr->crbegin(); const_rev_iter != cptr->crend(); ++const_rev_iter) {
                tmp += "<hr>";
                tmp += *const_rev_iter;
         }

        // 显示输出
        ui->textBrowser->setText(tmp);
     }

}

/* slots functions */
/*MainWindow是全局存在的*/
void HistoryWindow::ReturnToMainWindow() {
    GlobalVal::main_window->show();
    GlobalVal::my_player->play();
    this->close();
}

/*清除cache*/
void HistoryWindow::ClearHistory() {
    // 警告确认操作
    int ret = QMessageBox::warning(NULL,"清除警告","您确定要清除系统中的近期记录吗？",
                                   QMessageBox::Ok|QMessageBox::Default, QMessageBox::Cancel, 0);

    switch (ret) {
      case QMessageBox::Ok: {

         // Ok was clicked
        QQueue<QString>* cptr = &MainWindow::result_cache;
        
        // 清空cache
        while(!cptr->empty()) {
            cptr->dequeue();
            }
        
        // 重设显示
        ui->textBrowser->setText(tr("<h4>本系统近期还<font color = red>没有</font>查询记录！</h4>"));
        qDebug() << "Ok was clicked; cache is empty now" << endl;
          break;
        }

      case QMessageBox::Cancel:
          // Cancel was clicked
        qDebug() << "cancel button was clicked" << endl;
          break;
    }
}

/* 保存历史记录查询结果为pdf文件*/
void HistoryWindow::SaveHistoryResult() {
    //获取用户选定的文件保存路径
    QString save_filename = QFileDialog::getSaveFileName(this, tr("保存历史记录为PDF文件"), "",  tr("History Result File (*.pdf)"));
    
    if(!save_filename.isNull()) {
        qDebug() << "save here: " << save_filename;
        
        // cache队列的元素是html语法字符串
        QString html = ui->textBrowser->toHtml();
        QTextDocument document;
        document.setHtml(html);

        // 设置printer输出格式为pdf
        QPrinter printer(QPrinter::PrinterResolution);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setOutputFileName(save_filename);
        // 生成.pdf文件
        document.print(&printer);
        
    } else {
        qDebug() << "click cancel button";
    }
}

#include "historywindow.h"
#include "ui_historywindow.h"

HistoryWindow::HistoryWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::HistoryWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("历史记录查询");
    this->setWindowIcon(QIcon("../resource/img/mainwindow_logo.ico"));
    ShowHistory();
    connect(ui->pushbutton_return, SIGNAL(clicked()), this, SLOT(ReturnToMainWindow()));
    connect(ui->pushutton_clear_history, SIGNAL(clicked()), this, SLOT(ClearHistory()));
    connect(ui->pushbutton_save, SIGNAL(clicked()), this, SLOT(SaveHistoryResult()));
}

HistoryWindow::~HistoryWindow()
{
    delete ui;
}

/* no-static member function */
void HistoryWindow::ShowHistory() {
    QQueue<QString>* cptr = &MainWindow::result_cache;
    QString tmp = "";
    if (cptr->size() == 0) {
        ui->textBrowser->setText(tr("<h4>本系统近期还<font color = red>没有</font>查询记录！</h4>"));
    } else {
        tmp += "<h4>以下是最近查询的<font color = red>" + QString::number(cptr->size()) + "条</font>查询记录！</h4>";
        QQueue<QString>::const_reverse_iterator const_rev_iter;
        for(const_rev_iter = cptr->crbegin(); const_rev_iter != cptr->crend(); ++const_rev_iter) {
                tmp += "<hr>";
                tmp += *const_rev_iter;
         }
        ui->textBrowser->setText(tmp);
     }

}

/* slots functions */
void HistoryWindow::ReturnToMainWindow() {
    GlobalVal::main_window->show();
    GlobalVal::my_player->play();
    this->close();
}

void HistoryWindow::ClearHistory() {
    int ret = QMessageBox::warning(NULL,"清除警告","您确定要清除系统中的近期记录吗？",
                                   QMessageBox::Ok|QMessageBox::Default, QMessageBox::Cancel, 0);

    switch (ret) {
      case QMessageBox::Ok: {

         // Ok was clicked
        QQueue<QString>* cptr = &MainWindow::result_cache;
        while(!cptr->empty()) {
            cptr->dequeue();
            }
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

void HistoryWindow::SaveHistoryResult() {
    QString save_filename = QFileDialog::getSaveFileName(this, tr("保存历史记录为PDF文件"), "",  tr("History Result File (*.pdf)"));
    if(!save_filename.isNull()) {
        qDebug() << "save here: " << save_filename;
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

#include "global_val.h"
#include "combineloanwindow.h"
#include "ui_combineloanwindow.h"



CombineLoanWindow::CombineLoanWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CombineLoanWindow)
{

    ui->setupUi(this);
    this->setWindowTitle("组合型房贷计算器");
    this->setWindowIcon(QIcon("../resource/img/mainwindow_logo.ico"));
    ui->lineEdit_comm->setText(QString::number(0.00));
    ui->lineEdit_accu_fund->setText(QString::number(0.00));

    // 设置过滤验证器
    ui->lineEdit_comm->setValidator(new QDoubleValidator(0.00, std::numeric_limits<double>::max(),2,this));
    ui->lineEdit_accu_fund->setValidator(new QDoubleValidator(0.00, std::numeric_limits<double>::max(),2,this));

    // bind SIGNALS and SLOTS
    connect(ui->pushButton_confirm, SIGNAL(clicked()), this, SLOT(CalLoan()));
    connect(ui->pushButton_clear, SIGNAL(clicked()), this, SLOT(ConfirmWhetherClear()));
    qDebug() << "Construct CombineLoanWindow Class";
}

CombineLoanWindow::~CombineLoanWindow()
{
    delete ui;
}

void CombineLoanWindow::CalLoan() {
    QString qstr = "";
    std::string msg = "";
    if(CheckInputValid(msg)) {

        // if input is valid, then get input & new object
        const double input_accu_fund_loan = ui->lineEdit_accu_fund->text().toDouble() * 10000;
        const double input_comm_loan = ui->lineEdit_comm->text().toDouble() * 10000;
        const double input_accu_fund_inst = ui->spinbox_accu_fund->value() / 1200.0;
        const double input_comm_inst = ui->spinbox_comm->value() / 1200.0;
        const int input_paid_month_idx = ui->combo_box_paid_month->currentIndex();
        const int input_paid_month = BaseLoanModel::paid_month_map[input_paid_month_idx];
        int input_paid_type;
        if(ui->radioButton_1->isChecked()) {
            input_paid_type = 1;  // 等额本息
        } else {
            input_paid_type = 2;  // 等额本金
        }

        // new model object; then calculate outputs
        CombineLoanModel* model = new CombineLoanModel(input_comm_loan,input_comm_inst,input_accu_fund_loan,
                                                       input_accu_fund_inst, input_paid_month, input_paid_type);
        qstr = QString::fromStdString(model->CalLoan());

        delete model;

        qDebug() << "input_accu_fund_loan " << input_accu_fund_loan << endl;
        qDebug() << "input_comm_loan" << input_comm_loan << endl;
        qDebug() << "input_accu_fund_inst " << input_accu_fund_inst << endl;
        qDebug() << "input_comm_inst " << input_comm_inst << endl;
        qDebug() << "input_paid_month_idx " << input_paid_month_idx << endl;
        qDebug() << "paid type is :  " << input_paid_type << endl;

        // send string result to cache
        SendResultToCache(qstr, input_paid_type);
        // in the end setText;

        ui->result_browser->setText(qstr);

    } else {
        QMessageBox::warning(this, tr("警告提示"),
                                           tr(msg.c_str()),
                                           QMessageBox::Ok |QMessageBox::Default,
                                           QMessageBox::Cancel | QMessageBox::Escape, 0);
    }
}


void CombineLoanWindow::SendResultToCache(QString qstr, int input_paid_type) {
    QQueue<QString>* cptr = &MainWindow::result_cache;
    QString qstr_to_cache = "";
    QString type = "";
    if (input_paid_type == 1) {
        type = "等额本息";
    } else {
        type = "等额本金";
    }
    qstr_to_cache = "<h4> 还款类型：<font color = red> " + type + "</font></h4>";
    qstr_to_cache += qstr;

    if (cptr->size() >=5) {
        cptr->dequeue();
    }
    cptr->enqueue(qstr_to_cache);
}


void CombineLoanWindow::ConfirmWhetherClear() {
    int ret = QMessageBox::warning(this, tr("警告提示"),
                                   tr("您确定要执行清空操作吗?\n"),
                                   QMessageBox::Ok |QMessageBox::Default,
                                   QMessageBox::Cancel | QMessageBox::Escape, 0);
    switch (ret) {
      case QMessageBox::Ok:
          // Ok was clicked
        qDebug() << "ok button was clicked " << endl;
        ui->lineEdit_comm->text().clear();
        ui->lineEdit_comm->setText(QString::number(0.00));
        ui->lineEdit_accu_fund->text().clear();
        ui->lineEdit_accu_fund->setText(QString::number(0.00));
        ui->spinbox_comm->text().clear();
        ui->spinbox_comm->setValue(0.00);
        ui->spinbox_accu_fund->text().clear();
        ui->spinbox_accu_fund->setValue(0.00);
        qDebug() << "clear op finished" << endl;
          break;
      case QMessageBox::Cancel:
          // Cancel was clicked
        qDebug() << "cancel button was clicked" << endl;
          break;
    }

}


/* @return val: 0->Failed; 1->Success */
int CombineLoanWindow::CheckInputValid(std::string &msg) {
    int is_valid = 1;
    /* check spinbox */
    double spinbox_val = ui->spinbox_comm->value();
    if (spinbox_val == 0.00) {
        msg += "商业贷款年利率不能为0！ \n";
        is_valid = 0;
    }
    spinbox_val = ui->spinbox_accu_fund->value();
    if (spinbox_val == 0.00) {
        msg += "公积金贷款年利率不能为0！ \n";
        is_valid = 0;
    }

    /* check radioButton */
    if(!ui->radioButton_1->isChecked() && !ui->radioButton_2->isChecked()) {
        msg += "您还没有选择还款方式！ ";
        is_valid = 0;
    }

    return is_valid;
}

/* 重写closeEvent() 这是继承自QEvent类的一个虚函数 */
void CombineLoanWindow::closeEvent(QCloseEvent *event) {
    GlobalVal::main_window->show();
    this->close();
    GlobalVal::my_player->play();
    event->accept();
}

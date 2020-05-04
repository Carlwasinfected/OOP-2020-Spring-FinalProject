#include "logindialog.h"
#include "ui_logindialog.h"
#include <QDebug>

LoginDialog::LoginDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDialog)
{
    ui->setupUi(this);

    this->setWindowTitle("房贷计算器系统");
    this->setWindowIcon(QIcon("../resource/img/mainwindow_logo.ico"));
    
    // bind singals and slots
    connect(ui->Login_Button_2, SIGNAL(clicked()), this, SLOT(CheckLoginValid()));
}

LoginDialog::~LoginDialog()
{
    delete ui;
}


// SLOT functions

void LoginDialog::CheckLoginValid() {
    // check username&password is valid or not
    if (ui->UserNames_2->text().toStdString() == "carlwang99" && ui->PassWords_2->text().toStdString() == "123") {
        GlobalVal::cur_username = ui->UserNames_2->text();
        GlobalVal::main_window = new MainWindow();
        GlobalVal::main_window->show();
        qDebug() << "cur_username from LoginWindow: " << GlobalVal::cur_username;
        qDebug() << "sucessfully login from LoginDialog.cpp" << endl;
        this->close();
    } else {
        int ret = QMessageBox::warning(NULL,tr("登录错误"), tr("您输入的账号或者密码不正确！"),
                                       QMessageBox::Ok,QMessageBox::Cancel, 0);
        switch (ret) {
          case QMessageBox::Ok:
              // Ok was clicked
            qDebug() << "clear op finished" << endl;
              break;
          case QMessageBox::Cancel:
              // Cancel was clicked
            qDebug() << "cancel button was clicked" << endl;
              break;
        }
    }
}


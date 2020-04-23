#include "global_val.h"
#include "logindialog.h"
//#include "combineloanwindow.h"
//#include "combine_loan_model.h"
#include "commloanwindow.h"
#include  "mainwindow.h"
#include <QApplication>
#include <QFont>
// 小心重复include的问题


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //  show login dialog first
        LoginDialog* ld = new LoginDialog();
//        GlobalVal::main_window = new MainWindow(NULL);
        ld->show();
//    CommLoanWindow* clw = new CommLoanWindow();
//    clw->show();

    return a.exec();
}

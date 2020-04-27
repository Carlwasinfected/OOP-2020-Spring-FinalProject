#include "global_val.h"
#include "logindialog.h"
//#include "combineloanwindow.h"
//#include "combine_loan_model.h"
#include "commloanwindow.h"
#include  "mainwindow.h"
#include <QApplication>
#include <QFont>
#include <QFile>
// 小心重复include的问题


static  void SetMyStyleSheet(const QString &styleName)
{
    QFile file(styleName);
    file.open(QFile::ReadOnly);
    QString css = QLatin1String(file.readAll());
    if(!file.exists()) {
        qDebug() << "No File Exits!";
    }
    qDebug() << file.fileName();
    qApp->setStyleSheet(css);
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SetMyStyleSheet("../resource/stylesheet/mystylesheet.css");
    LoginDialog* ld = new LoginDialog();
    ld->show();

    return a.exec();
}

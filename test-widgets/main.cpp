#include "global_val.h"
#include "logindialog.h"
#include "commloanwindow.h"
#include  "mainwindow.h"
#include <QApplication>
#include <QFont>
#include <QFile>

/* 设置样式表 */
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
    
    // 设置应用程序的样式表
    SetMyStyleSheet("../resource/stylesheet/mystylesheet.css");
    
    // 显示登录对话框
    LoginDialog* ld = new LoginDialog();
    ld->show();

    return a.exec();
}

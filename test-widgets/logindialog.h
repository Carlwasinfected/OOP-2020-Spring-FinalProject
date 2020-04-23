#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include "global_val.h"
#include "mainwindow.h"
#include <QDialog>
#include <QMessageBox>


namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = nullptr);  // explicit用于构造单参数的class
    ~LoginDialog();

private:
    Ui::LoginDialog *ui;

public slots:
    void CheckLoginValid();
};

#endif // LOGINDIALOG_H

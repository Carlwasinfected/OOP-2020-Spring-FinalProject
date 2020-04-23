#ifndef COMBINELOANWINDOW_H
#define COMBINELOANWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QDebug>
#include <QQueue>
#include <QString>
#include <QCloseEvent>
#include "combine_loan_model.h"
#include "limits"

namespace Ui {
class CombineLoanWindow;
}

class CombineLoanWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CombineLoanWindow(QWidget *parent = nullptr);
    ~CombineLoanWindow();

protected:
    void closeEvent(QCloseEvent* event); // virtual function

private:
    Ui::CombineLoanWindow *ui;
    int CheckInputValid(std::string &msg);
    void SendResultToCache(QString qstr, int input_paid_type);

private slots:
    void CalLoan();
    void ConfirmWhetherClear();
};

#endif // COMBINELOANWINDOW_H

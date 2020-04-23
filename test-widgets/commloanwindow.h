#ifndef COMMLOANWINDOW_H
#define COMMLOANWINDOW_H

#include "comm_loan_model.h"
#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include <QQueue>
#include <QString>
#include <QCloseEvent>

namespace Ui {
class CommLoanWindow;
}

class CommLoanWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit CommLoanWindow(QWidget *parent = nullptr);
    ~CommLoanWindow();

protected:
    void closeEvent(QCloseEvent* event);

private:
    Ui::CommLoanWindow *ui;
    void SetStackedWidgetSize();
    void SendResultToCache(QString qstr, int input_paid_type);
    int CheckInputValid(std::string &msg);

private slots:
    void CalLoan();
    void ConfirmWhetherClear();
};

#endif // COMMLOANWINDOW_H

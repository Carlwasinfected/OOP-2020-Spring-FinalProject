#ifndef ACCULOANWINDOW_H
#define ACCULOANWINDOW_H

#include "accu_loan_model.h"
#include <QMainWindow>
#include <QDebug>
#include <QMessageBox>
#include <QQueue>
#include <QString>
#include <QCloseEvent>

namespace Ui {
class AccuLoanWindow;
}

class AccuLoanWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit AccuLoanWindow(QWidget *parent = nullptr);
    ~AccuLoanWindow();

protected:
    void closeEvent(QCloseEvent* event);

private:
    Ui::AccuLoanWindow *ui;
    void SetStackedWidgetSize();
    void SendResultToCache(QString qstr, int input_paid_type);
    int CheckInputValid(std::string &msg);
    
private slots:
    void CalLoan();
    void ConfirmWhetherClear();

};



#endif // ACCULOANWINDOW_H

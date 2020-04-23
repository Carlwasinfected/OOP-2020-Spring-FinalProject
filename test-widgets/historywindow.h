#ifndef HISTORYWINDOW_H
#define HISTORYWINDOW_H

#include "global_val.h"
#include "mainwindow.h"
#include <QString>
#include <QMessageBox>
#include <QMainWindow>

namespace Ui {
class HistoryWindow;
}

class HistoryWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit HistoryWindow(QWidget *parent = nullptr);
    ~HistoryWindow();

private:
    void ShowHistory();
    Ui::HistoryWindow *ui;

private slots:
    void ReturnToMainWindow();
    void ClearHistory();
};

#endif // HISTORYWINDOW_H

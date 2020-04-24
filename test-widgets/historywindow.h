#ifndef HISTORYWINDOW_H
#define HISTORYWINDOW_H

#include "global_val.h"
#include "mainwindow.h"
#include <QString>
#include <QMessageBox>
#include <QMainWindow>
#include <QFileDialog>
#include <QPrinter>
#include <QPainter>

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
    void SaveHistoryResult();
};

#endif // HISTORYWINDOW_H

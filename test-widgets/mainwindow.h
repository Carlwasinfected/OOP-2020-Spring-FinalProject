#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// MainWindow要用的头文件
#include <QMainWindow>
#include <QMediaPlayer>
#include <QVideoWidget>
#include <QMediaPlaylist>
#include <QFont>
#include <QColor>
#include <QString>
#include <QQueue>
#include <iostream>

QT_BEGIN_NAMESPACE
namespace Ui {
    class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
    friend std::string GetMsgFromLogin();

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    static QQueue<QString> result_cache;
    static void SendHistoryToCache(QString &qstr);

private:
    Ui::MainWindow *ui;
    QMediaPlayer* my_player;

private slots:
    void ShowCombineLoanWindow();
    void ShowHistoryWindow();
    void ShowCommLoanWindow();
    void ShowAccuLoanWindow();

};
#endif // MAINWINDOW_H

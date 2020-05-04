#ifndef GLOBAL_VAL_H
#define GLOBAL_VAL_H

#include "mainwindow.h"

class GlobalVal
{
public:
    GlobalVal();
    ~GlobalVal();

    // 静态全局变量
    static MainWindow * main_window;
    static QMediaPlayer* my_player;
    static QString cur_username;

};

#endif // GLOBAL_VAL_H

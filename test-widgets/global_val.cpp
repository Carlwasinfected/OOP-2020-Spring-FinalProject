#include "global_val.h"

GlobalVal::GlobalVal()
{

}

GlobalVal::~GlobalVal() {};

// 初始化全局变量
MainWindow* GlobalVal::main_window = NULL; // 主窗口
QMediaPlayer* GlobalVal::my_player = NULL; // 视频播放列表控件
QString GlobalVal::cur_username = ""; // 当前登录用户的用户名



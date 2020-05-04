#include "mainwindow.h"
#include "ui_mainwindow.h"  // ui里import需要的各种widgets等等
#include "global_val.h"
#include "combineloanwindow.h"
#include "historywindow.h"
#include "commloanwindow.h"
#include "acculoanwindow.h"


/* friend function */
/* 获取当前登录者的用户名*/
std::string GetMsgFromLogin() {
    std::string username = GlobalVal::cur_username.toStdString();
    qDebug() << "cur_username from MainWindow: " << GlobalVal::cur_username;
    std :: string msg = "";
    msg += "<h4>用户<font color = red>";
    msg += username;
    msg += "</font> ，欢迎您！</h4>";
    return msg;
}

/* 构造函数 */
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)  // 固定部分
{
    ui->setupUi(this);  // 放在最前

    qDebug() << "construction of MainWindow here" << endl;
    // 初始化ui
    this->setWindowTitle("房贷计算器系统");
    this->setWindowIcon(QIcon("../resource/img/mainwindow_logo.ico"));
    ui->welcomeMsg->setText(QString::fromStdString(GetMsgFromLogin()));
    ui->label->setText(tr("<h4><font color=blue> 房贷小科普</font></h4>"));

    // 添加视频、多媒体播放列表控件
    QMediaPlayer *player = new QMediaPlayer;
    QMediaPlaylist *playlist = new QMediaPlaylist(player);
    QVideoWidget *videoWidget = new QVideoWidget;

    // 满layout播放
    videoWidget->setAspectRatioMode(Qt::IgnoreAspectRatio);
    player->setVideoOutput(videoWidget);
    playlist->addMedia(QUrl::fromLocalFile("../resource/video/liyongle.mp4"));
    player->setPlaylist(playlist);

    // 设置视频控件的位置
    ui->horizontalLayoutRight->addWidget(videoWidget);
    videoWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    videoWidget->show();
    videoWidget->showFullScreen();
    player->play();
    qDebug() << videoWidget->size();
    
    // 将播放列表设为全局变量
    GlobalVal::my_player = player;

    // 定义信号和槽函数
    connect(ui->pushbutton_combine_loan, SIGNAL(clicked()), this, SLOT(ShowCombineLoanWindow()));
    connect(ui->pushbutton_history_query, SIGNAL(clicked()), this, SLOT(ShowHistoryWindow()));
    connect(ui->pushbutton_comm_loan, SIGNAL(clicked()), this, SLOT(ShowCommLoanWindow()));
    connect(ui->pushbutton_accu_loan, SIGNAL(clicked()), this, SLOT(ShowAccuLoanWindow()));
}

/* 析构函数 */
MainWindow::~MainWindow()
{
    delete ui;
}

/* static member */
/* 初始化cache队列*/
QQueue<QString> MainWindow::result_cache = {};

/* 把查询记录写入cache队列*/
void MainWindow::SendHistoryToCache(QString &qstr) {
   // 维护队列长度
   if(result_cache.size() <= 5) {
        result_cache.enqueue(qstr);
    } else {
        result_cache.dequeue();
        result_cache.enqueue(qstr);
    }
    qDebug() << "SendHistoryToCache() from MainWindow.cpp";
}



/* no-static member or slot functions below */
/* 显示子窗口 同时暂停主窗口视频播放 */
void MainWindow::ShowCombineLoanWindow() {
    CombineLoanWindow* combine_window = new CombineLoanWindow(NULL);
    combine_window->show();
    GlobalVal::my_player->pause();
    this->hide();
}


void MainWindow::ShowHistoryWindow() {
    HistoryWindow* history_window = new HistoryWindow();
    history_window->show();
    GlobalVal::my_player->pause();
    this->hide();
}

void MainWindow::ShowCommLoanWindow() {
    CommLoanWindow* comm_loan_window = new CommLoanWindow();
    comm_loan_window->show();
    GlobalVal::my_player->pause();
    this->hide();
}

void MainWindow::ShowAccuLoanWindow() {
    AccuLoanWindow* accu_loan_window = new AccuLoanWindow();
    accu_loan_window->show();
    GlobalVal::my_player->pause();
    this->hide();
}

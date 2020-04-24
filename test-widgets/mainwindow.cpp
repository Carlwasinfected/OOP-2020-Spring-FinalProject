#include "mainwindow.h"
#include "ui_mainwindow.h"  // ui里import需要的各种widgets等等
#include "global_val.h"
#include "combineloanwindow.h"
#include "historywindow.h"
#include "commloanwindow.h"
#include "acculoanwindow.h"


/* friend function */
std::string GetMsgFromLogin() {
    std::string username = GlobalVal::cur_username.toStdString();
    qDebug() << "cur_username from MainWindow: " << GlobalVal::cur_username;
    std :: string msg = "";
    msg += "<h4>用户<font color = red>";
    msg += username;
    msg += "</font> ，欢迎您！</h4>";
    return msg;
}

// 构造
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)  // 固定部分
{
    ui->setupUi(this);  // 放在最前

    qDebug() << "gouzao of MainWindow here" << endl;
    /* 初始化 */
    // title ...
    this->setWindowTitle("房贷计算器系统");
    this->setWindowIcon(QIcon("../resource/img/mainwindow_logo.ico"));
    // label msg config setting
//    ui->welcomeMsg->setTextFormat(Qt::RichText);
    ui->welcomeMsg->setText(tr("<h2> hi <font color=red> red </font></h2>"));
    ui->welcomeMsg->setText(QString::fromStdString(GetMsgFromLogin()));


    // video playing
    // test can open test.mp4

    QMediaPlayer *player = new QMediaPlayer;
    QMediaPlaylist *playlist = new QMediaPlaylist(player);
    QVideoWidget *videoWidget = new QVideoWidget;

    // 满layout播放
    videoWidget->setAspectRatioMode(Qt::IgnoreAspectRatio);
    player->setVideoOutput(videoWidget);
    playlist->addMedia(QUrl::fromLocalFile("../resource/video/liyongle.mp4"));
    player->setPlaylist(playlist);


    ui->horizontalLayoutRight->addWidget(videoWidget);
    videoWidget->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    videoWidget->show();
    videoWidget->showFullScreen();
    player->play();
    // 全局
    GlobalVal::my_player = player;
    // semi-red color
    // 127 is alpha value： 255 is completely opaque; 0 is completely transparent.
//    QColor myColor(255,0,0,127);
//    this->show_value = 0;
//    ui->result_text->setTextBackgroundColor(myColor);
//    // semi-blue color
//    ui->result_text->setTextColor(QColor(0,0,255,127));
//    ui->result_text->setFont(QFont("微软雅黑",20,0,false));

//    // show Text
//    ui->result_text->setText(QString::number(0,show_value));


    // 定义信号和槽函数
    connect(ui->pushbutton_combine_loan, SIGNAL(clicked()), this, SLOT(ShowCombineLoanWindow()));
    connect(ui->pushbutton_history_query, SIGNAL(clicked()), this, SLOT(ShowHistoryWindow()));
    connect(ui->pushbutton_comm_loan, SIGNAL(clicked()), this, SLOT(ShowCommLoanWindow()));
    connect(ui->pushbutton_accu_loan, SIGNAL(clicked()), this, SLOT(ShowAccuLoanWindow()));
}

// 析构
MainWindow::~MainWindow()
{
    delete ui;
}

/* static member */
QQueue<QString> MainWindow::result_cache = {};

void MainWindow::SendHistoryToCache(QString &qstr) {
    if(result_cache.size() <= 5) {
        result_cache.enqueue(qstr);
    } else {
        result_cache.dequeue();
        result_cache.enqueue(qstr);
    }
    qDebug() << "SendHistoryToCache() from MainWindow.cpp";
}



/* no-static member or slot functions below */
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

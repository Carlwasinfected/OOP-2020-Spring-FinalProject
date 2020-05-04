#include "acculoanwindow.h"
#include "ui_acculoanwindow.h"
#include "global_val.h"

/*构造函数*/
AccuLoanWindow::AccuLoanWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::AccuLoanWindow)
{
    // ui初始化； 文本框初始值设定
    ui->setupUi(this);
    this->setWindowTitle("公积金贷款计算器");
    this->setWindowIcon(QIcon("../resource/img/mainwindow_logo.ico"));
    ui->line_area->setText(QString::number(0.00));
    ui->line_loan_sum->setText(QString::number(0.00));
    ui->line_price_per_meter->setText(QString::number(0.00));

    // 设置lineEdit验证过滤器
    ui->line_area->setValidator(new QDoubleValidator(0.00, std::numeric_limits<double>::max(),2,this));
    ui->line_loan_sum->setValidator(new QDoubleValidator(0.00, std::numeric_limits<double>::max(),2,this));
    ui->line_price_per_meter->setValidator(new QDoubleValidator(0.00, std::numeric_limits<double>::max(),2,this));

    // binding SIGNAL and SLOTS
    connect(ui->combobox_cal_type_, QOverload<int>::of(&QComboBox::currentIndexChanged),
        [=](){
            SetStackedWidgetSize();}
        );
    connect(ui->pushButton_confirm, SIGNAL(clicked()), this, SLOT(CalLoan()));
    connect(ui->pushButton_clear, SIGNAL(clicked()), this, SLOT(ConfirmWhetherClear()));
}

/* 虚构函数 */
AccuLoanWindow::~AccuLoanWindow()
{
    delete ui;
}


/* no-static member functions */
/*
    The function makes the stacked widget size to the current page only
    let current page's size policy be IGNORED
    and other pages be EXPANDING
    reset them to fit
*/
void AccuLoanWindow::SetStackedWidgetSize() {
    for (int i = 0; i < ui->stackedWidget->count (); ++i)
    {
        // determine the vertical size policy
        QSizePolicy::Policy policy = QSizePolicy::Ignored;
        if (i == ui->stackedWidget->currentIndex ()) {
            policy = QSizePolicy::Expanding;
        }
        // update the size policy
        QWidget* pPage = ui->stackedWidget->widget (i);
        pPage->setSizePolicy (policy, policy);
    }
}

void AccuLoanWindow::ConfirmWhetherClear() {
    int ret = QMessageBox::warning(this, tr("警告提示"),
                                   tr("您确定要执行清空操作吗?\n"),
                                   QMessageBox::Ok |QMessageBox::Default,
                                   QMessageBox::Cancel | QMessageBox::Escape, 0);
    
    // 判断用户对于警告窗口的选择
    switch (ret) {
      case QMessageBox::Ok:
        // Ok was clicked
        qDebug() << "ok button was clicked " << endl;
        // 重设输入框的初始值（clear）
        ui->line_area->text().clear();
        ui->line_area->setText(QString::number(0.00));
        ui->line_loan_sum->text().clear();
        ui->line_loan_sum->setText(QString::number(0.00));
        ui->line_price_per_meter->text().clear();
        ui->line_price_per_meter->setText(QString::number(0.00));
        ui->spinbox_loan_rate->setValue(0.00);
        qDebug() << "clear op finished" << endl;
          break;
      case QMessageBox::Cancel:
          // Cancel was clicked
        qDebug() << "cancel button was clicked" << endl;
          break;
    }
}

/* 重写closeEvent() 这是继承自QEvent类的一个虚函数 */
void AccuLoanWindow::closeEvent(QCloseEvent *event) {
    GlobalVal::main_window->show();
    this->close();
    GlobalVal::my_player->play();
    event->accept();
}

/* 将本次查询结果（HTML文本）送入主窗口的Cache，便于历史记录查询*/
void AccuLoanWindow::SendResultToCache(QString qstr, int input_paid_type) {
    QQueue<QString>* cptr = &MainWindow::result_cache;
    QString qstr_to_cache = "";
    QString type = "";

    // 判断用户还款类型
    if (input_paid_type == 1) {
        type = "等额本息";
    } else {
        type = "等额本金";
    }

    // 拼接得到队列元素（qstring）
    qstr_to_cache = "<h4> 还款类型：<font color = red> " + type + "</font></h4>";
    qstr_to_cache += qstr;
    
    // 维护队列长度小于等于5
    if (cptr->size() >=5) {
        cptr->dequeue();
    }
    cptr->enqueue(qstr_to_cache);
}

void AccuLoanWindow::CalLoan() {
    QString qstr = "";
    std::string msg = "";
    if(CheckInputValid(msg)) {
        double input_price_per_meter = 0;
        double input_house_area = 0;
        double input_houseloan_ratio = 0;
        double input_loan_sum = 0;
        double input_loan_rate = 0.00;
        int current_page_index = ui->combobox_cal_type_->currentIndex();

        // if input is valid, then get input & new object
        if (current_page_index == 0) {
            // page 1
            input_price_per_meter = ui->line_price_per_meter->text().toDouble(); // yuan/meter
            input_house_area = ui->line_area->text().toDouble();  // m^2
            input_houseloan_ratio = AccuLoanModel::ratio_map[ui->combobox_houseloan_ratio->currentIndex()];
        } else {
            // page 2
            input_loan_sum = ui->line_loan_sum->text().toDouble() * 10000.0;
        }

        if (ui->combobox_input_rate_type->currentIndex() == 1) {
            // 自定义利率
            input_loan_rate = ui->spinbox_loan_rate->value() / 1200.0;  // 年利率-->月利率
        } else {
            // 预设利率
            input_loan_rate = AccuLoanModel::rate_map[ui->combobox_defined_rate->currentIndex()] / 12.0;
        }

        const int input_paid_month_idx = ui->combobox_paid_month->currentIndex();
        const int input_paid_month = BaseLoanModel::paid_month_map[input_paid_month_idx];
        int input_paid_type;
        if(ui->radioButton_1->isChecked()) {
            input_paid_type = 1;  // 等额本息
        } else {
            input_paid_type = 2;  // 等额本金
        }

        // 计算公积金贷款的查询结果
        AccuLoanModel* model = new AccuLoanModel(current_page_index, input_houseloan_ratio,
                                                    input_price_per_meter,
                                                    input_house_area,  input_loan_sum,
                                                    input_loan_rate,   input_paid_month,
                                                    input_paid_type);
        qstr = QString::fromStdString(model->CalLoan());
        delete model;

        qDebug() << "input accu loan rate is: " << input_loan_rate << endl;
        qDebug() << "input_paid_month_idx " << input_paid_month_idx << endl;
        qDebug() << "paid type is :  " << input_paid_type << endl;

        // send string result to cache
        SendResultToCache(qstr, input_paid_type);
        
        // in the end setText
        ui->result_browser->setText(qstr);

    } else {
        // 输入不合法 弹出警告框
        // @msg: 出错信息（string）
        QMessageBox::warning(this, tr("警告提示"),
                                           tr(msg.c_str()),
                                           QMessageBox::Ok |QMessageBox::Default,
                                           QMessageBox::Cancel | QMessageBox::Escape, 0);
    }
}

/* 判断用户输入是否合法
*  @parm:  msg --> 出错信息
*  @return val: --> 1:输入合法； 0：输入不合法
*/
int AccuLoanWindow::CheckInputValid(std::string &msg) {
    int is_valid = 1;

    /* check spinbox only when you choose to input the rate */
    const double spinbox_val = ui->spinbox_loan_rate->value();
    if (ui->combobox_input_rate_type->currentIndex() == 1 && spinbox_val == 0.00) {
        msg += "公积金年利率的值不能为0！ \n";
        is_valid = 0;
    }

    /* check radioButton */
    if(!ui->radioButton_1->isChecked() && !ui->radioButton_2->isChecked()) {
        msg += "您还没有选择还款方式！ ";
        is_valid = 0;
    }

    return is_valid;
}





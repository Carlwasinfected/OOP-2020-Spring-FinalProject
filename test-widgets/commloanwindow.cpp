#include "global_val.h"
#include "commloanwindow.h"
#include "ui_commloanwindow.h"

/*构造函数*/
CommLoanWindow::CommLoanWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CommLoanWindow)
{
    // 初始化ui
    ui->setupUi(this);
    this->setWindowTitle("商业型贷款计算器");
    this->setWindowIcon(QIcon("../resource/img/mainwindow_logo.ico"));
    ui->line_area->setText(QString::number(0.00));
    ui->line_loan_sum->setText(QString::number(0.00));
    ui->line_price_per_meter->setText(QString::number(0.00));

    // 设置lineEdit验证过滤器
    ui->line_area->setValidator(new QDoubleValidator(0.00, std::numeric_limits<double>::max(),2,this));
    ui->line_loan_sum->setValidator(new QDoubleValidator(0.00, std::numeric_limits<double>::max(),2,this));
    ui->line_price_per_meter->setValidator(new QDoubleValidator(0.00, std::numeric_limits<double>::max(),2,this));

    // bind SIGNAL and SLOTS
    connect(ui->combobox_cal_type, QOverload<int>::of(&QComboBox::currentIndexChanged),
        [=](){
            SetStackedWidgetSize();}
        );
    connect(ui->pushButton_confirm, SIGNAL(clicked()), this, SLOT(CalLoan()));
    connect(ui->pushButton_clear, SIGNAL(clicked()), this, SLOT(ConfirmWhetherClear()));
}

/*析构函数*/
CommLoanWindow::~CommLoanWindow()
{
    delete ui;
}


/* no-static member functions */
void CommLoanWindow::SetStackedWidgetSize() {
    // make the stacked widget size to the current page only
    // let current page's size policy be ignored
    // and other pages be expanding
    // reset them to fit
    for (int i = 0; i < ui->stackedWidget->count (); ++i)
    {
        // determine the vertical size policy
        QSizePolicy::Policy policy = QSizePolicy::Expanding;
        if (i == ui->stackedWidget->currentIndex ())
            policy = QSizePolicy::Ignored;

        // update the size policy
        QWidget* pPage = ui->stackedWidget->widget (i);
        pPage->setSizePolicy (policy, policy);
    }
}


void CommLoanWindow::ConfirmWhetherClear() {
    int ret = QMessageBox::warning(this, tr("警告提示"),
                                   tr("您确定要执行清空操作吗?\n"),
                                   QMessageBox::Ok |QMessageBox::Default,
                                   QMessageBox::Cancel | QMessageBox::Escape, 0);
    switch (ret) {
      case QMessageBox::Ok:
          // Ok was clicked
        qDebug() << "ok button was clicked " << endl;
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
void CommLoanWindow::closeEvent(QCloseEvent *event) {
    GlobalVal::main_window->show();
    this->close();
    GlobalVal::my_player->play();
    event->accept();
}

/*将查询结果写入cache*/
void CommLoanWindow::SendResultToCache(QString qstr, int input_paid_type) {
    QQueue<QString>* cptr = &MainWindow::result_cache;
    QString qstr_to_cache = "";
    QString type = "";
    if (input_paid_type == 1) {
        type = "等额本息";
    } else {
        type = "等额本金";
    }
    qstr_to_cache = "<h4> 还款类型：<font color = red> " + type + "</font></h4>";
    qstr_to_cache += qstr;
    if (cptr->size() >=5) {
        cptr->dequeue();
    }
    cptr->enqueue(qstr_to_cache);
}

/*计算贷款*/
void CommLoanWindow::CalLoan() {
    QString qstr = "";
    std::string msg = "";

    // 检查输入合法性
    if(CheckInputValid(msg)) {
        double input_price_per_meter = 0;
        double input_house_area = 0;
        double input_houseloan_ratio = 0;
        double input_loan_sum = 0;
        int current_page_index = ui->combobox_cal_type->currentIndex();

        // if input is valid, then get input & new object
        if (current_page_index == 0) {
            // page 1
            input_price_per_meter = ui->line_price_per_meter->text().toDouble(); // yuan/meter
            input_house_area = ui->line_area->text().toDouble();  // m^2
            input_houseloan_ratio = CommLoanModel::ratio_map[ui->combobox_houseloan_ratio->currentIndex()];
        } else {
            // page 2
            input_loan_sum = ui->line_loan_sum->text().toDouble() * 10000.0;
        }

        const double input_loan_rate = ui->spinbox_loan_rate->value() / 1200.0;  // 年利率-->月利率
        const int input_paid_month_idx = ui->combo_box_paid_month->currentIndex();
        const int input_paid_month = BaseLoanModel::paid_month_map[input_paid_month_idx];
        int input_paid_type;
        if(ui->radioButton_1->isChecked()) {
            input_paid_type = 1;  // 等额本息
        } else {
            input_paid_type = 2;  // 等额本金
        }

        // 加载模型对象，进行商业贷款计算
        CommLoanModel* model = new CommLoanModel(current_page_index, input_houseloan_ratio,
                                                    input_price_per_meter,
                                                    input_house_area,  input_loan_sum,
                                                    input_loan_rate,   input_paid_month,
                                                    input_paid_type);
        qstr = QString::fromStdString(model->CalLoan());
        delete model;

        // qDebug() << "input comm loan rate is: " << input_loan_rate << endl;
        // qDebug() << "input_paid_month_idx " << input_paid_month_idx << endl;
        // qDebug() << "paid type is :  " << input_paid_type << endl;

        // send string result to cache
        SendResultToCache(qstr, input_paid_type);
        // in the end setText;

        ui->result_browser->setText(qstr);

    } else {
        // 输入不合法 弹出警告
        QMessageBox::warning(this, tr("警告提示"),
                                           tr(msg.c_str()),
                                           QMessageBox::Ok |QMessageBox::Default,
                                           QMessageBox::Cancel | QMessageBox::Escape, 0);
    }
}

/* 判断输入合法性
*  @msg：警告信息
*/
int CommLoanWindow::CheckInputValid(std::string &msg) {
    int is_valid = 1;

    /* check spinbox */
    const double spinbox_val = ui->spinbox_loan_rate->value();
    if (spinbox_val == 0.00) {
        msg += "商业贷款年利率的值不能为0！ \n";
        is_valid = 0;
    }

    /* check radioButton */
    if(!ui->radioButton_1->isChecked() && !ui->radioButton_2->isChecked()) {
        msg += "您还没有选择还款方式！ ";
        is_valid = 0;
    }

    return is_valid;
}




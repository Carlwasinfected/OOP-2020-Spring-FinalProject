#include "comm_loan_model.h"

/*构造函数*/
CommLoanModel::CommLoanModel(int cal_type_,double houseloan_ratio_,
                             double price_per_meter_,
                             double house_area_, double loan_sum_,
                             double loan_rate_,  int paid_month_,
                             int paid_type_) : BaseLoanModel(paid_month_, paid_type_),
                             cal_type(cal_type_) {
    if (cal_type == 0) {
        // page 1 - based on house price&area
        this->houseloan_ratio = houseloan_ratio_;
        this->price_per_meter = price_per_meter_;
        this->house_area = house_area_;
        const double house_price_all = price_per_meter * house_area;
        this->loan_sum = houseloan_ratio * house_price_all;

    } else {
        // page 2 (cal_type == 1)
        this->loan_sum = loan_sum_;
   }
    this->loan_rate = loan_rate_;
    qDebug() << "constrcutor from class CommLoanModel";
}

/*析构函数*/
CommLoanModel::~CommLoanModel() {
    qDebug() << "destrcutor from class CommLoanModel";
}

/*计算贷款*/
std::string CommLoanModel::CalLoan() {
    // 获取时间戳
    QDateTime datetime(QDateTime::currentDateTime());
    std::string str_datetime = datetime.toString("yyyy-MM-dd hh:mm::ss ddd").toStdString();
    std::string str_res = "<h4>查询时间：<font color = green>" + str_datetime + "</font></h4>";
    double loan_comm_per_month;
    double paid_all;
    double paid_inst = 0;

    // 根据还款类型计算嗲款
    if (paid_type == 1) {         // 等额本息

        /* 首付 */
        if (cal_type == 0) {
            const double down_payment = (1 - houseloan_ratio) * price_per_meter * house_area;
            str_res += "<h4>房贷首付： <font color = red>" + std::to_string((int)round(down_payment)) + "</font> 元</h4>";
        }
        // 每月月供
        loan_comm_per_month = (loan_sum * loan_rate * pow(1 + loan_rate, paid_month));
        loan_comm_per_month /= (pow(1 + loan_rate, paid_month) - 1);

        // 贷款总额 loan_sum

        // 还款总额
        paid_all = loan_comm_per_month * paid_month;

        // 支付利息
        paid_inst = paid_all - this->loan_sum;

        // return result string
        str_res += "<h4>每月月供： <font color = red>" + std::to_string((int)round(loan_comm_per_month)) + "</font> 元</h4>";
        str_res += "<h4>贷款总额： " + std::to_string((int)round(loan_sum)) + " 元</h4>";
        str_res += "<h4>支付利息： " + std::to_string((int)round(paid_inst)) + " 元</h4>";
        str_res += "<h4>还款总额： " + std::to_string((int)round(paid_all)) + " 元</h4>";
        str_res += "<h4>还款月数：" + std::to_string(paid_month) + " 个月</h4>";

    } else {
        // 等额本金
        double paid_first_month = 0;
        double desc_per_month = 0;

        /* 首付 */
        if (cal_type == 0) {
            const double down_payment = (1 - houseloan_ratio) * price_per_meter * house_area;
            str_res += "<h4>房贷首付： <font color = red>" + std::to_string((int)round(down_payment)) + "</font> 元</h4>";
        }

        /* 每月本金  */
        double pricipal_comm_per_month = loan_sum / paid_month;
        paid_first_month += pricipal_comm_per_month;

        /* 总利息 */
        for(int month_count = 0; month_count < paid_month; ++month_count) {
            if (month_count == 0) {
                paid_first_month += ((loan_sum - pricipal_comm_per_month * month_count) * loan_rate);
            }
            paid_inst += ((loan_sum - pricipal_comm_per_month * month_count) * loan_rate);
        }

        /* 每月递减 */
        desc_per_month = pricipal_comm_per_month * loan_rate;

        /* 还款总额 */
        paid_all = paid_inst + loan_sum;

        /* 返回 */
        str_res += "<h4>首月月供： <font color = red>" + std::to_string((int)round(paid_first_month)) + "</font> 元</h4>";
        str_res += "<h4>每月递减： <font color = red>" + std::to_string((int)round(desc_per_month)) + " </font> 元</h4>";
        str_res += "<h4>贷款总额： " + std::to_string((int)round(loan_sum)) + " 元</h4>";
        str_res += "<h4>支付利息： " + std::to_string((int)round(paid_inst)) + " 元</h4>";
        str_res += "<h4>还款总额： " + std::to_string((int)round(paid_all)) + " 元</h4>";
        str_res += "<h4>还款月数： " + std::to_string(paid_month) + " 个月</h4>";
    }
    
    return str_res;
}


/* static member */
// @key: index in combo-box; @val: ratio
QHash<int, double> CommLoanModel::ratio_map = {
    {0, 0.8}, // start with ratio 80%
    {1, 0.75},
    {2, 0.7},
    {3, 0.65},
    {4, 0.6},
    {5, 0.55},  // desc is 5% per
    {6, 0.5},
    {7, 0.45},
    {8, 0.4},
    {9, 0.35},
    {10, 0.3},
    {11, 0.25},
    {12, 0.2} // end with ratio 20%
};


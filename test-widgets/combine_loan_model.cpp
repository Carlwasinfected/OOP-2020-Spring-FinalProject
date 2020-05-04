// Author: carlwang
// Date: 4.5.2020
#include "combine_loan_model.h"
#include <cmath>
#include <QDateTime>

using namespace std;

/*构造函数*/
CombineLoanModel::CombineLoanModel(double commercial_loan_, double commercial_inst_,
                                   double accu_fund_loan_, double accu_fund_inst_,
                                   int paid_month_, int paid_type_) :
                                   BaseLoanModel(paid_month_, paid_type_),
                                   commercial_loan(commercial_loan_), commercial_inst(commercial_inst_),
                                   accu_fund_loan(accu_fund_loan_), accu_fund_inst(accu_fund_inst_)
{
    qDebug() << "constrcutor from class BaseLoanModel";
}

/*析构函数*/
CombineLoanModel::~CombineLoanModel() {
    qDebug() << "desctructor from class CombineLoanModel";
};


std::string CombineLoanModel::CalLoan()
{
    double loan_sum;  // 两种贷款的和
    double inst_sum;
    double paid_sum;

    // 获取时间戳
    QDateTime datetime(QDateTime::currentDateTime());
    std::string str_res = "";
    std::string str_datetime = datetime.toString("yyyy-MM-dd hh:mm::ss ddd").toStdString();

    // 根据还款方式选用不同公式计算贷款
    if (paid_type == 1) 
    {
        // 等额本息
        double loan_comm_per_month;
        double loan_accu_per_month;
        double loan_sum_per_month;
        // cal commercial loan
        loan_comm_per_month = (commercial_loan * commercial_inst * pow(1 + commercial_inst, paid_month));
        loan_comm_per_month /= (pow(1 + commercial_inst, paid_month) - 1);

        // cal accu fund loan
        loan_accu_per_month = (accu_fund_loan * accu_fund_inst * pow(1 + accu_fund_inst, paid_month));
        loan_accu_per_month /= (pow(1 + accu_fund_inst, paid_month) - 1);

        // cal number of loans paid per month
        loan_sum_per_month = loan_comm_per_month + loan_accu_per_month;

        // cal paid sum
        paid_sum = (loan_comm_per_month + loan_accu_per_month) * paid_month;

        // cal loan sum
        loan_sum = accu_fund_loan + commercial_loan;

        // cal inst sum
        inst_sum = paid_sum - loan_sum;

        // return string result
        str_res += "<h4>查询时间：<font color = green>" + str_datetime + "</font></h4>";
        str_res += "<h4>每月月供： <font color = red>" + to_string((int)round(loan_sum_per_month)) + "</font> 元</h4>";
        str_res += "<h4>贷款总额： " + to_string((int)round(loan_sum)) + " 元</h4>";
        str_res += "<h4>支付利息： " + to_string((int)round(inst_sum)) + " 元</h4>";
        str_res += "<h4>还款总额： " + to_string((int)round(paid_sum)) + " 元</h4>";
        str_res += "<h4>还款月数：" + to_string(paid_month) + " 个月</h4>";
    }
    else
    { // 等额本金 （每月还不同的钱 其中每月本金相同，每月利息不同）
        double paid_first_month = 0;
        double desc_per_month = 0;
        double inst_sum = 0;

        /* cal commercial loan part */
        double pricipal_comm_per_month = commercial_loan / paid_month;
        paid_first_month += pricipal_comm_per_month;
        // cal commercial loan inst sum
        for(int month_count = 0; month_count < paid_month; ++month_count) {
            if (month_count == 0) {
                paid_first_month += ((commercial_loan - pricipal_comm_per_month * month_count) * commercial_inst);
            }
            inst_sum += ((commercial_loan - pricipal_comm_per_month * month_count) * commercial_inst);
        }

        /* cal accu fund loan part */
        double pricipal_accu_per_month = accu_fund_loan / paid_month;
        paid_first_month += pricipal_accu_per_month;
        // cal pricipal loan inst sum
        for(int month_count = 0; month_count < paid_month; ++month_count) {
            if (month_count == 0) {
                paid_first_month += ((accu_fund_loan - pricipal_accu_per_month * month_count)  * accu_fund_inst);
            }
            inst_sum += ((accu_fund_loan - pricipal_accu_per_month * month_count)  * accu_fund_inst);
        }

        /* cal desc per month*/
        desc_per_month += pricipal_accu_per_month * accu_fund_inst;
        desc_per_month += pricipal_comm_per_month * commercial_inst;

        /* merge & sum */
        loan_sum = accu_fund_loan + commercial_loan;
        paid_sum = loan_sum + inst_sum;

        // return string result
        str_res += "<h4>查询时间：<font color = green>" + str_datetime + "</font></h5>";
        str_res += "<h4>首月月供： <font color = red>" + to_string((int)round(paid_first_month)) + "</font> 元</h4>";
        str_res += "<h4>每月递减： <font color = red>" + to_string((int)round(desc_per_month)) + " </font> 元</h4>";
        str_res += "<h4>贷款总额： " + to_string((int)round(loan_sum)) + " 元</h4>";
        str_res += "<h4>支付利息： " + to_string((int)round(inst_sum)) + " 元</h4>";
        str_res += "<h4>还款总额： " + to_string((int)round(paid_sum)) + " 元</h4>";
        str_res += "<h4>还款月数： " + to_string(paid_month) + " 个月</h4>";
    }
    return str_res;
}

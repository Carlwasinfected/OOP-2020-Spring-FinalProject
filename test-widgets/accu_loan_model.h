#ifndef ACCULOANMODEL_H
#define ACCULOANMODEL_H

#include "base_loan_model.h"
#include <QHash>
#include <cmath>
#include <QDateTime>

class AccuLoanModel : protected BaseLoanModel
{
public:
    AccuLoanModel(int cal_type_, double houseloan_ratio_, double price_per_meter_,
                  double house_area_, double loan_sum_,
                  double house_rate_,  int paid_month_, int paid_type_);
    ~AccuLoanModel();
    virtual std::string CalLoan();
    static QHash<int, double> ratio_map;
    /* TODO */
    static QHash<int, double> rate_map; // 下拉框选择给定好的利率

private:
    // based on house price
    double houseloan_ratio;  // 按揭成数
    double price_per_meter;  // 房屋单价
    double house_area;   // 房屋面积

    // based on loan amount
    double loan_sum;  // 贷款总额

    int cal_type;
    double loan_rate;  // 贷款利率
};

#endif // ACCULOANMODEL_H

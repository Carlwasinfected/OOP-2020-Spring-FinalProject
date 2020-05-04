// Author: carlwang
// Date: 4.5.2020
// 这是定义了房贷model基类的头文件 LoanBase基类包括两个属性

#ifndef BASE_LOAN_MODEL_H
#define BASE_LOAN_MODEL_H

#include <iostream>
#include <QHash>
#include <QDebug>

class BaseLoanModel {
    public:
        BaseLoanModel(int paid_month_, int paid_type_);
        virtual ~BaseLoanModel();
        static QHash<int,int> paid_month_map; // 下拉框index和还款月数的mapping
        virtual std::string CalLoan() = 0; // 声明基类为纯虚基类

    protected:
        int paid_month; // 还款月数
        int paid_type; // 还款类型
};


#endif // BASE_LOAN_MODEL_H

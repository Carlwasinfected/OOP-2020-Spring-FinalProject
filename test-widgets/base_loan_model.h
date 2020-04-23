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
        static QHash<int,int> paid_month_map;
        virtual std::string CalLoan() = 0;

    protected:
        int paid_month;
        int paid_type;
};


#endif // BASE_LOAN_MODEL_H

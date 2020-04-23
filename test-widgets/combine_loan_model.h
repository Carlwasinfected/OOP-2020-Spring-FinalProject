// Author: carlwang
// Date: 4.5.2020
#ifndef COMBINE_LOAN_MODEL_H
#define COMBINE_LOAN_MODEL_H

#include "base_loan_model.h"

class CombineLoanModel : protected BaseLoanModel
{
public:
    CombineLoanModel(double commercial_loan_, double commercial_inst_,
                     double accu_fund_loan_, double accu_fund_inst_,
                     int paid_month_, int paid_type_);
    ~CombineLoanModel();

    virtual std::string CalLoan();
private:
    double commercial_loan;
    double commercial_inst; // inst means interests
    double accu_fund_loan;
    double accu_fund_inst;
};

#endif

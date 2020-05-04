#include "base_loan_model.h"

/*构造函数*/
BaseLoanModel::BaseLoanModel(int paid_month_, int paid_type_) {
    this->paid_type = paid_type_;
    this->paid_month = paid_month_;
    qDebug() << "constrcutor from class BaseLoanModel";
};

/*虚析构函数*/
BaseLoanModel::~BaseLoanModel() {
    qDebug() << "desctructor from class BaseLoanModel";
};


/* @key: currentIndex of ComboBox; 
*  @value: paid_month_sum；
*/
QHash<int,int> BaseLoanModel::paid_month_map = {
    {0, 180},  // 15 years
    {1, 168},
    {2, 152},
    {3, 144},
    {4, 132},
    {5, 120},
    {6, 108},
    {7, 96},
    {8, 84},
    {9, 72},
    {10, 60},
    {11, 48},
    {12, 36},
    {13, 24},
    {14, 12}  // 1 year
};

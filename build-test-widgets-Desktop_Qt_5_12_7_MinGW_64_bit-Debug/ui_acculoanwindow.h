/********************************************************************************
** Form generated from reading UI file 'acculoanwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCULOANWINDOW_H
#define UI_ACCULOANWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AccuLoanWindow
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *combobox_cal_type_;
    QStackedWidget *stackedWidget;
    QWidget *page_area_based;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QLineEdit *line_price_per_meter;
    QLabel *label_5;
    QLineEdit *line_area;
    QLabel *label_6;
    QComboBox *combobox_houseloan_ratio;
    QFrame *line_2;
    QFrame *line_3;
    QWidget *page_loan_based;
    QFormLayout *formLayout_3;
    QLabel *label_2;
    QLineEdit *line_loan_sum;
    QLabel *label_8;
    QComboBox *combobox_paid_month;
    QFrame *line_4;
    QLabel *label_10;
    QComboBox *combobox_input_rate_type;
    QStackedWidget *stackedWidget_choose_rate;
    QWidget *page_defined_based;
    QFormLayout *formLayout_4;
    QLabel *label_11;
    QComboBox *combobox_defined_rate;
    QWidget *page_input_based;
    QFormLayout *formLayout_5;
    QDoubleSpinBox *spinbox_loan_rate;
    QLabel *label_9;
    QLabel *label_3;
    QRadioButton *radioButton_1;
    QRadioButton *radioButton_2;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_confirm;
    QFrame *line;
    QFrame *line_5;
    QLabel *label_7;
    QTextBrowser *result_browser;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *AccuLoanWindow)
    {
        if (AccuLoanWindow->objectName().isEmpty())
            AccuLoanWindow->setObjectName(QString::fromUtf8("AccuLoanWindow"));
        AccuLoanWindow->resize(703, 874);
        centralwidget = new QWidget(AccuLoanWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        label->setFont(font);
        label->setCursor(QCursor(Qt::PointingHandCursor));
        label->setTextFormat(Qt::PlainText);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        combobox_cal_type_ = new QComboBox(centralwidget);
        combobox_cal_type_->addItem(QString());
        combobox_cal_type_->addItem(QString());
        combobox_cal_type_->setObjectName(QString::fromUtf8("combobox_cal_type_"));
        combobox_cal_type_->setFont(font);
        combobox_cal_type_->setCursor(QCursor(Qt::PointingHandCursor));

        formLayout->setWidget(0, QFormLayout::FieldRole, combobox_cal_type_);

        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setEnabled(true);
        stackedWidget->setMaximumSize(QSize(16777215, 16777215));
        stackedWidget->setFont(font);
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page_area_based = new QWidget();
        page_area_based->setObjectName(QString::fromUtf8("page_area_based"));
        page_area_based->setFont(font);
        formLayout_2 = new QFormLayout(page_area_based);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_4 = new QLabel(page_area_based);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_4);

        line_price_per_meter = new QLineEdit(page_area_based);
        line_price_per_meter->setObjectName(QString::fromUtf8("line_price_per_meter"));
        line_price_per_meter->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, line_price_per_meter);

        label_5 = new QLabel(page_area_based);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_5);

        line_area = new QLineEdit(page_area_based);
        line_area->setObjectName(QString::fromUtf8("line_area"));
        line_area->setFont(font);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, line_area);

        label_6 = new QLabel(page_area_based);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_6);

        combobox_houseloan_ratio = new QComboBox(page_area_based);
        combobox_houseloan_ratio->addItem(QString());
        combobox_houseloan_ratio->addItem(QString());
        combobox_houseloan_ratio->addItem(QString());
        combobox_houseloan_ratio->addItem(QString());
        combobox_houseloan_ratio->addItem(QString());
        combobox_houseloan_ratio->addItem(QString());
        combobox_houseloan_ratio->addItem(QString());
        combobox_houseloan_ratio->addItem(QString());
        combobox_houseloan_ratio->addItem(QString());
        combobox_houseloan_ratio->addItem(QString());
        combobox_houseloan_ratio->addItem(QString());
        combobox_houseloan_ratio->addItem(QString());
        combobox_houseloan_ratio->addItem(QString());
        combobox_houseloan_ratio->setObjectName(QString::fromUtf8("combobox_houseloan_ratio"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(combobox_houseloan_ratio->sizePolicy().hasHeightForWidth());
        combobox_houseloan_ratio->setSizePolicy(sizePolicy);
        combobox_houseloan_ratio->setFont(font);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, combobox_houseloan_ratio);

        line_2 = new QFrame(page_area_based);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, line_2);

        line_3 = new QFrame(page_area_based);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, line_3);

        stackedWidget->addWidget(page_area_based);
        page_loan_based = new QWidget();
        page_loan_based->setObjectName(QString::fromUtf8("page_loan_based"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(page_loan_based->sizePolicy().hasHeightForWidth());
        page_loan_based->setSizePolicy(sizePolicy1);
        formLayout_3 = new QFormLayout(page_loan_based);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_2 = new QLabel(page_loan_based);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_2);

        line_loan_sum = new QLineEdit(page_loan_based);
        line_loan_sum->setObjectName(QString::fromUtf8("line_loan_sum"));
        line_loan_sum->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, line_loan_sum);

        stackedWidget->addWidget(page_loan_based);

        formLayout->setWidget(2, QFormLayout::SpanningRole, stackedWidget);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy1.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy1);
        label_8->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_8);

        combobox_paid_month = new QComboBox(centralwidget);
        combobox_paid_month->addItem(QString());
        combobox_paid_month->addItem(QString());
        combobox_paid_month->addItem(QString());
        combobox_paid_month->addItem(QString());
        combobox_paid_month->addItem(QString());
        combobox_paid_month->addItem(QString());
        combobox_paid_month->addItem(QString());
        combobox_paid_month->addItem(QString());
        combobox_paid_month->addItem(QString());
        combobox_paid_month->addItem(QString());
        combobox_paid_month->addItem(QString());
        combobox_paid_month->addItem(QString());
        combobox_paid_month->addItem(QString());
        combobox_paid_month->addItem(QString());
        combobox_paid_month->addItem(QString());
        combobox_paid_month->setObjectName(QString::fromUtf8("combobox_paid_month"));
        combobox_paid_month->setFont(font);

        formLayout->setWidget(4, QFormLayout::FieldRole, combobox_paid_month);

        line_4 = new QFrame(centralwidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(6, QFormLayout::LabelRole, line_4);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_10);

        combobox_input_rate_type = new QComboBox(centralwidget);
        combobox_input_rate_type->addItem(QString());
        combobox_input_rate_type->addItem(QString());
        combobox_input_rate_type->setObjectName(QString::fromUtf8("combobox_input_rate_type"));
        combobox_input_rate_type->setFont(font);
        combobox_input_rate_type->setCursor(QCursor(Qt::PointingHandCursor));

        formLayout->setWidget(7, QFormLayout::FieldRole, combobox_input_rate_type);

        stackedWidget_choose_rate = new QStackedWidget(centralwidget);
        stackedWidget_choose_rate->setObjectName(QString::fromUtf8("stackedWidget_choose_rate"));
        stackedWidget_choose_rate->setEnabled(true);
        stackedWidget_choose_rate->setMaximumSize(QSize(16777215, 16777215));
        stackedWidget_choose_rate->setFont(font);
        stackedWidget_choose_rate->setStyleSheet(QString::fromUtf8(""));
        page_defined_based = new QWidget();
        page_defined_based->setObjectName(QString::fromUtf8("page_defined_based"));
        page_defined_based->setFont(font);
        formLayout_4 = new QFormLayout(page_defined_based);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_11 = new QLabel(page_defined_based);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_11);

        combobox_defined_rate = new QComboBox(page_defined_based);
        combobox_defined_rate->addItem(QString());
        combobox_defined_rate->addItem(QString());
        combobox_defined_rate->addItem(QString());
        combobox_defined_rate->addItem(QString());
        combobox_defined_rate->addItem(QString());
        combobox_defined_rate->addItem(QString());
        combobox_defined_rate->addItem(QString());
        combobox_defined_rate->setObjectName(QString::fromUtf8("combobox_defined_rate"));
        combobox_defined_rate->setFont(font);
        combobox_defined_rate->setCursor(QCursor(Qt::PointingHandCursor));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, combobox_defined_rate);

        stackedWidget_choose_rate->addWidget(page_defined_based);
        page_input_based = new QWidget();
        page_input_based->setObjectName(QString::fromUtf8("page_input_based"));
        sizePolicy1.setHeightForWidth(page_input_based->sizePolicy().hasHeightForWidth());
        page_input_based->setSizePolicy(sizePolicy1);
        formLayout_5 = new QFormLayout(page_input_based);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        spinbox_loan_rate = new QDoubleSpinBox(page_input_based);
        spinbox_loan_rate->setObjectName(QString::fromUtf8("spinbox_loan_rate"));
        spinbox_loan_rate->setFont(font);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, spinbox_loan_rate);

        label_9 = new QLabel(page_input_based);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_9);

        stackedWidget_choose_rate->addWidget(page_input_based);

        formLayout->setWidget(9, QFormLayout::SpanningRole, stackedWidget_choose_rate);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(11, QFormLayout::LabelRole, label_3);

        radioButton_1 = new QRadioButton(centralwidget);
        radioButton_1->setObjectName(QString::fromUtf8("radioButton_1"));
        radioButton_1->setFont(font);

        formLayout->setWidget(11, QFormLayout::FieldRole, radioButton_1);

        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFont(font);

        formLayout->setWidget(13, QFormLayout::FieldRole, radioButton_2);

        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_clear->setFont(font1);
        pushButton_clear->setStyleSheet(QString::fromUtf8(""));

        formLayout->setWidget(15, QFormLayout::LabelRole, pushButton_clear);

        pushButton_confirm = new QPushButton(centralwidget);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(pushButton_confirm->sizePolicy().hasHeightForWidth());
        pushButton_confirm->setSizePolicy(sizePolicy2);
        pushButton_confirm->setFont(font1);
        pushButton_confirm->setStyleSheet(QString::fromUtf8(""));

        formLayout->setWidget(15, QFormLayout::FieldRole, pushButton_confirm);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(17, QFormLayout::LabelRole, line);

        line_5 = new QFrame(centralwidget);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::VLine);
        line_5->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(18, QFormLayout::LabelRole, line_5);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        formLayout->setWidget(19, QFormLayout::LabelRole, label_7);

        result_browser = new QTextBrowser(centralwidget);
        result_browser->setObjectName(QString::fromUtf8("result_browser"));
        result_browser->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(1);
        sizePolicy3.setHeightForWidth(result_browser->sizePolicy().hasHeightForWidth());
        result_browser->setSizePolicy(sizePolicy3);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(10);
        result_browser->setFont(font2);

        formLayout->setWidget(20, QFormLayout::SpanningRole, result_browser);

        AccuLoanWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(AccuLoanWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 703, 28));
        AccuLoanWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(AccuLoanWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        AccuLoanWindow->setStatusBar(statusbar);

        retranslateUi(AccuLoanWindow);
        QObject::connect(combobox_cal_type_, SIGNAL(currentIndexChanged(int)), stackedWidget, SLOT(setCurrentIndex(int)));
        QObject::connect(combobox_input_rate_type, SIGNAL(currentIndexChanged(int)), stackedWidget_choose_rate, SLOT(setCurrentIndex(int)));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AccuLoanWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AccuLoanWindow)
    {
        AccuLoanWindow->setWindowTitle(QApplication::translate("AccuLoanWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("AccuLoanWindow", "  \350\256\241\347\256\227\346\226\271\345\274\217\357\274\232                ", nullptr));
        combobox_cal_type_->setItemText(0, QApplication::translate("AccuLoanWindow", "\346\240\271\346\215\256\351\235\242\347\247\257\343\200\201\345\215\225\344\273\267\350\256\241\347\256\227", nullptr));
        combobox_cal_type_->setItemText(1, QApplication::translate("AccuLoanWindow", "\346\240\271\346\215\256\350\264\267\346\254\276\346\200\273\351\242\235\350\256\241\347\256\227", nullptr));

        label_4->setText(QApplication::translate("AccuLoanWindow", "\346\210\277\345\261\213\345\215\225\344\273\267\357\274\210\345\205\203/\345\271\263\347\261\263\357\274\211:", nullptr));
        label_5->setText(QApplication::translate("AccuLoanWindow", "\346\210\277\345\261\213\351\235\242\347\247\257\357\274\210\345\271\263\346\226\271\347\261\263\357\274\211\357\274\232", nullptr));
        label_6->setText(QApplication::translate("AccuLoanWindow", "\346\214\211\346\217\255\346\210\220\346\225\260\357\274\232", nullptr));
        combobox_houseloan_ratio->setItemText(0, QApplication::translate("AccuLoanWindow", "8\346\210\220", nullptr));
        combobox_houseloan_ratio->setItemText(1, QApplication::translate("AccuLoanWindow", "7.5\346\210\220", nullptr));
        combobox_houseloan_ratio->setItemText(2, QApplication::translate("AccuLoanWindow", "7\346\210\220", nullptr));
        combobox_houseloan_ratio->setItemText(3, QApplication::translate("AccuLoanWindow", "6.5\346\210\220", nullptr));
        combobox_houseloan_ratio->setItemText(4, QApplication::translate("AccuLoanWindow", "6\346\210\220", nullptr));
        combobox_houseloan_ratio->setItemText(5, QApplication::translate("AccuLoanWindow", "5.5\346\210\220", nullptr));
        combobox_houseloan_ratio->setItemText(6, QApplication::translate("AccuLoanWindow", "5\346\210\220", nullptr));
        combobox_houseloan_ratio->setItemText(7, QApplication::translate("AccuLoanWindow", "4.5\346\210\220", nullptr));
        combobox_houseloan_ratio->setItemText(8, QApplication::translate("AccuLoanWindow", "4\346\210\220", nullptr));
        combobox_houseloan_ratio->setItemText(9, QApplication::translate("AccuLoanWindow", "3.5\346\210\220", nullptr));
        combobox_houseloan_ratio->setItemText(10, QApplication::translate("AccuLoanWindow", "3\346\210\220", nullptr));
        combobox_houseloan_ratio->setItemText(11, QApplication::translate("AccuLoanWindow", "2.5\346\210\220", nullptr));
        combobox_houseloan_ratio->setItemText(12, QApplication::translate("AccuLoanWindow", "2\346\210\220", nullptr));

        label_2->setText(QApplication::translate("AccuLoanWindow", "\350\264\267\346\254\276\346\200\273\351\242\235\357\274\210\344\270\207\345\205\203\357\274\211\357\274\232   ", nullptr));
        label_8->setText(QApplication::translate("AccuLoanWindow", "  \346\214\211\346\217\255\345\271\264\346\225\260\357\274\232 ", nullptr));
        combobox_paid_month->setItemText(0, QApplication::translate("AccuLoanWindow", "15\345\271\264(180\346\234\237\357\274\211", nullptr));
        combobox_paid_month->setItemText(1, QApplication::translate("AccuLoanWindow", "14\345\271\264(168\346\234\237)", nullptr));
        combobox_paid_month->setItemText(2, QApplication::translate("AccuLoanWindow", "13\345\271\264(152\346\234\237\357\274\211", nullptr));
        combobox_paid_month->setItemText(3, QApplication::translate("AccuLoanWindow", "12\345\271\264(144\346\234\237\357\274\211", nullptr));
        combobox_paid_month->setItemText(4, QApplication::translate("AccuLoanWindow", "11\345\271\264(132\346\234\237\357\274\211", nullptr));
        combobox_paid_month->setItemText(5, QApplication::translate("AccuLoanWindow", "10\345\271\264(120\346\234\237\357\274\211", nullptr));
        combobox_paid_month->setItemText(6, QApplication::translate("AccuLoanWindow", "9\345\271\264  (108\346\234\237)", nullptr));
        combobox_paid_month->setItemText(7, QApplication::translate("AccuLoanWindow", "8\345\271\264  (96\346\234\237)", nullptr));
        combobox_paid_month->setItemText(8, QApplication::translate("AccuLoanWindow", "7\345\271\264\357\274\21084\346\234\237\357\274\211", nullptr));
        combobox_paid_month->setItemText(9, QApplication::translate("AccuLoanWindow", "6\345\271\264\357\274\21072\346\234\237\357\274\211", nullptr));
        combobox_paid_month->setItemText(10, QApplication::translate("AccuLoanWindow", "5\345\271\264\357\274\21060\346\234\237\357\274\211", nullptr));
        combobox_paid_month->setItemText(11, QApplication::translate("AccuLoanWindow", "4\345\271\264\357\274\21048\346\234\237\357\274\211", nullptr));
        combobox_paid_month->setItemText(12, QApplication::translate("AccuLoanWindow", "3\345\271\264\357\274\21036\346\234\237\357\274\211", nullptr));
        combobox_paid_month->setItemText(13, QApplication::translate("AccuLoanWindow", "2\345\271\264\357\274\21024\346\234\237\357\274\211", nullptr));
        combobox_paid_month->setItemText(14, QApplication::translate("AccuLoanWindow", "1\345\271\264\357\274\21012\346\234\237\357\274\211", nullptr));

        label_10->setText(QApplication::translate("AccuLoanWindow", "  \350\264\267\346\254\276\345\271\264\345\210\251\347\216\207\357\274\210%\357\274\211\357\274\232   ", nullptr));
        combobox_input_rate_type->setItemText(0, QApplication::translate("AccuLoanWindow", "\351\200\211\346\213\251\351\242\204\350\256\276\345\245\275\347\232\204\345\210\251\347\216\207", nullptr));
        combobox_input_rate_type->setItemText(1, QApplication::translate("AccuLoanWindow", "\351\200\211\346\213\251\350\207\252\345\256\232\344\271\211\347\232\204\345\210\251\347\216\207", nullptr));

        label_11->setText(QApplication::translate("AccuLoanWindow", "\351\200\211\346\213\251\351\242\204\350\256\276\345\210\251\347\216\207\357\274\232          ", nullptr));
        combobox_defined_rate->setItemText(0, QApplication::translate("AccuLoanWindow", "20\345\271\2643\346\234\21020\346\227\245\350\264\267\346\254\276\345\270\202\345\234\272\346\212\245\344\273\267\345\210\251\347\216\207\357\274\210LPR\357\274\211", nullptr));
        combobox_defined_rate->setItemText(1, QApplication::translate("AccuLoanWindow", "19\345\271\2649\346\234\21020\346\227\245\350\264\267\346\254\276\345\270\202\345\234\272\346\212\245\344\273\267\345\210\251\347\216\207\357\274\210LPR\357\274\211", nullptr));
        combobox_defined_rate->setItemText(2, QApplication::translate("AccuLoanWindow", "15\345\271\26410\346\234\21024\346\227\245\345\210\251\347\216\207\344\270\212\351\231\220\357\274\2101.1\345\200\215\357\274\211", nullptr));
        combobox_defined_rate->setItemText(3, QApplication::translate("AccuLoanWindow", "15\345\271\26410\346\234\21024\346\227\245\345\210\251\347\216\207\344\270\212\351\231\220\357\274\2101.05\345\200\215\357\274\211", nullptr));
        combobox_defined_rate->setItemText(4, QApplication::translate("AccuLoanWindow", "15\345\271\26410\346\234\21024\346\227\245\345\210\251\347\216\207\344\270\213\351\231\220\357\274\21085\346\212\230\357\274\211", nullptr));
        combobox_defined_rate->setItemText(5, QApplication::translate("AccuLoanWindow", "15\345\271\26410\346\234\21024\346\227\245\345\210\251\347\216\207\344\270\213\351\231\220\357\274\2107\346\212\230\357\274\211", nullptr));
        combobox_defined_rate->setItemText(6, QApplication::translate("AccuLoanWindow", "15\345\271\26410\346\234\21024\346\227\245\345\237\272\345\207\206\345\210\251\347\216\207", nullptr));

        label_9->setText(QApplication::translate("AccuLoanWindow", "\350\276\223\345\205\245\345\271\264\345\210\251\347\216\207\357\274\210%\357\274\211\357\274\232    ", nullptr));
        label_3->setText(QApplication::translate("AccuLoanWindow", "  \350\277\230\346\254\276\346\226\271\345\274\217\357\274\232", nullptr));
        radioButton_1->setText(QApplication::translate("AccuLoanWindow", "\347\255\211\351\242\235\346\234\254\346\201\257", nullptr));
        radioButton_2->setText(QApplication::translate("AccuLoanWindow", "\347\255\211\351\242\235\346\234\254\351\207\221", nullptr));
        pushButton_clear->setText(QApplication::translate("AccuLoanWindow", "\346\270\205 \351\233\266", nullptr));
        pushButton_confirm->setText(QApplication::translate("AccuLoanWindow", "\347\241\256 \350\256\244", nullptr));
        label_7->setText(QApplication::translate("AccuLoanWindow", "\346\210\277\350\264\267\350\256\241\347\256\227\347\273\223\346\236\234", nullptr));
        result_browser->setHtml(QApplication::translate("AccuLoanWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> </p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AccuLoanWindow: public Ui_AccuLoanWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCULOANWINDOW_H

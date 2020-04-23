/********************************************************************************
** Form generated from reading UI file 'commloanwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMLOANWINDOW_H
#define UI_COMMLOANWINDOW_H

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

class Ui_CommLoanWindow
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *combobox_cal_type;
    QStackedWidget *stackedWidget;
    QWidget *page_area_based;
    QFormLayout *formLayout_2;
    QLabel *label_4;
    QLineEdit *line_price_per_meter;
    QLabel *label_5;
    QLineEdit *line_area;
    QLabel *label_6;
    QComboBox *combobox_houseloan_ratio;
    QWidget *page_loan_based;
    QFormLayout *formLayout_3;
    QLabel *label_2;
    QLineEdit *line_loan_sum;
    QLabel *label_8;
    QComboBox *combo_box_paid_month;
    QLabel *label_9;
    QDoubleSpinBox *spinbox_loan_rate;
    QLabel *label_3;
    QRadioButton *radioButton_1;
    QRadioButton *radioButton_2;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_confirm;
    QLabel *label_7;
    QTextBrowser *result_browser;
    QFrame *line;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CommLoanWindow)
    {
        if (CommLoanWindow->objectName().isEmpty())
            CommLoanWindow->setObjectName(QString::fromUtf8("CommLoanWindow"));
        CommLoanWindow->resize(530, 722);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(CommLoanWindow->sizePolicy().hasHeightForWidth());
        CommLoanWindow->setSizePolicy(sizePolicy);
        CommLoanWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(CommLoanWindow);
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

        combobox_cal_type = new QComboBox(centralwidget);
        combobox_cal_type->addItem(QString());
        combobox_cal_type->addItem(QString());
        combobox_cal_type->setObjectName(QString::fromUtf8("combobox_cal_type"));
        combobox_cal_type->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, combobox_cal_type);

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

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_5);

        line_area = new QLineEdit(page_area_based);
        line_area->setObjectName(QString::fromUtf8("line_area"));
        line_area->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, line_area);

        label_6 = new QLabel(page_area_based);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_6);

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
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(combobox_houseloan_ratio->sizePolicy().hasHeightForWidth());
        combobox_houseloan_ratio->setSizePolicy(sizePolicy1);
        combobox_houseloan_ratio->setFont(font);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, combobox_houseloan_ratio);

        stackedWidget->addWidget(page_area_based);
        page_loan_based = new QWidget();
        page_loan_based->setObjectName(QString::fromUtf8("page_loan_based"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(page_loan_based->sizePolicy().hasHeightForWidth());
        page_loan_based->setSizePolicy(sizePolicy2);
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

        formLayout->setWidget(1, QFormLayout::SpanningRole, stackedWidget);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);
        label_8->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_8);

        combo_box_paid_month = new QComboBox(centralwidget);
        combo_box_paid_month->addItem(QString());
        combo_box_paid_month->addItem(QString());
        combo_box_paid_month->addItem(QString());
        combo_box_paid_month->addItem(QString());
        combo_box_paid_month->addItem(QString());
        combo_box_paid_month->addItem(QString());
        combo_box_paid_month->addItem(QString());
        combo_box_paid_month->addItem(QString());
        combo_box_paid_month->addItem(QString());
        combo_box_paid_month->addItem(QString());
        combo_box_paid_month->addItem(QString());
        combo_box_paid_month->addItem(QString());
        combo_box_paid_month->addItem(QString());
        combo_box_paid_month->addItem(QString());
        combo_box_paid_month->addItem(QString());
        combo_box_paid_month->setObjectName(QString::fromUtf8("combo_box_paid_month"));
        combo_box_paid_month->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, combo_box_paid_month);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_9);

        spinbox_loan_rate = new QDoubleSpinBox(centralwidget);
        spinbox_loan_rate->setObjectName(QString::fromUtf8("spinbox_loan_rate"));
        spinbox_loan_rate->setFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, spinbox_loan_rate);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        radioButton_1 = new QRadioButton(centralwidget);
        radioButton_1->setObjectName(QString::fromUtf8("radioButton_1"));
        radioButton_1->setFont(font);

        formLayout->setWidget(4, QFormLayout::FieldRole, radioButton_1);

        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFont(font);

        formLayout->setWidget(5, QFormLayout::FieldRole, radioButton_2);

        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_clear->setFont(font1);
        pushButton_clear->setStyleSheet(QString::fromUtf8(""));

        formLayout->setWidget(6, QFormLayout::LabelRole, pushButton_clear);

        pushButton_confirm = new QPushButton(centralwidget);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(pushButton_confirm->sizePolicy().hasHeightForWidth());
        pushButton_confirm->setSizePolicy(sizePolicy3);
        pushButton_confirm->setFont(font1);
        pushButton_confirm->setStyleSheet(QString::fromUtf8(""));

        formLayout->setWidget(6, QFormLayout::FieldRole, pushButton_confirm);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        formLayout->setWidget(8, QFormLayout::LabelRole, label_7);

        result_browser = new QTextBrowser(centralwidget);
        result_browser->setObjectName(QString::fromUtf8("result_browser"));
        result_browser->setEnabled(true);
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(result_browser->sizePolicy().hasHeightForWidth());
        result_browser->setSizePolicy(sizePolicy4);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(10);
        result_browser->setFont(font2);

        formLayout->setWidget(9, QFormLayout::SpanningRole, result_browser);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(7, QFormLayout::LabelRole, line);

        CommLoanWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CommLoanWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 530, 28));
        CommLoanWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(CommLoanWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CommLoanWindow->setStatusBar(statusbar);

        retranslateUi(CommLoanWindow);
        QObject::connect(combobox_cal_type, SIGNAL(activated(int)), stackedWidget, SLOT(setCurrentIndex(int)));

        QMetaObject::connectSlotsByName(CommLoanWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CommLoanWindow)
    {
        CommLoanWindow->setWindowTitle(QApplication::translate("CommLoanWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("CommLoanWindow", " \350\256\241\347\256\227\346\226\271\345\274\217\357\274\232                 ", nullptr));
        combobox_cal_type->setItemText(0, QApplication::translate("CommLoanWindow", "\346\240\271\346\215\256\351\235\242\347\247\257\343\200\201\345\215\225\344\273\267\350\256\241\347\256\227", nullptr));
        combobox_cal_type->setItemText(1, QApplication::translate("CommLoanWindow", "\346\240\271\346\215\256\350\264\267\346\254\276\346\200\273\351\242\235\350\256\241\347\256\227", nullptr));

        label_4->setText(QApplication::translate("CommLoanWindow", "\346\210\277\345\261\213\345\215\225\344\273\267\357\274\210\345\205\203/\345\271\263\347\261\263\357\274\211:", nullptr));
        label_5->setText(QApplication::translate("CommLoanWindow", "\346\210\277\345\261\213\351\235\242\347\247\257\357\274\210\345\271\263\346\226\271\347\261\263\357\274\211\357\274\232", nullptr));
        label_6->setText(QApplication::translate("CommLoanWindow", "\346\214\211\346\217\255\346\210\220\346\225\260\357\274\232", nullptr));
        combobox_houseloan_ratio->setItemText(0, QApplication::translate("CommLoanWindow", "8\346\210\220", nullptr));
        combobox_houseloan_ratio->setItemText(1, QApplication::translate("CommLoanWindow", "7.5\346\210\220", nullptr));
        combobox_houseloan_ratio->setItemText(2, QApplication::translate("CommLoanWindow", "7\346\210\220", nullptr));
        combobox_houseloan_ratio->setItemText(3, QApplication::translate("CommLoanWindow", "6.5\346\210\220", nullptr));
        combobox_houseloan_ratio->setItemText(4, QApplication::translate("CommLoanWindow", "6\346\210\220", nullptr));
        combobox_houseloan_ratio->setItemText(5, QApplication::translate("CommLoanWindow", "5.5\346\210\220", nullptr));
        combobox_houseloan_ratio->setItemText(6, QApplication::translate("CommLoanWindow", "5\346\210\220", nullptr));
        combobox_houseloan_ratio->setItemText(7, QApplication::translate("CommLoanWindow", "4.5\346\210\220", nullptr));
        combobox_houseloan_ratio->setItemText(8, QApplication::translate("CommLoanWindow", "4\346\210\220", nullptr));
        combobox_houseloan_ratio->setItemText(9, QApplication::translate("CommLoanWindow", "3.5\346\210\220", nullptr));
        combobox_houseloan_ratio->setItemText(10, QApplication::translate("CommLoanWindow", "3\346\210\220", nullptr));
        combobox_houseloan_ratio->setItemText(11, QApplication::translate("CommLoanWindow", "2.5\346\210\220", nullptr));
        combobox_houseloan_ratio->setItemText(12, QApplication::translate("CommLoanWindow", "2\346\210\220", nullptr));

        label_2->setText(QApplication::translate("CommLoanWindow", "\350\264\267\346\254\276\346\200\273\351\242\235\357\274\210\344\270\207\345\205\203\357\274\211\357\274\232   ", nullptr));
        label_8->setText(QApplication::translate("CommLoanWindow", " \346\214\211\346\217\255\345\271\264\346\225\260\357\274\232 ", nullptr));
        combo_box_paid_month->setItemText(0, QApplication::translate("CommLoanWindow", "15\345\271\264(180\346\234\237\357\274\211", nullptr));
        combo_box_paid_month->setItemText(1, QApplication::translate("CommLoanWindow", "14\345\271\264(168\346\234\237)", nullptr));
        combo_box_paid_month->setItemText(2, QApplication::translate("CommLoanWindow", "13\345\271\264(152\346\234\237\357\274\211", nullptr));
        combo_box_paid_month->setItemText(3, QApplication::translate("CommLoanWindow", "12\345\271\264(144\346\234\237\357\274\211", nullptr));
        combo_box_paid_month->setItemText(4, QApplication::translate("CommLoanWindow", "11\345\271\264(132\346\234\237\357\274\211", nullptr));
        combo_box_paid_month->setItemText(5, QApplication::translate("CommLoanWindow", "10\345\271\264(120\346\234\237\357\274\211", nullptr));
        combo_box_paid_month->setItemText(6, QApplication::translate("CommLoanWindow", "9\345\271\264  (108\346\234\237)", nullptr));
        combo_box_paid_month->setItemText(7, QApplication::translate("CommLoanWindow", "8\345\271\264  (96\346\234\237)", nullptr));
        combo_box_paid_month->setItemText(8, QApplication::translate("CommLoanWindow", "7\345\271\264\357\274\21084\346\234\237\357\274\211", nullptr));
        combo_box_paid_month->setItemText(9, QApplication::translate("CommLoanWindow", "6\345\271\264\357\274\21072\346\234\237\357\274\211", nullptr));
        combo_box_paid_month->setItemText(10, QApplication::translate("CommLoanWindow", "5\345\271\264\357\274\21060\346\234\237\357\274\211", nullptr));
        combo_box_paid_month->setItemText(11, QApplication::translate("CommLoanWindow", "4\345\271\264\357\274\21048\346\234\237\357\274\211", nullptr));
        combo_box_paid_month->setItemText(12, QApplication::translate("CommLoanWindow", "3\345\271\264\357\274\21036\346\234\237\357\274\211", nullptr));
        combo_box_paid_month->setItemText(13, QApplication::translate("CommLoanWindow", "2\345\271\264\357\274\21024\346\234\237\357\274\211", nullptr));
        combo_box_paid_month->setItemText(14, QApplication::translate("CommLoanWindow", "1\345\271\264\357\274\21012\346\234\237\357\274\211", nullptr));

        label_9->setText(QApplication::translate("CommLoanWindow", " \350\264\267\346\254\276\345\271\264\345\210\251\347\216\207\357\274\210%\357\274\211\357\274\232 ", nullptr));
        label_3->setText(QApplication::translate("CommLoanWindow", " \350\277\230\346\254\276\346\226\271\345\274\217\357\274\232", nullptr));
        radioButton_1->setText(QApplication::translate("CommLoanWindow", "\347\255\211\351\242\235\346\234\254\346\201\257", nullptr));
        radioButton_2->setText(QApplication::translate("CommLoanWindow", "\347\255\211\351\242\235\346\234\254\351\207\221", nullptr));
        pushButton_clear->setText(QApplication::translate("CommLoanWindow", "\346\270\205 \351\233\266", nullptr));
        pushButton_confirm->setText(QApplication::translate("CommLoanWindow", "\347\241\256 \350\256\244", nullptr));
        label_7->setText(QApplication::translate("CommLoanWindow", "\346\210\277\350\264\267\350\256\241\347\256\227\347\273\223\346\236\234", nullptr));
        result_browser->setHtml(QApplication::translate("CommLoanWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> </p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CommLoanWindow: public Ui_CommLoanWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMLOANWINDOW_H

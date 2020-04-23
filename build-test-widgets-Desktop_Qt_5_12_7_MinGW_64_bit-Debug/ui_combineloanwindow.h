/********************************************************************************
** Form generated from reading UI file 'combineloanwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMBINELOANWINDOW_H
#define UI_COMBINELOANWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CombineLoanWindow
{
public:
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit_comm;
    QLabel *label_5;
    QDoubleSpinBox *spinbox_comm;
    QLabel *label_2;
    QLineEdit *lineEdit_accu_fund;
    QLabel *label_6;
    QLabel *label_4;
    QComboBox *combo_box_paid_month;
    QLabel *label_3;
    QRadioButton *radioButton_1;
    QRadioButton *radioButton_2;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_confirm;
    QDoubleSpinBox *spinbox_accu_fund;
    QTextBrowser *result_browser;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QButtonGroup *buttonGroup;

    void setupUi(QMainWindow *CombineLoanWindow)
    {
        if (CombineLoanWindow->objectName().isEmpty())
            CombineLoanWindow->setObjectName(QString::fromUtf8("CombineLoanWindow"));
        CombineLoanWindow->resize(589, 856);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(CombineLoanWindow->sizePolicy().hasHeightForWidth());
        CombineLoanWindow->setSizePolicy(sizePolicy);
        CombineLoanWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(CombineLoanWindow);
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

        lineEdit_comm = new QLineEdit(centralwidget);
        lineEdit_comm->setObjectName(QString::fromUtf8("lineEdit_comm"));
        lineEdit_comm->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_comm);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setCursor(QCursor(Qt::PointingHandCursor));
        label_5->setTextFormat(Qt::PlainText);
        label_5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        spinbox_comm = new QDoubleSpinBox(centralwidget);
        spinbox_comm->setObjectName(QString::fromUtf8("spinbox_comm"));
        spinbox_comm->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, spinbox_comm);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setCursor(QCursor(Qt::PointingHandCursor));
        label_2->setTextFormat(Qt::PlainText);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        lineEdit_accu_fund = new QLineEdit(centralwidget);
        lineEdit_accu_fund->setObjectName(QString::fromUtf8("lineEdit_accu_fund"));
        lineEdit_accu_fund->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_accu_fund);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_6);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

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

        formLayout->setWidget(4, QFormLayout::FieldRole, combo_box_paid_month);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_3);

        radioButton_1 = new QRadioButton(centralwidget);
        buttonGroup = new QButtonGroup(CombineLoanWindow);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->setExclusive(true);
        buttonGroup->addButton(radioButton_1);
        radioButton_1->setObjectName(QString::fromUtf8("radioButton_1"));
        radioButton_1->setFont(font);

        formLayout->setWidget(5, QFormLayout::FieldRole, radioButton_1);

        radioButton_2 = new QRadioButton(centralwidget);
        buttonGroup->addButton(radioButton_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setFont(font);

        formLayout->setWidget(6, QFormLayout::FieldRole, radioButton_2);

        pushButton_clear = new QPushButton(centralwidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_clear->setFont(font1);

        formLayout->setWidget(7, QFormLayout::LabelRole, pushButton_clear);

        pushButton_confirm = new QPushButton(centralwidget);
        pushButton_confirm->setObjectName(QString::fromUtf8("pushButton_confirm"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton_confirm->sizePolicy().hasHeightForWidth());
        pushButton_confirm->setSizePolicy(sizePolicy1);
        pushButton_confirm->setFont(font1);

        formLayout->setWidget(7, QFormLayout::FieldRole, pushButton_confirm);

        spinbox_accu_fund = new QDoubleSpinBox(centralwidget);
        spinbox_accu_fund->setObjectName(QString::fromUtf8("spinbox_accu_fund"));
        sizePolicy1.setHeightForWidth(spinbox_accu_fund->sizePolicy().hasHeightForWidth());
        spinbox_accu_fund->setSizePolicy(sizePolicy1);
        spinbox_accu_fund->setFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, spinbox_accu_fund);

        result_browser = new QTextBrowser(centralwidget);
        result_browser->setObjectName(QString::fromUtf8("result_browser"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(1);
        sizePolicy2.setHeightForWidth(result_browser->sizePolicy().hasHeightForWidth());
        result_browser->setSizePolicy(sizePolicy2);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(10);
        result_browser->setFont(font2);

        formLayout->setWidget(11, QFormLayout::SpanningRole, result_browser);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(9, QFormLayout::LabelRole, line);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(8, QFormLayout::LabelRole, line_2);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font1);

        formLayout->setWidget(10, QFormLayout::LabelRole, label_7);

        CombineLoanWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CombineLoanWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 589, 28));
        CombineLoanWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(CombineLoanWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CombineLoanWindow->setStatusBar(statusbar);

        retranslateUi(CombineLoanWindow);

        QMetaObject::connectSlotsByName(CombineLoanWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CombineLoanWindow)
    {
        CombineLoanWindow->setWindowTitle(QApplication::translate("CombineLoanWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("CombineLoanWindow", "\345\225\206\344\270\232\350\264\267\346\254\276\351\242\235   \357\274\210\344\270\207\357\274\211\357\274\232", nullptr));
        label_5->setText(QApplication::translate("CombineLoanWindow", "\345\225\206\350\264\267\345\271\264\345\210\251\347\216\207   \357\274\210%\357\274\211 \357\274\232", nullptr));
        label_2->setText(QApplication::translate("CombineLoanWindow", "\345\205\254\347\247\257\351\207\221\350\264\267\346\254\276\351\242\235\357\274\210\344\270\207\357\274\211\357\274\232", nullptr));
        label_6->setText(QApplication::translate("CombineLoanWindow", "\345\205\254\347\247\257\351\207\221\345\271\264\345\210\251\347\216\207\357\274\210%\357\274\211\357\274\232", nullptr));
        label_4->setText(QApplication::translate("CombineLoanWindow", "\346\214\211\346\217\255\345\271\264\346\225\260\357\274\232", nullptr));
        combo_box_paid_month->setItemText(0, QApplication::translate("CombineLoanWindow", "15\345\271\264(180\346\234\237\357\274\211", nullptr));
        combo_box_paid_month->setItemText(1, QApplication::translate("CombineLoanWindow", "14\345\271\264(168\346\234\237)", nullptr));
        combo_box_paid_month->setItemText(2, QApplication::translate("CombineLoanWindow", "13\345\271\264(152\346\234\237\357\274\211", nullptr));
        combo_box_paid_month->setItemText(3, QApplication::translate("CombineLoanWindow", "12\345\271\264(144\346\234\237\357\274\211", nullptr));
        combo_box_paid_month->setItemText(4, QApplication::translate("CombineLoanWindow", "11\345\271\264(132\346\234\237\357\274\211", nullptr));
        combo_box_paid_month->setItemText(5, QApplication::translate("CombineLoanWindow", "10\345\271\264(120\346\234\237\357\274\211", nullptr));
        combo_box_paid_month->setItemText(6, QApplication::translate("CombineLoanWindow", "9\345\271\264  (108\346\234\237)", nullptr));
        combo_box_paid_month->setItemText(7, QApplication::translate("CombineLoanWindow", "8\345\271\264  (96\346\234\237)", nullptr));
        combo_box_paid_month->setItemText(8, QApplication::translate("CombineLoanWindow", "7\345\271\264\357\274\21084\346\234\237\357\274\211", nullptr));
        combo_box_paid_month->setItemText(9, QApplication::translate("CombineLoanWindow", "6\345\271\264\357\274\21072\346\234\237\357\274\211", nullptr));
        combo_box_paid_month->setItemText(10, QApplication::translate("CombineLoanWindow", "5\345\271\264\357\274\21060\346\234\237\357\274\211", nullptr));
        combo_box_paid_month->setItemText(11, QApplication::translate("CombineLoanWindow", "4\345\271\264\357\274\21048\346\234\237\357\274\211", nullptr));
        combo_box_paid_month->setItemText(12, QApplication::translate("CombineLoanWindow", "3\345\271\264\357\274\21036\346\234\237\357\274\211", nullptr));
        combo_box_paid_month->setItemText(13, QApplication::translate("CombineLoanWindow", "2\345\271\264\357\274\21024\346\234\237\357\274\211", nullptr));
        combo_box_paid_month->setItemText(14, QApplication::translate("CombineLoanWindow", "1\345\271\264\357\274\21012\346\234\237\357\274\211", nullptr));

        label_3->setText(QApplication::translate("CombineLoanWindow", "\350\277\230\346\254\276\346\226\271\345\274\217\357\274\232", nullptr));
        radioButton_1->setText(QApplication::translate("CombineLoanWindow", "\347\255\211\351\242\235\346\234\254\346\201\257", nullptr));
        radioButton_2->setText(QApplication::translate("CombineLoanWindow", "\347\255\211\351\242\235\346\234\254\351\207\221", nullptr));
        pushButton_clear->setText(QApplication::translate("CombineLoanWindow", "\346\270\205 \351\233\266", nullptr));
        pushButton_confirm->setText(QApplication::translate("CombineLoanWindow", "\347\241\256 \350\256\244", nullptr));
        result_browser->setHtml(QApplication::translate("CombineLoanWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\276\256\350\275\257\351\233\205\351\273\221'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"> </p></body></html>", nullptr));
        label_7->setText(QApplication::translate("CombineLoanWindow", "\346\210\277\350\264\267\350\256\241\347\256\227\347\273\223\346\236\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CombineLoanWindow: public Ui_CombineLoanWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMBINELOANWINDOW_H

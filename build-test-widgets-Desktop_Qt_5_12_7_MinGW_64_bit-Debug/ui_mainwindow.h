/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionhelp1;
    QAction *actionhelo2;
    QAction *actionhelp3;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushbutton_comm_loan;
    QSpacerItem *verticalSpacer;
    QPushButton *pushbutton_accu_loan;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushbutton_combine_loan;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushbutton_history_query;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayoutRight;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayoutLeft;
    QLabel *welcomeMsg;
    QLabel *label;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(855, 475);
        actionhelp1 = new QAction(MainWindow);
        actionhelp1->setObjectName(QString::fromUtf8("actionhelp1"));
        actionhelo2 = new QAction(MainWindow);
        actionhelo2->setObjectName(QString::fromUtf8("actionhelo2"));
        actionhelp3 = new QAction(MainWindow);
        actionhelp3->setObjectName(QString::fromUtf8("actionhelp3"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 100, 351, 311));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushbutton_comm_loan = new QPushButton(verticalLayoutWidget);
        pushbutton_comm_loan->setObjectName(QString::fromUtf8("pushbutton_comm_loan"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        pushbutton_comm_loan->setFont(font);
        pushbutton_comm_loan->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(pushbutton_comm_loan);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pushbutton_accu_loan = new QPushButton(verticalLayoutWidget);
        pushbutton_accu_loan->setObjectName(QString::fromUtf8("pushbutton_accu_loan"));
        pushbutton_accu_loan->setFont(font);
        pushbutton_accu_loan->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(pushbutton_accu_loan);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushbutton_combine_loan = new QPushButton(verticalLayoutWidget);
        pushbutton_combine_loan->setObjectName(QString::fromUtf8("pushbutton_combine_loan"));
        pushbutton_combine_loan->setFont(font);
        pushbutton_combine_loan->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(pushbutton_combine_loan);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        pushbutton_history_query = new QPushButton(verticalLayoutWidget);
        pushbutton_history_query->setObjectName(QString::fromUtf8("pushbutton_history_query"));
        pushbutton_history_query->setFont(font);
        pushbutton_history_query->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(pushbutton_history_query);

        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(370, 100, 471, 311));
        horizontalLayoutRight = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayoutRight->setObjectName(QString::fromUtf8("horizontalLayoutRight"));
        horizontalLayoutRight->setSizeConstraint(QLayout::SetDefaultConstraint);
        horizontalLayoutRight->setContentsMargins(0, 0, 0, 0);
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(20, 0, 441, 91));
        horizontalLayoutLeft = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayoutLeft->setObjectName(QString::fromUtf8("horizontalLayoutLeft"));
        horizontalLayoutLeft->setContentsMargins(0, 0, 0, 0);
        welcomeMsg = new QLabel(horizontalLayoutWidget_2);
        welcomeMsg->setObjectName(QString::fromUtf8("welcomeMsg"));
        sizePolicy.setHeightForWidth(welcomeMsg->sizePolicy().hasHeightForWidth());
        welcomeMsg->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(11);
        welcomeMsg->setFont(font1);

        horizontalLayoutLeft->addWidget(welcomeMsg);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(500, 20, 351, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(11);
        font2.setBold(false);
        font2.setWeight(50);
        label->setFont(font2);
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionhelp1->setText(QApplication::translate("MainWindow", "help1", nullptr));
        actionhelo2->setText(QApplication::translate("MainWindow", "helo2", nullptr));
        actionhelp3->setText(QApplication::translate("MainWindow", "help3", nullptr));
        pushbutton_comm_loan->setText(QApplication::translate("MainWindow", "\345\225\206\344\270\232\350\264\267\346\254\276", nullptr));
        pushbutton_accu_loan->setText(QApplication::translate("MainWindow", "\345\205\254\347\247\257\351\207\221\350\264\267\346\254\276", nullptr));
        pushbutton_combine_loan->setText(QApplication::translate("MainWindow", "\347\273\204\345\220\210\345\236\213\350\264\267\346\254\276", nullptr));
        pushbutton_history_query->setText(QApplication::translate("MainWindow", "\345\216\206\345\217\262\346\237\245\350\257\242\350\256\260\345\275\225", nullptr));
        welcomeMsg->setText(QApplication::translate("MainWindow", "\346\254\242\350\277\216\346\202\250\357\274\214\347\224\250\346\210\267carlwang\357\274\201...tbd", nullptr));
        label->setText(QApplication::translate("MainWindow", " \346\210\277\350\264\267\345\260\217\347\247\221\346\231\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

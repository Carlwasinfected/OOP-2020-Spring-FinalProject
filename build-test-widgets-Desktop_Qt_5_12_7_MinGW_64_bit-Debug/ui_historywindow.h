/********************************************************************************
** Form generated from reading UI file 'historywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HISTORYWINDOW_H
#define UI_HISTORYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HistoryWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QPushButton *pushutton_clear_history;
    QPushButton *pushbutton_return;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *HistoryWindow)
    {
        if (HistoryWindow->objectName().isEmpty())
            HistoryWindow->setObjectName(QString::fromUtf8("HistoryWindow"));
        HistoryWindow->resize(642, 531);
        centralwidget = new QWidget(HistoryWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setEnabled(true);

        verticalLayout->addWidget(textBrowser);

        pushutton_clear_history = new QPushButton(centralwidget);
        pushutton_clear_history->setObjectName(QString::fromUtf8("pushutton_clear_history"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        pushutton_clear_history->setFont(font);

        verticalLayout->addWidget(pushutton_clear_history);

        pushbutton_return = new QPushButton(centralwidget);
        pushbutton_return->setObjectName(QString::fromUtf8("pushbutton_return"));
        pushbutton_return->setFont(font);
        pushbutton_return->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(pushbutton_return);

        HistoryWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(HistoryWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 642, 28));
        HistoryWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(HistoryWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        HistoryWindow->setStatusBar(statusbar);

        retranslateUi(HistoryWindow);

        QMetaObject::connectSlotsByName(HistoryWindow);
    } // setupUi

    void retranslateUi(QMainWindow *HistoryWindow)
    {
        HistoryWindow->setWindowTitle(QApplication::translate("HistoryWindow", "MainWindow", nullptr));
        pushutton_clear_history->setText(QApplication::translate("HistoryWindow", "\346\270\205 \351\233\266", nullptr));
        pushbutton_return->setText(QApplication::translate("HistoryWindow", "\350\277\224 \345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HistoryWindow: public Ui_HistoryWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HISTORYWINDOW_H

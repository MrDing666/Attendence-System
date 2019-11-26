/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created: Sun Oct 20 16:32:48 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>
#include "rotatenumberlabel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *manageLogin;
    QAction *action_2;
    QWidget *centralwidget;
    QLabel *lb_date;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_show;
    QLabel *lb_red;
    QSpacerItem *horizontalSpacer_5;
    QLabel *lb_tip;
    QSpacerItem *horizontalSpacer_6;
    QLabel *lb_green;
    QLabel *label_3;
    QLabel *label;
    QWidget *widget;
    QLCDNumber *lcdNumber;
    RotateNumberLabel *lb_minute;
    RotateNumberLabel *lb_hour;
    QPushButton *ptn_clockIN;
    QPushButton *ptn_sysLogin;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 500);
        MainWindow->setMinimumSize(QSize(800, 500));
        MainWindow->setMaximumSize(QSize(800, 500));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        manageLogin = new QAction(MainWindow);
        manageLogin->setObjectName(QString::fromUtf8("manageLogin"));
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lb_date = new QLabel(centralwidget);
        lb_date->setObjectName(QString::fromUtf8("lb_date"));
        lb_date->setGeometry(QRect(10, 89, 300, 41));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        lb_date->setFont(font);
        lb_date->setLayoutDirection(Qt::LeftToRight);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 340, 521, 121));
        horizontalLayout_show = new QHBoxLayout(layoutWidget);
        horizontalLayout_show->setObjectName(QString::fromUtf8("horizontalLayout_show"));
        horizontalLayout_show->setContentsMargins(0, 0, 0, 0);
        lb_red = new QLabel(layoutWidget);
        lb_red->setObjectName(QString::fromUtf8("lb_red"));
        lb_red->setMinimumSize(QSize(60, 60));
        lb_red->setMaximumSize(QSize(60, 60));
        lb_red->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"border-radius: 30px;"));

        horizontalLayout_show->addWidget(lb_red);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_show->addItem(horizontalSpacer_5);

        lb_tip = new QLabel(layoutWidget);
        lb_tip->setObjectName(QString::fromUtf8("lb_tip"));
        lb_tip->setMinimumSize(QSize(0, 0));
        lb_tip->setMaximumSize(QSize(16777215, 16777215));
        QFont font1;
        font1.setPointSize(30);
        lb_tip->setFont(font1);

        horizontalLayout_show->addWidget(lb_tip);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_show->addItem(horizontalSpacer_6);

        lb_green = new QLabel(layoutWidget);
        lb_green->setObjectName(QString::fromUtf8("lb_green"));
        lb_green->setMinimumSize(QSize(60, 60));
        lb_green->setMaximumSize(QSize(60, 60));
        lb_green->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);\n"
"border-radius: 30px;"));

        horizontalLayout_show->addWidget(lb_green);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(520, 130, 72, 16));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 0, 500, 90));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Images/log001.png")));
        label->setScaledContents(true);
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 800, 475));
        widget->setMinimumSize(QSize(800, 475));
        widget->setMaximumSize(QSize(800, 475));
        widget->setStyleSheet(QString::fromUtf8("background-image: url(:/Images/bg3.png);"));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(481, 141, 70, 110));
        lcdNumber->setMinimumSize(QSize(70, 110));
        lcdNumber->setMaximumSize(QSize(70, 110));
        lcdNumber->setSizeIncrement(QSize(70, 80));
        lcdNumber->setFrameShape(QFrame::NoFrame);
        lcdNumber->setDigitCount(2);
        lb_minute = new RotateNumberLabel(centralwidget);
        lb_minute->setObjectName(QString::fromUtf8("lb_minute"));
        lb_minute->setGeometry(QRect(357, 141, 100, 110));
        lb_minute->setMinimumSize(QSize(100, 110));
        lb_minute->setMaximumSize(QSize(100, 110));
        lb_minute->setSizeIncrement(QSize(70, 80));
        lb_hour = new RotateNumberLabel(centralwidget);
        lb_hour->setObjectName(QString::fromUtf8("lb_hour"));
        lb_hour->setGeometry(QRect(250, 141, 100, 110));
        lb_hour->setMinimumSize(QSize(100, 110));
        lb_hour->setMaximumSize(QSize(100, 110));
        ptn_clockIN = new QPushButton(centralwidget);
        ptn_clockIN->setObjectName(QString::fromUtf8("ptn_clockIN"));
        ptn_clockIN->setGeometry(QRect(212, 261, 80, 80));
        ptn_clockIN->setMinimumSize(QSize(80, 80));
        ptn_clockIN->setSizeIncrement(QSize(80, 80));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Bahnschrift Light"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        ptn_clockIN->setFont(font2);
        ptn_clockIN->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/Sign in.png);"));
        ptn_sysLogin = new QPushButton(centralwidget);
        ptn_sysLogin->setObjectName(QString::fromUtf8("ptn_sysLogin"));
        ptn_sysLogin->setGeometry(QRect(509, 261, 80, 80));
        ptn_sysLogin->setMinimumSize(QSize(80, 80));
        ptn_sysLogin->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/guanliyuan.png);"));
        MainWindow->setCentralWidget(centralwidget);
        widget->raise();
        lb_date->raise();
        layoutWidget->raise();
        label_3->raise();
        label->raise();
        lcdNumber->raise();
        lb_minute->raise();
        lb_hour->raise();
        ptn_clockIN->raise();
        ptn_sysLogin->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(manageLogin, SIGNAL(triggered()), manageLogin, SLOT(trigger()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        manageLogin->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        action_2->setText(QApplication::translate("MainWindow", "\346\263\250\351\224\200", 0, QApplication::UnicodeUTF8));
        lb_date->setText(QApplication::translate("MainWindow", "<html><head/><body><p align=\"center\">TIME</p></body></html>", 0, QApplication::UnicodeUTF8));
        lb_tip->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_3->setText(QString());
        label->setText(QString());
        lb_minute->setText(QApplication::translate("MainWindow", "Minute", 0, QApplication::UnicodeUTF8));
        lb_hour->setText(QApplication::translate("MainWindow", "Hour", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        ptn_clockIN->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>\347\202\271\345\207\273\346\211\223\345\215\241</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        ptn_clockIN->setText(QString());
        ptn_sysLogin->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

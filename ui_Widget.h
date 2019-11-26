/********************************************************************************
** Form generated from reading UI file 'Widget.ui'
**
** Created: Thu Jun 6 13:14:13 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "rotatenumberlabel.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLineEdit *dbPathEdit;
    QPushButton *browseBtn;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *scanBtn;
    QSpacerItem *horizontalSpacer_3;
    QLabel *dateLabel;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    RotateNumberLabel *hourLabel;
    RotateNumberLabel *minuteLabel;
    QLCDNumber *lcdNumber;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *redLabel;
    QSpacerItem *horizontalSpacer_5;
    QLabel *tipLabel;
    QSpacerItem *horizontalSpacer_6;
    QLabel *greenLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(562, 269);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        dbPathEdit = new QLineEdit(Widget);
        dbPathEdit->setObjectName(QString::fromUtf8("dbPathEdit"));
        dbPathEdit->setReadOnly(true);

        horizontalLayout_4->addWidget(dbPathEdit);

        browseBtn = new QPushButton(Widget);
        browseBtn->setObjectName(QString::fromUtf8("browseBtn"));

        horizontalLayout_4->addWidget(browseBtn);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        scanBtn = new QPushButton(Widget);
        scanBtn->setObjectName(QString::fromUtf8("scanBtn"));

        horizontalLayout_2->addWidget(scanBtn);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        dateLabel = new QLabel(Widget);
        dateLabel->setObjectName(QString::fromUtf8("dateLabel"));

        horizontalLayout_2->addWidget(dateLabel);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        hourLabel = new RotateNumberLabel(Widget);
        hourLabel->setObjectName(QString::fromUtf8("hourLabel"));
        hourLabel->setMinimumSize(QSize(90, 96));

        horizontalLayout->addWidget(hourLabel);

        minuteLabel = new RotateNumberLabel(Widget);
        minuteLabel->setObjectName(QString::fromUtf8("minuteLabel"));
        minuteLabel->setMinimumSize(QSize(90, 96));

        horizontalLayout->addWidget(minuteLabel);

        lcdNumber = new QLCDNumber(Widget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setMinimumSize(QSize(64, 0));
        lcdNumber->setFrameShape(QFrame::NoFrame);
        lcdNumber->setDigitCount(2);

        horizontalLayout->addWidget(lcdNumber);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        redLabel = new QLabel(Widget);
        redLabel->setObjectName(QString::fromUtf8("redLabel"));
        redLabel->setMinimumSize(QSize(60, 60));
        redLabel->setMaximumSize(QSize(60, 60));
        redLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);\n"
"border-radius: 30px;"));

        horizontalLayout_3->addWidget(redLabel);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        tipLabel = new QLabel(Widget);
        tipLabel->setObjectName(QString::fromUtf8("tipLabel"));
        QFont font;
        font.setPointSize(36);
        tipLabel->setFont(font);

        horizontalLayout_3->addWidget(tipLabel);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        greenLabel = new QLabel(Widget);
        greenLabel->setObjectName(QString::fromUtf8("greenLabel"));
        greenLabel->setMinimumSize(QSize(60, 60));
        greenLabel->setMaximumSize(QSize(60, 60));
        greenLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 255, 0);\n"
"border-radius: 30px;"));

        horizontalLayout_3->addWidget(greenLabel);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\351\227\250\347\246\201\346\250\241\346\213\237\347\263\273\347\273\237\350\200\203\345\213\244\347\250\213\345\272\217", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Widget", "\346\225\260\346\215\256\345\272\223", 0, QApplication::UnicodeUTF8));
        browseBtn->setText(QApplication::translate("Widget", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        scanBtn->setText(QApplication::translate("Widget", "\350\257\273\345\215\241", 0, QApplication::UnicodeUTF8));
        dateLabel->setText(QApplication::translate("Widget", "TextLabel", 0, QApplication::UnicodeUTF8));
        hourLabel->setText(QApplication::translate("Widget", "TextLabel", 0, QApplication::UnicodeUTF8));
        minuteLabel->setText(QApplication::translate("Widget", "TextLabel", 0, QApplication::UnicodeUTF8));
        tipLabel->setText(QApplication::translate("Widget", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H

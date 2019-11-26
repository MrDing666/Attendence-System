/********************************************************************************
** Form generated from reading UI file 'ManageControl.ui'
**
** Created: Sun Oct 20 16:32:48 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGECONTROL_H
#define UI_MANAGECONTROL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageControl
{
public:
    QPushButton *pbn_back;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *ptn_addCard;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *ptn_deleteCard;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *ptn_editCard;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *ptn_searchCard;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *ptn_systemManage;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *lb_sysName;

    void setupUi(QWidget *ManageControl)
    {
        if (ManageControl->objectName().isEmpty())
            ManageControl->setObjectName(QString::fromUtf8("ManageControl"));
        ManageControl->resize(800, 400);
        ManageControl->setMinimumSize(QSize(800, 400));
        ManageControl->setMaximumSize(QSize(800, 400));
        pbn_back = new QPushButton(ManageControl);
        pbn_back->setObjectName(QString::fromUtf8("pbn_back"));
        pbn_back->setGeometry(QRect(0, 330, 101, 61));
        pbn_back->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/back.png);"));
        label = new QLabel(ManageControl);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(143, 21, 500, 90));
        label->setMinimumSize(QSize(500, 90));
        label->setMaximumSize(QSize(500, 90));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Images/log001.png")));
        label->setScaledContents(true);
        label->setWordWrap(true);
        label->setOpenExternalLinks(false);
        layoutWidget = new QWidget(ManageControl);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 220, 801, 101));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        ptn_addCard = new QPushButton(layoutWidget);
        ptn_addCard->setObjectName(QString::fromUtf8("ptn_addCard"));
        ptn_addCard->setMinimumSize(QSize(80, 80));
        ptn_addCard->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/tianjia.png);"));

        horizontalLayout_2->addWidget(ptn_addCard);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        ptn_deleteCard = new QPushButton(layoutWidget);
        ptn_deleteCard->setObjectName(QString::fromUtf8("ptn_deleteCard"));
        ptn_deleteCard->setMinimumSize(QSize(80, 80));
        ptn_deleteCard->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/shanchu.png);"));

        horizontalLayout_2->addWidget(ptn_deleteCard);

        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_8);

        ptn_editCard = new QPushButton(layoutWidget);
        ptn_editCard->setObjectName(QString::fromUtf8("ptn_editCard"));
        ptn_editCard->setMinimumSize(QSize(80, 80));
        ptn_editCard->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/xiugai.png);"));

        horizontalLayout_2->addWidget(ptn_editCard);

        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_7);

        ptn_searchCard = new QPushButton(layoutWidget);
        ptn_searchCard->setObjectName(QString::fromUtf8("ptn_searchCard"));
        ptn_searchCard->setMinimumSize(QSize(80, 80));
        ptn_searchCard->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/chaxun.png);"));

        horizontalLayout_2->addWidget(ptn_searchCard);

        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);

        ptn_systemManage = new QPushButton(layoutWidget);
        ptn_systemManage->setObjectName(QString::fromUtf8("ptn_systemManage"));
        ptn_systemManage->setMinimumSize(QSize(80, 80));
        ptn_systemManage->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/superManager .png);"));

        horizontalLayout_2->addWidget(ptn_systemManage);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        ptn_systemManage->raise();
        ptn_searchCard->raise();
        ptn_addCard->raise();
        ptn_deleteCard->raise();
        ptn_editCard->raise();
        label_2 = new QLabel(ManageControl);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(650, 21, 16, 17));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/bgp.jpg")));
        label_3 = new QLabel(ManageControl);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(0, 0, 800, 400));
        label_3->setMinimumSize(QSize(800, 400));
        label_3->setMaximumSize(QSize(800, 400));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/Images/bg3.png")));
        label_3->setScaledContents(true);
        lb_sysName = new QLabel(ManageControl);
        lb_sysName->setObjectName(QString::fromUtf8("lb_sysName"));
        lb_sysName->setGeometry(QRect(300, 140, 204, 38));
        lb_sysName->setMinimumSize(QSize(200, 0));
        label_3->raise();
        layoutWidget->raise();
        label_2->raise();
        pbn_back->raise();
        lb_sysName->raise();
        label->raise();

        retranslateUi(ManageControl);

        QMetaObject::connectSlotsByName(ManageControl);
    } // setupUi

    void retranslateUi(QWidget *ManageControl)
    {
        ManageControl->setWindowTitle(QApplication::translate("ManageControl", "Form", 0, QApplication::UnicodeUTF8));
        pbn_back->setText(QString());
        label->setText(QString());
        ptn_addCard->setText(QString());
        ptn_deleteCard->setText(QString());
        ptn_editCard->setText(QString());
        ptn_searchCard->setText(QString());
        ptn_systemManage->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        lb_sysName->setText(QApplication::translate("ManageControl", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600; color:#000000;\">\345\220\216\345\217\260\347\256\241\347\220\206\347\225\214\351\235\242</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ManageControl: public Ui_ManageControl {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGECONTROL_H

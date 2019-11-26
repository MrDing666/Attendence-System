/********************************************************************************
** Form generated from reading UI file 'ManageLogin.ui'
**
** Created: Sun Oct 20 16:32:47 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGELOGIN_H
#define UI_MANAGELOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ManageLogin
{
public:
    QLabel *label_2;
    QWidget *widget;
    QLabel *lb_login;
    QLabel *lb_pwd;
    QLabel *lb_user;
    QLabel *label;
    QLineEdit *ted_user;
    QLineEdit *ted_pwd;
    QPushButton *pbn_back;
    QPushButton *ptn_reset;
    QPushButton *ptn_login;

    void setupUi(QWidget *ManageLogin)
    {
        if (ManageLogin->objectName().isEmpty())
            ManageLogin->setObjectName(QString::fromUtf8("ManageLogin"));
        ManageLogin->resize(550, 450);
        ManageLogin->setMinimumSize(QSize(550, 450));
        ManageLogin->setMaximumSize(QSize(550, 450));
        label_2 = new QLabel(ManageLogin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(236, 171, 80, 80));
        label_2->setMinimumSize(QSize(80, 80));
        label_2->setMaximumSize(QSize(80, 80));
        label_2->setSizeIncrement(QSize(80, 80));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/manager.png")));
        label_2->setScaledContents(true);
        widget = new QWidget(ManageLogin);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(0, 0, 551, 451));
        widget->setStyleSheet(QString::fromUtf8("background-image: url(:/Images/bg3.png);"));
        lb_login = new QLabel(ManageLogin);
        lb_login->setObjectName(QString::fromUtf8("lb_login"));
        lb_login->setGeometry(QRect(185, 121, 182, 34));
        QFont font;
        font.setFamily(QString::fromUtf8("Cambria"));
        font.setPointSize(15);
        lb_login->setFont(font);
        lb_pwd = new QLabel(ManageLogin);
        lb_pwd->setObjectName(QString::fromUtf8("lb_pwd"));
        lb_pwd->setGeometry(QRect(151, 290, 64, 19));
        QFont font1;
        font1.setPointSize(10);
        lb_pwd->setFont(font1);
        lb_user = new QLabel(ManageLogin);
        lb_user->setObjectName(QString::fromUtf8("lb_user"));
        lb_user->setGeometry(QRect(151, 262, 72, 19));
        lb_user->setFont(font1);
        label = new QLabel(ManageLogin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(76, 11, 400, 100));
        label->setMaximumSize(QSize(400, 100));
        label->setPixmap(QPixmap(QString::fromUtf8("Images/log001.png")));
        label->setScaledContents(true);
        ted_user = new QLineEdit(ManageLogin);
        ted_user->setObjectName(QString::fromUtf8("ted_user"));
        ted_user->setGeometry(QRect(230, 262, 171, 21));
        ted_pwd = new QLineEdit(ManageLogin);
        ted_pwd->setObjectName(QString::fromUtf8("ted_pwd"));
        ted_pwd->setGeometry(QRect(230, 290, 171, 21));
        pbn_back = new QPushButton(ManageLogin);
        pbn_back->setObjectName(QString::fromUtf8("pbn_back"));
        pbn_back->setGeometry(QRect(356, 361, 93, 28));
        pbn_back->setStyleSheet(QString::fromUtf8("background-color: rgb(181, 181, 181);"));
        ptn_reset = new QPushButton(ManageLogin);
        ptn_reset->setObjectName(QString::fromUtf8("ptn_reset"));
        ptn_reset->setGeometry(QRect(229, 361, 93, 28));
        ptn_reset->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(191, 191, 191);"));
        ptn_login = new QPushButton(ManageLogin);
        ptn_login->setObjectName(QString::fromUtf8("ptn_login"));
        ptn_login->setGeometry(QRect(102, 361, 93, 28));
        ptn_login->setStyleSheet(QString::fromUtf8("background-color: rgb(181, 181, 181);"));
        widget->raise();
        lb_login->raise();
        pbn_back->raise();
        label_2->raise();
        lb_pwd->raise();
        lb_user->raise();
        ptn_reset->raise();
        ptn_login->raise();
        ted_user->raise();
        ted_pwd->raise();
        label->raise();

        retranslateUi(ManageLogin);

        QMetaObject::connectSlotsByName(ManageLogin);
    } // setupUi

    void retranslateUi(QWidget *ManageLogin)
    {
        ManageLogin->setWindowTitle(QApplication::translate("ManageLogin", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        lb_login->setText(QApplication::translate("ManageLogin", "<html><head/><body><p><span style=\" font-weight:600;\">\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225\347\225\214\351\235\242</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lb_pwd->setText(QApplication::translate("ManageLogin", "<html><head/><body><p><span style=\" font-weight:600;\">\345\257\206    \347\240\201\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lb_user->setText(QApplication::translate("ManageLogin", "<html><head/><body><p><span style=\" font-weight:600;\">\347\224\250\346\210\267\345\220\215\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        pbn_back->setText(QApplication::translate("ManageLogin", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
        ptn_reset->setText(QApplication::translate("ManageLogin", "\351\207\215  \347\275\256", 0, QApplication::UnicodeUTF8));
        ptn_login->setText(QApplication::translate("ManageLogin", "\347\231\273  \345\275\225", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ManageLogin: public Ui_ManageLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGELOGIN_H

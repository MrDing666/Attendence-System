/********************************************************************************
** Form generated from reading UI file 'SystemLogin.ui'
**
** Created: Sun Oct 20 16:32:48 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMLOGIN_H
#define UI_SYSTEMLOGIN_H

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

class Ui_SystemLogin
{
public:
    QLabel *label_2;
    QLabel *label_3;
    QLabel *lb_pwd;
    QPushButton *ptn_login;
    QLineEdit *ted_pwd;
    QLineEdit *ted_user;
    QLabel *lb_login;
    QLabel *label;
    QPushButton *ptn_reset;
    QLabel *lb_user;
    QPushButton *pbn_back;

    void setupUi(QWidget *SystemLogin)
    {
        if (SystemLogin->objectName().isEmpty())
            SystemLogin->setObjectName(QString::fromUtf8("SystemLogin"));
        SystemLogin->resize(550, 450);
        SystemLogin->setMinimumSize(QSize(550, 450));
        SystemLogin->setMaximumSize(QSize(550, 450));
        label_2 = new QLabel(SystemLogin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(236, 181, 80, 80));
        label_2->setMinimumSize(QSize(80, 80));
        label_2->setMaximumSize(QSize(80, 80));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/Images/superManager .png")));
        label_2->setScaledContents(true);
        label_3 = new QLabel(SystemLogin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(-30, -10, 591, 481));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/bg2.jpg);"));
        lb_pwd = new QLabel(SystemLogin);
        lb_pwd->setObjectName(QString::fromUtf8("lb_pwd"));
        lb_pwd->setGeometry(QRect(151, 300, 64, 19));
        QFont font;
        font.setPointSize(10);
        lb_pwd->setFont(font);
        ptn_login = new QPushButton(SystemLogin);
        ptn_login->setObjectName(QString::fromUtf8("ptn_login"));
        ptn_login->setGeometry(QRect(102, 371, 93, 28));
        ptn_login->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        ted_pwd = new QLineEdit(SystemLogin);
        ted_pwd->setObjectName(QString::fromUtf8("ted_pwd"));
        ted_pwd->setGeometry(QRect(230, 300, 171, 21));
        ted_user = new QLineEdit(SystemLogin);
        ted_user->setObjectName(QString::fromUtf8("ted_user"));
        ted_user->setGeometry(QRect(230, 272, 171, 21));
        lb_login = new QLabel(SystemLogin);
        lb_login->setObjectName(QString::fromUtf8("lb_login"));
        lb_login->setGeometry(QRect(159, 131, 234, 34));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Cambria"));
        font1.setPointSize(15);
        lb_login->setFont(font1);
        label = new QLabel(SystemLogin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(76, 11, 400, 100));
        label->setMaximumSize(QSize(400, 100));
        label->setPixmap(QPixmap(QString::fromUtf8("Images/log001.png")));
        label->setScaledContents(true);
        ptn_reset = new QPushButton(SystemLogin);
        ptn_reset->setObjectName(QString::fromUtf8("ptn_reset"));
        ptn_reset->setGeometry(QRect(229, 371, 93, 28));
        ptn_reset->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        lb_user = new QLabel(SystemLogin);
        lb_user->setObjectName(QString::fromUtf8("lb_user"));
        lb_user->setGeometry(QRect(151, 272, 72, 19));
        lb_user->setFont(font);
        pbn_back = new QPushButton(SystemLogin);
        pbn_back->setObjectName(QString::fromUtf8("pbn_back"));
        pbn_back->setGeometry(QRect(356, 371, 93, 28));
        pbn_back->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        label_3->raise();
        label_2->raise();
        lb_pwd->raise();
        ptn_login->raise();
        ted_pwd->raise();
        ted_user->raise();
        lb_login->raise();
        label->raise();
        ptn_reset->raise();
        lb_user->raise();
        pbn_back->raise();

        retranslateUi(SystemLogin);

        QMetaObject::connectSlotsByName(SystemLogin);
    } // setupUi

    void retranslateUi(QWidget *SystemLogin)
    {
        SystemLogin->setWindowTitle(QApplication::translate("SystemLogin", "Form", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label_3->setText(QString());
        lb_pwd->setText(QApplication::translate("SystemLogin", "<html><head/><body><p><span style=\" font-weight:600;\">\345\257\206    \347\240\201\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        ptn_login->setText(QApplication::translate("SystemLogin", "\347\231\273  \345\275\225", 0, QApplication::UnicodeUTF8));
        lb_login->setText(QApplication::translate("SystemLogin", "<html><head/><body><p><span style=\" font-weight:600;\">\347\256\241\347\220\206\345\221\230\347\256\241\347\220\206\347\231\273\345\275\225\347\225\214\351\235\242</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        ptn_reset->setText(QApplication::translate("SystemLogin", "\351\207\215  \347\275\256", 0, QApplication::UnicodeUTF8));
        lb_user->setText(QApplication::translate("SystemLogin", "<html><head/><body><p><span style=\" font-weight:600;\">\347\224\250\346\210\267\345\220\215\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pbn_back->setText(QApplication::translate("SystemLogin", "\350\277\224\345\233\236", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SystemLogin: public Ui_SystemLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMLOGIN_H

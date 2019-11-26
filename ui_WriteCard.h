/********************************************************************************
** Form generated from reading UI file 'WriteCard.ui'
**
** Created: Fri Aug 16 11:54:39 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRITECARD_H
#define UI_WRITECARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WriteCard
{
public:
    QTextEdit *ted_showName;
    QTextEdit *ted_showID;
    QPushButton *pbn_addName;
    QLabel *lb_cardName;
    QPushButton *pbn_start;
    QLabel *lb_cardID;
    QLabel *lb_deletetitle;

    void setupUi(QWidget *WriteCard)
    {
        if (WriteCard->objectName().isEmpty())
            WriteCard->setObjectName(QString::fromUtf8("WriteCard"));
        WriteCard->resize(597, 235);
        ted_showName = new QTextEdit(WriteCard);
        ted_showName->setObjectName(QString::fromUtf8("ted_showName"));
        ted_showName->setGeometry(QRect(210, 140, 141, 31));
        ted_showID = new QTextEdit(WriteCard);
        ted_showID->setObjectName(QString::fromUtf8("ted_showID"));
        ted_showID->setGeometry(QRect(210, 82, 141, 31));
        pbn_addName = new QPushButton(WriteCard);
        pbn_addName->setObjectName(QString::fromUtf8("pbn_addName"));
        pbn_addName->setGeometry(QRect(380, 134, 101, 41));
        lb_cardName = new QLabel(WriteCard);
        lb_cardName->setObjectName(QString::fromUtf8("lb_cardName"));
        lb_cardName->setGeometry(QRect(115, 150, 91, 16));
        pbn_start = new QPushButton(WriteCard);
        pbn_start->setObjectName(QString::fromUtf8("pbn_start"));
        pbn_start->setGeometry(QRect(20, 81, 101, 41));
        lb_cardID = new QLabel(WriteCard);
        lb_cardID->setObjectName(QString::fromUtf8("lb_cardID"));
        lb_cardID->setGeometry(QRect(140, 92, 81, 16));
        lb_deletetitle = new QLabel(WriteCard);
        lb_deletetitle->setObjectName(QString::fromUtf8("lb_deletetitle"));
        lb_deletetitle->setGeometry(QRect(260, 40, 91, 16));

        retranslateUi(WriteCard);

        QMetaObject::connectSlotsByName(WriteCard);
    } // setupUi

    void retranslateUi(QWidget *WriteCard)
    {
        WriteCard->setWindowTitle(QApplication::translate("WriteCard", "Form", 0, QApplication::UnicodeUTF8));
        pbn_addName->setText(QApplication::translate("WriteCard", "\347\241\256\350\256\244\346\267\273\345\212\240", 0, QApplication::UnicodeUTF8));
        lb_cardName->setText(QApplication::translate("WriteCard", "input name\357\274\232", 0, QApplication::UnicodeUTF8));
        pbn_start->setText(QApplication::translate("WriteCard", "\345\274\200\345\247\213\345\257\273\345\215\241", 0, QApplication::UnicodeUTF8));
        lb_cardID->setText(QApplication::translate("WriteCard", "card ID:", 0, QApplication::UnicodeUTF8));
        lb_deletetitle->setText(QApplication::translate("WriteCard", "\346\267\273\345\212\240\345\215\241\345\271\263\345\217\260", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WriteCard: public Ui_WriteCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRITECARD_H

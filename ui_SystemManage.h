/********************************************************************************
** Form generated from reading UI file 'SystemManage.ui'
**
** Created: Sun Oct 20 16:54:41 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SYSTEMMANAGE_H
#define UI_SYSTEMMANAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SystemManage
{
public:
    QTableWidget *db_table;
    QLabel *label;
    QPushButton *btn_dbselect;
    QLineEdit *ted_dbpath;
    QComboBox *ted_showSex;
    QLabel *lb_cardID_2;
    QPushButton *pbn_addName;
    QLabel *lb_cardName;
    QLabel *lb_db;
    QPushButton *ptn_delete;
    QLineEdit *ted_showNumber;
    QLineEdit *ted_showName;
    QLineEdit *ted_showPassword;
    QLabel *lb_cardSex;
    QPushButton *pbn_start;
    QLabel *lb_cardID;
    QPushButton *btn_dbrefresh;
    QPushButton *pbn_back;
    QLabel *lb_sysName;

    void setupUi(QWidget *SystemManage)
    {
        if (SystemManage->objectName().isEmpty())
            SystemManage->setObjectName(QString::fromUtf8("SystemManage"));
        SystemManage->resize(750, 450);
        SystemManage->setMinimumSize(QSize(750, 450));
        SystemManage->setMaximumSize(QSize(750, 450));
        db_table = new QTableWidget(SystemManage);
        if (db_table->columnCount() < 6)
            db_table->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        db_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        db_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        db_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        db_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        db_table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        db_table->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        db_table->setObjectName(QString::fromUtf8("db_table"));
        db_table->setGeometry(QRect(25, 106, 700, 200));
        db_table->setMinimumSize(QSize(700, 200));
        db_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        db_table->setSelectionMode(QAbstractItemView::SingleSelection);
        db_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        label = new QLabel(SystemManage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 831, 541));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/bg2.jpg);"));
        btn_dbselect = new QPushButton(SystemManage);
        btn_dbselect->setObjectName(QString::fromUtf8("btn_dbselect"));
        btn_dbselect->setGeometry(QRect(531, 66, 93, 28));
        btn_dbselect->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        ted_dbpath = new QLineEdit(SystemManage);
        ted_dbpath->setObjectName(QString::fromUtf8("ted_dbpath"));
        ted_dbpath->setGeometry(QRect(86, 67, 431, 25));
        ted_dbpath->setMinimumSize(QSize(0, 25));
        ted_dbpath->setReadOnly(true);
        ted_showSex = new QComboBox(SystemManage);
        ted_showSex->setObjectName(QString::fromUtf8("ted_showSex"));
        ted_showSex->setGeometry(QRect(480, 352, 171, 25));
        ted_showSex->setMinimumSize(QSize(150, 25));
        lb_cardID_2 = new QLabel(SystemManage);
        lb_cardID_2->setObjectName(QString::fromUtf8("lb_cardID_2"));
        lb_cardID_2->setGeometry(QRect(419, 320, 54, 25));
        lb_cardID_2->setMinimumSize(QSize(0, 25));
        pbn_addName = new QPushButton(SystemManage);
        pbn_addName->setObjectName(QString::fromUtf8("pbn_addName"));
        pbn_addName->setGeometry(QRect(144, 390, 100, 50));
        pbn_addName->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        lb_cardName = new QLabel(SystemManage);
        lb_cardName->setObjectName(QString::fromUtf8("lb_cardName"));
        lb_cardName->setGeometry(QRect(178, 352, 54, 25));
        lb_cardName->setMinimumSize(QSize(0, 25));
        lb_db = new QLabel(SystemManage);
        lb_db->setObjectName(QString::fromUtf8("lb_db"));
        lb_db->setGeometry(QRect(25, 66, 54, 21));
        ptn_delete = new QPushButton(SystemManage);
        ptn_delete->setObjectName(QString::fromUtf8("ptn_delete"));
        ptn_delete->setGeometry(QRect(434, 390, 100, 50));
        ptn_delete->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        ted_showNumber = new QLineEdit(SystemManage);
        ted_showNumber->setObjectName(QString::fromUtf8("ted_showNumber"));
        ted_showNumber->setEnabled(true);
        ted_showNumber->setGeometry(QRect(239, 320, 171, 25));
        ted_showNumber->setMinimumSize(QSize(150, 25));
        ted_showName = new QLineEdit(SystemManage);
        ted_showName->setObjectName(QString::fromUtf8("ted_showName"));
        ted_showName->setGeometry(QRect(239, 352, 171, 25));
        ted_showName->setMinimumSize(QSize(150, 25));
        ted_showPassword = new QLineEdit(SystemManage);
        ted_showPassword->setObjectName(QString::fromUtf8("ted_showPassword"));
        ted_showPassword->setGeometry(QRect(480, 320, 171, 25));
        ted_showPassword->setMinimumSize(QSize(150, 25));
        lb_cardSex = new QLabel(SystemManage);
        lb_cardSex->setObjectName(QString::fromUtf8("lb_cardSex"));
        lb_cardSex->setGeometry(QRect(419, 352, 54, 25));
        lb_cardSex->setMinimumSize(QSize(0, 25));
        pbn_start = new QPushButton(SystemManage);
        pbn_start->setObjectName(QString::fromUtf8("pbn_start"));
        pbn_start->setGeometry(QRect(77, 334, 93, 28));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        pbn_start->setFont(font);
        pbn_start->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        lb_cardID = new QLabel(SystemManage);
        lb_cardID->setObjectName(QString::fromUtf8("lb_cardID"));
        lb_cardID->setGeometry(QRect(178, 320, 54, 25));
        lb_cardID->setMinimumSize(QSize(0, 25));
        btn_dbrefresh = new QPushButton(SystemManage);
        btn_dbrefresh->setObjectName(QString::fromUtf8("btn_dbrefresh"));
        btn_dbrefresh->setGeometry(QRect(631, 66, 93, 28));
        btn_dbrefresh->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        pbn_back = new QPushButton(SystemManage);
        pbn_back->setObjectName(QString::fromUtf8("pbn_back"));
        pbn_back->setGeometry(QRect(0, 0, 90, 50));
        pbn_back->setMinimumSize(QSize(90, 50));
        pbn_back->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/back.png);"));
        lb_sysName = new QLabel(SystemManage);
        lb_sysName->setObjectName(QString::fromUtf8("lb_sysName"));
        lb_sysName->setGeometry(QRect(140, 10, 411, 61));
        label->raise();
        btn_dbselect->raise();
        ted_dbpath->raise();
        ted_showSex->raise();
        db_table->raise();
        lb_cardID_2->raise();
        pbn_addName->raise();
        lb_cardName->raise();
        lb_db->raise();
        ptn_delete->raise();
        ted_showNumber->raise();
        ted_showName->raise();
        ted_showPassword->raise();
        lb_cardSex->raise();
        pbn_start->raise();
        lb_cardID->raise();
        btn_dbrefresh->raise();
        pbn_back->raise();
        lb_sysName->raise();

        retranslateUi(SystemManage);

        QMetaObject::connectSlotsByName(SystemManage);
    } // setupUi

    void retranslateUi(QWidget *SystemManage)
    {
        SystemManage->setWindowTitle(QApplication::translate("SystemManage", "Form", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = db_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SystemManage", "ID", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = db_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SystemManage", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = db_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SystemManage", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = db_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("SystemManage", "\346\200\247\345\210\253", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = db_table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("SystemManage", "\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = db_table->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("SystemManage", "\346\235\203\351\231\220", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        btn_dbselect->setText(QApplication::translate("SystemManage", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        ted_showSex->clear();
        ted_showSex->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("SystemManage", "\347\224\267", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("SystemManage", "\345\245\263", 0, QApplication::UnicodeUTF8)
        );
        lb_cardID_2->setText(QApplication::translate("SystemManage", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">  \345\257\206\347\240\201\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pbn_addName->setText(QApplication::translate("SystemManage", "\346\267\273\345\212\240", 0, QApplication::UnicodeUTF8));
        lb_cardName->setText(QApplication::translate("SystemManage", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">\345\247\223\345\220\215\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lb_db->setText(QApplication::translate("SystemManage", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">\346\225\260\346\215\256\345\272\223</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        ptn_delete->setText(QApplication::translate("SystemManage", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
        ted_showPassword->setText(QString());
        lb_cardSex->setText(QApplication::translate("SystemManage", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">       \346\200\247\345\210\253\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pbn_start->setText(QApplication::translate("SystemManage", "\350\257\273\345\215\241", 0, QApplication::UnicodeUTF8));
        lb_cardID->setText(QApplication::translate("SystemManage", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">\345\215\241\345\217\267\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        btn_dbrefresh->setText(QApplication::translate("SystemManage", "\345\210\267\346\226\260", 0, QApplication::UnicodeUTF8));
        pbn_back->setText(QString());
        lb_sysName->setText(QApplication::translate("SystemManage", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600;\">\347\256\241\347\220\206\345\221\230\347\256\241\347\220\206\345\271\263\345\217\260</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SystemManage: public Ui_SystemManage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SYSTEMMANAGE_H

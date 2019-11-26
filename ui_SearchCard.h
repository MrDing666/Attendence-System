/********************************************************************************
** Form generated from reading UI file 'SearchCard.ui'
**
** Created: Sun Oct 20 16:32:47 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHCARD_H
#define UI_SEARCHCARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchCard
{
public:
    QLabel *lb_searchtitle;
    QPushButton *pbn_back;
    QGroupBox *groupBox_2;
    QTableWidget *logTable;
    QTableWidget *employee_table;
    QLabel *label;
    QLabel *lb_cardID;
    QPushButton *pbn_searchLog;
    QPushButton *btn_dbselect;
    QPushButton *btn_dbrefresh;
    QLineEdit *ted_showNumber;
    QLineEdit *ted_dbpath;
    QLabel *lb_db;
    QPushButton *pbn_handsearch;
    QPushButton *pbn_search;

    void setupUi(QWidget *SearchCard)
    {
        if (SearchCard->objectName().isEmpty())
            SearchCard->setObjectName(QString::fromUtf8("SearchCard"));
        SearchCard->setWindowModality(Qt::NonModal);
        SearchCard->resize(700, 600);
        SearchCard->setMinimumSize(QSize(700, 600));
        SearchCard->setMaximumSize(QSize(700, 600));
        SearchCard->setContextMenuPolicy(Qt::NoContextMenu);
        SearchCard->setLayoutDirection(Qt::LeftToRight);
        lb_searchtitle = new QLabel(SearchCard);
        lb_searchtitle->setObjectName(QString::fromUtf8("lb_searchtitle"));
        lb_searchtitle->setGeometry(QRect(230, 10, 221, 41));
        pbn_back = new QPushButton(SearchCard);
        pbn_back->setObjectName(QString::fromUtf8("pbn_back"));
        pbn_back->setGeometry(QRect(0, 0, 90, 50));
        pbn_back->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/back.png);"));
        groupBox_2 = new QGroupBox(SearchCard);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(50, 350, 601, 231));
        logTable = new QTableWidget(groupBox_2);
        if (logTable->columnCount() < 3)
            logTable->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        logTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        logTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        logTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        logTable->setObjectName(QString::fromUtf8("logTable"));
        logTable->setGeometry(QRect(0, 20, 601, 201));
        logTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
        logTable->setSelectionBehavior(QAbstractItemView::SelectRows);
        employee_table = new QTableWidget(SearchCard);
        if (employee_table->columnCount() < 4)
            employee_table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        employee_table->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        employee_table->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        employee_table->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        employee_table->setHorizontalHeaderItem(3, __qtablewidgetitem6);
        employee_table->setObjectName(QString::fromUtf8("employee_table"));
        employee_table->setGeometry(QRect(50, 141, 600, 200));
        employee_table->setMinimumSize(QSize(600, 200));
        employee_table->setMaximumSize(QSize(600, 200));
        employee_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        employee_table->setSelectionMode(QAbstractItemView::SingleSelection);
        employee_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        label = new QLabel(SearchCard);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 701, 650));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/bg2.jpg);"));
        lb_cardID = new QLabel(SearchCard);
        lb_cardID->setObjectName(QString::fromUtf8("lb_cardID"));
        lb_cardID->setGeometry(QRect(60, 100, 54, 19));
        pbn_searchLog = new QPushButton(SearchCard);
        pbn_searchLog->setObjectName(QString::fromUtf8("pbn_searchLog"));
        pbn_searchLog->setGeometry(QRect(547, 101, 101, 28));
        pbn_searchLog->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        btn_dbselect = new QPushButton(SearchCard);
        btn_dbselect->setObjectName(QString::fromUtf8("btn_dbselect"));
        btn_dbselect->setGeometry(QRect(447, 61, 93, 28));
        btn_dbselect->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        btn_dbrefresh = new QPushButton(SearchCard);
        btn_dbrefresh->setObjectName(QString::fromUtf8("btn_dbrefresh"));
        btn_dbrefresh->setGeometry(QRect(547, 61, 101, 28));
        btn_dbrefresh->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        ted_showNumber = new QLineEdit(SearchCard);
        ted_showNumber->setObjectName(QString::fromUtf8("ted_showNumber"));
        ted_showNumber->setGeometry(QRect(112, 104, 231, 21));
        ted_dbpath = new QLineEdit(SearchCard);
        ted_dbpath->setObjectName(QString::fromUtf8("ted_dbpath"));
        ted_dbpath->setGeometry(QRect(112, 64, 231, 21));
        ted_dbpath->setReadOnly(true);
        lb_db = new QLabel(SearchCard);
        lb_db->setObjectName(QString::fromUtf8("lb_db"));
        lb_db->setGeometry(QRect(50, 59, 71, 31));
        pbn_handsearch = new QPushButton(SearchCard);
        pbn_handsearch->setObjectName(QString::fromUtf8("pbn_handsearch"));
        pbn_handsearch->setGeometry(QRect(447, 101, 93, 28));
        pbn_handsearch->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        pbn_search = new QPushButton(SearchCard);
        pbn_search->setObjectName(QString::fromUtf8("pbn_search"));
        pbn_search->setGeometry(QRect(347, 101, 93, 28));
        pbn_search->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        label->raise();
        lb_cardID->raise();
        pbn_searchLog->raise();
        lb_searchtitle->raise();
        groupBox_2->raise();
        btn_dbselect->raise();
        btn_dbrefresh->raise();
        employee_table->raise();
        ted_showNumber->raise();
        pbn_back->raise();
        ted_dbpath->raise();
        lb_db->raise();
        pbn_handsearch->raise();
        pbn_search->raise();

        retranslateUi(SearchCard);

        QMetaObject::connectSlotsByName(SearchCard);
    } // setupUi

    void retranslateUi(QWidget *SearchCard)
    {
        SearchCard->setWindowTitle(QApplication::translate("SearchCard", "SearchCard", 0, QApplication::UnicodeUTF8));
        lb_searchtitle->setText(QApplication::translate("SearchCard", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600;\">\346\237\245\350\257\242\344\277\241\346\201\257\345\271\263\345\217\260</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pbn_back->setText(QString());
        groupBox_2->setTitle(QApplication::translate("SearchCard", "\350\200\203\345\213\244\346\227\245\345\277\227\350\241\250", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = logTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("SearchCard", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = logTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("SearchCard", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = logTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("SearchCard", "\346\227\245\346\234\237", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = employee_table->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QApplication::translate("SearchCard", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = employee_table->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QApplication::translate("SearchCard", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = employee_table->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QApplication::translate("SearchCard", "\346\200\247\345\210\253", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = employee_table->horizontalHeaderItem(3);
        ___qtablewidgetitem6->setText(QApplication::translate("SearchCard", "\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        lb_cardID->setText(QApplication::translate("SearchCard", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">\345\215\241\345\217\267\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pbn_searchLog->setText(QApplication::translate("SearchCard", "\346\237\245\347\234\213\346\227\245\345\277\227", 0, QApplication::UnicodeUTF8));
        btn_dbselect->setText(QApplication::translate("SearchCard", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        btn_dbrefresh->setText(QApplication::translate("SearchCard", "\345\210\267\346\226\260", 0, QApplication::UnicodeUTF8));
        lb_db->setText(QApplication::translate("SearchCard", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">\346\225\260\346\215\256\345\272\223</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pbn_handsearch->setText(QApplication::translate("SearchCard", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        pbn_search->setText(QApplication::translate("SearchCard", "\350\257\273\345\215\241", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SearchCard: public Ui_SearchCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHCARD_H

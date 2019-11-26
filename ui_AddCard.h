/********************************************************************************
** Form generated from reading UI file 'AddCard.ui'
**
** Created: Sun Oct 20 16:46:53 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCARD_H
#define UI_ADDCARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddCard
{
public:
    QLabel *lb_deletetitle;
    QPushButton *pbn_back;
    QWidget *layoutWidget;
    QHBoxLayout *db_select;
    QLabel *lb_db;
    QLineEdit *ted_dbpath;
    QPushButton *btn_dbselect;
    QPushButton *btn_dbrefresh;
    QTableWidget *db_table;
    QLabel *label;
    QComboBox *ted_showSex;
    QLabel *lb_cardID;
    QLabel *lb_cardName;
    QLineEdit *ted_showName;
    QPushButton *pbn_start;
    QLineEdit *ted_showNumber;
    QPushButton *pbn_addName;
    QLabel *lb_cardSex;

    void setupUi(QWidget *AddCard)
    {
        if (AddCard->objectName().isEmpty())
            AddCard->setObjectName(QString::fromUtf8("AddCard"));
        AddCard->setEnabled(true);
        AddCard->resize(800, 440);
        AddCard->setMinimumSize(QSize(800, 440));
        AddCard->setMaximumSize(QSize(800, 440));
        lb_deletetitle = new QLabel(AddCard);
        lb_deletetitle->setObjectName(QString::fromUtf8("lb_deletetitle"));
        lb_deletetitle->setGeometry(QRect(280, 10, 221, 31));
        pbn_back = new QPushButton(AddCard);
        pbn_back->setObjectName(QString::fromUtf8("pbn_back"));
        pbn_back->setGeometry(QRect(0, 0, 90, 50));
        pbn_back->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/back.png);"));
        layoutWidget = new QWidget(AddCard);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 60, 701, 30));
        db_select = new QHBoxLayout(layoutWidget);
        db_select->setObjectName(QString::fromUtf8("db_select"));
        db_select->setContentsMargins(0, 0, 0, 0);
        lb_db = new QLabel(layoutWidget);
        lb_db->setObjectName(QString::fromUtf8("lb_db"));

        db_select->addWidget(lb_db);

        ted_dbpath = new QLineEdit(layoutWidget);
        ted_dbpath->setObjectName(QString::fromUtf8("ted_dbpath"));
        ted_dbpath->setReadOnly(true);

        db_select->addWidget(ted_dbpath);

        btn_dbselect = new QPushButton(layoutWidget);
        btn_dbselect->setObjectName(QString::fromUtf8("btn_dbselect"));
        btn_dbselect->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));

        db_select->addWidget(btn_dbselect);

        btn_dbrefresh = new QPushButton(layoutWidget);
        btn_dbrefresh->setObjectName(QString::fromUtf8("btn_dbrefresh"));
        btn_dbrefresh->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));

        db_select->addWidget(btn_dbrefresh);

        ted_dbpath->raise();
        btn_dbrefresh->raise();
        lb_db->raise();
        btn_dbselect->raise();
        db_table = new QTableWidget(AddCard);
        if (db_table->columnCount() < 4)
            db_table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        db_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        db_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        db_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        db_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        db_table->setObjectName(QString::fromUtf8("db_table"));
        db_table->setGeometry(QRect(50, 110, 701, 191));
        db_table->setStyleSheet(QString::fromUtf8(""));
        db_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        db_table->setSelectionMode(QAbstractItemView::SingleSelection);
        db_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        label = new QLabel(AddCard);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 800, 500));
        label->setMinimumSize(QSize(800, 4));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/bg2.jpg);"));
        ted_showSex = new QComboBox(AddCard);
        ted_showSex->setObjectName(QString::fromUtf8("ted_showSex"));
        ted_showSex->setGeometry(QRect(540, 320, 211, 21));
        ted_showSex->setMinimumSize(QSize(140, 0));
        lb_cardID = new QLabel(AddCard);
        lb_cardID->setObjectName(QString::fromUtf8("lb_cardID"));
        lb_cardID->setGeometry(QRect(151, 320, 54, 19));
        lb_cardName = new QLabel(AddCard);
        lb_cardName->setObjectName(QString::fromUtf8("lb_cardName"));
        lb_cardName->setGeometry(QRect(151, 360, 54, 19));
        ted_showName = new QLineEdit(AddCard);
        ted_showName->setObjectName(QString::fromUtf8("ted_showName"));
        ted_showName->setGeometry(QRect(212, 363, 171, 21));
        pbn_start = new QPushButton(AddCard);
        pbn_start->setObjectName(QString::fromUtf8("pbn_start"));
        pbn_start->setGeometry(QRect(51, 313, 93, 28));
        pbn_start->setStyleSheet(QString::fromUtf8("\n"
"background-color: rgb(200, 200, 200);"));
        ted_showNumber = new QLineEdit(AddCard);
        ted_showNumber->setObjectName(QString::fromUtf8("ted_showNumber"));
        ted_showNumber->setEnabled(true);
        ted_showNumber->setGeometry(QRect(212, 316, 171, 21));
        pbn_addName = new QPushButton(AddCard);
        pbn_addName->setObjectName(QString::fromUtf8("pbn_addName"));
        pbn_addName->setGeometry(QRect(51, 360, 93, 28));
        pbn_addName->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        lb_cardSex = new QLabel(AddCard);
        lb_cardSex->setObjectName(QString::fromUtf8("lb_cardSex"));
        lb_cardSex->setGeometry(QRect(480, 320, 54, 19));
        label->raise();
        layoutWidget->raise();
        pbn_back->raise();
        lb_deletetitle->raise();
        db_table->raise();
        ted_showSex->raise();
        lb_cardID->raise();
        lb_cardName->raise();
        ted_showName->raise();
        pbn_start->raise();
        ted_showNumber->raise();
        pbn_addName->raise();
        lb_cardSex->raise();

        retranslateUi(AddCard);

        QMetaObject::connectSlotsByName(AddCard);
    } // setupUi

    void retranslateUi(QWidget *AddCard)
    {
        AddCard->setWindowTitle(QApplication::translate("AddCard", "Form", 0, QApplication::UnicodeUTF8));
        lb_deletetitle->setText(QApplication::translate("AddCard", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:600;\">\346\267\273\345\212\240\344\277\241\346\201\257\345\271\263\345\217\260</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pbn_back->setText(QString());
        lb_db->setText(QApplication::translate("AddCard", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">\346\225\260\346\215\256\345\272\223</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        btn_dbselect->setText(QApplication::translate("AddCard", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        btn_dbrefresh->setText(QApplication::translate("AddCard", "\345\210\267\346\226\260", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = db_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("AddCard", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = db_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("AddCard", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = db_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("AddCard", "\346\200\247\345\210\253", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = db_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("AddCard", "\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        ted_showSex->clear();
        ted_showSex->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("AddCard", "\347\224\267", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("AddCard", "\345\245\263", 0, QApplication::UnicodeUTF8)
        );
        lb_cardID->setText(QApplication::translate("AddCard", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">  \345\215\241\345\217\267\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lb_cardName->setText(QApplication::translate("AddCard", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">     \345\247\223\345\220\215\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pbn_start->setText(QApplication::translate("AddCard", "\350\257\273\345\215\241", 0, QApplication::UnicodeUTF8));
        pbn_addName->setText(QApplication::translate("AddCard", "\347\231\273\350\256\260", 0, QApplication::UnicodeUTF8));
        lb_cardSex->setText(QApplication::translate("AddCard", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">      \346\200\247\345\210\253\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddCard: public Ui_AddCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCARD_H

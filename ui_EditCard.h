/********************************************************************************
** Form generated from reading UI file 'EditCard.ui'
**
** Created: Sun Oct 20 16:46:52 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCARD_H
#define UI_EDITCARD_H

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

class Ui_EditCard
{
public:
    QLabel *lb_deletetitle;
    QPushButton *pbn_back;
    QTableWidget *db_table;
    QLabel *label;
    QLabel *lb_cardSex;
    QComboBox *cb_updateSex;
    QLineEdit *ted_dbpath;
    QPushButton *btn_dbrefresh;
    QLabel *lb_db;
    QLabel *lb_cardID;
    QLineEdit *ted_updateNumber;
    QLabel *lb_cardState;
    QPushButton *pbn_start;
    QPushButton *btn_dbselect;
    QComboBox *cb_updateState;
    QLabel *lb_cardName;
    QLineEdit *ted_updateName;
    QPushButton *pbn_update;

    void setupUi(QWidget *EditCard)
    {
        if (EditCard->objectName().isEmpty())
            EditCard->setObjectName(QString::fromUtf8("EditCard"));
        EditCard->resize(800, 440);
        EditCard->setMinimumSize(QSize(800, 440));
        EditCard->setMaximumSize(QSize(800, 440));
        lb_deletetitle = new QLabel(EditCard);
        lb_deletetitle->setObjectName(QString::fromUtf8("lb_deletetitle"));
        lb_deletetitle->setGeometry(QRect(270, 10, 261, 41));
        pbn_back = new QPushButton(EditCard);
        pbn_back->setObjectName(QString::fromUtf8("pbn_back"));
        pbn_back->setGeometry(QRect(0, 10, 90, 50));
        pbn_back->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/back.png);"));
        db_table = new QTableWidget(EditCard);
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
        db_table->setGeometry(QRect(110, 110, 600, 200));
        db_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        db_table->setSelectionMode(QAbstractItemView::SingleSelection);
        db_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        label = new QLabel(EditCard);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-10, -10, 811, 500));
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/bg2.jpg);"));
        lb_cardSex = new QLabel(EditCard);
        lb_cardSex->setObjectName(QString::fromUtf8("lb_cardSex"));
        lb_cardSex->setGeometry(QRect(220, 370, 54, 19));
        cb_updateSex = new QComboBox(EditCard);
        cb_updateSex->setObjectName(QString::fromUtf8("cb_updateSex"));
        cb_updateSex->setGeometry(QRect(276, 370, 175, 25));
        cb_updateSex->setMinimumSize(QSize(175, 25));
        ted_dbpath = new QLineEdit(EditCard);
        ted_dbpath->setObjectName(QString::fromUtf8("ted_dbpath"));
        ted_dbpath->setGeometry(QRect(172, 74, 331, 21));
        ted_dbpath->setReadOnly(true);
        btn_dbrefresh = new QPushButton(EditCard);
        btn_dbrefresh->setObjectName(QString::fromUtf8("btn_dbrefresh"));
        btn_dbrefresh->setGeometry(QRect(617, 71, 93, 28));
        btn_dbrefresh->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        lb_db = new QLabel(EditCard);
        lb_db->setObjectName(QString::fromUtf8("lb_db"));
        lb_db->setGeometry(QRect(111, 70, 54, 31));
        lb_cardID = new QLabel(EditCard);
        lb_cardID->setObjectName(QString::fromUtf8("lb_cardID"));
        lb_cardID->setGeometry(QRect(220, 330, 54, 19));
        ted_updateNumber = new QLineEdit(EditCard);
        ted_updateNumber->setObjectName(QString::fromUtf8("ted_updateNumber"));
        ted_updateNumber->setEnabled(true);
        ted_updateNumber->setGeometry(QRect(276, 330, 175, 25));
        ted_updateNumber->setMinimumSize(QSize(175, 25));
        lb_cardState = new QLabel(EditCard);
        lb_cardState->setObjectName(QString::fromUtf8("lb_cardState"));
        lb_cardState->setGeometry(QRect(470, 370, 54, 19));
        pbn_start = new QPushButton(EditCard);
        pbn_start->setObjectName(QString::fromUtf8("pbn_start"));
        pbn_start->setGeometry(QRect(108, 330, 100, 30));
        pbn_start->setMinimumSize(QSize(100, 30));
        pbn_start->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        btn_dbselect = new QPushButton(EditCard);
        btn_dbselect->setObjectName(QString::fromUtf8("btn_dbselect"));
        btn_dbselect->setGeometry(QRect(517, 71, 93, 28));
        btn_dbselect->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        cb_updateState = new QComboBox(EditCard);
        cb_updateState->setObjectName(QString::fromUtf8("cb_updateState"));
        cb_updateState->setGeometry(QRect(526, 370, 181, 25));
        cb_updateState->setMinimumSize(QSize(175, 25));
        lb_cardName = new QLabel(EditCard);
        lb_cardName->setObjectName(QString::fromUtf8("lb_cardName"));
        lb_cardName->setGeometry(QRect(470, 330, 54, 19));
        ted_updateName = new QLineEdit(EditCard);
        ted_updateName->setObjectName(QString::fromUtf8("ted_updateName"));
        ted_updateName->setGeometry(QRect(526, 330, 181, 25));
        ted_updateName->setMinimumSize(QSize(175, 25));
        pbn_update = new QPushButton(EditCard);
        pbn_update->setObjectName(QString::fromUtf8("pbn_update"));
        pbn_update->setGeometry(QRect(108, 368, 100, 30));
        pbn_update->setMinimumSize(QSize(100, 30));
        pbn_update->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        label->raise();
        lb_deletetitle->raise();
        pbn_back->raise();
        lb_cardSex->raise();
        cb_updateSex->raise();
        ted_dbpath->raise();
        btn_dbrefresh->raise();
        lb_db->raise();
        lb_cardID->raise();
        ted_updateNumber->raise();
        lb_cardState->raise();
        db_table->raise();
        pbn_start->raise();
        btn_dbselect->raise();
        cb_updateState->raise();
        lb_cardName->raise();
        ted_updateName->raise();
        pbn_update->raise();

        retranslateUi(EditCard);

        QMetaObject::connectSlotsByName(EditCard);
    } // setupUi

    void retranslateUi(QWidget *EditCard)
    {
        EditCard->setWindowTitle(QApplication::translate("EditCard", "Form", 0, QApplication::UnicodeUTF8));
        lb_deletetitle->setText(QApplication::translate("EditCard", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600;\">\347\274\226\350\276\221\344\277\241\346\201\257\345\271\263\345\217\260</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pbn_back->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = db_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("EditCard", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = db_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("EditCard", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = db_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("EditCard", "\346\200\247\345\210\253", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = db_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("EditCard", "\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        lb_cardSex->setText(QApplication::translate("EditCard", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">      \346\200\247\345\210\253\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        cb_updateSex->clear();
        cb_updateSex->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("EditCard", "\347\224\267", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditCard", "\345\245\263", 0, QApplication::UnicodeUTF8)
        );
        btn_dbrefresh->setText(QApplication::translate("EditCard", "\345\210\267\346\226\260", 0, QApplication::UnicodeUTF8));
        lb_db->setText(QApplication::translate("EditCard", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">\346\225\260\346\215\256\345\272\223</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lb_cardID->setText(QApplication::translate("EditCard", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">  \345\215\241\345\217\267\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lb_cardState->setText(QApplication::translate("EditCard", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">     \347\212\266\346\200\201\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pbn_start->setText(QApplication::translate("EditCard", "\350\257\273\345\215\241", 0, QApplication::UnicodeUTF8));
        btn_dbselect->setText(QApplication::translate("EditCard", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        cb_updateState->clear();
        cb_updateState->insertItems(0, QStringList()
         << QApplication::translate("EditCard", "\346\255\243\345\270\270", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EditCard", "\345\267\262\346\263\250\351\224\200", 0, QApplication::UnicodeUTF8)
        );
        lb_cardName->setText(QApplication::translate("EditCard", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">\345\247\223\345\220\215\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pbn_update->setText(QApplication::translate("EditCard", "\344\277\256\346\224\271", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditCard: public Ui_EditCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCARD_H

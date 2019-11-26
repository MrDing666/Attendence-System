/********************************************************************************
** Form generated from reading UI file 'DeleteCard.ui'
**
** Created: Sun Oct 20 16:46:53 2019
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETECARD_H
#define UI_DELETECARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeleteCard
{
public:
    QLabel *lb_deletetitle;
    QPushButton *btn_back;
    QTableWidget *db_table;
    QLineEdit *ted_showName;
    QLineEdit *ted_showID;
    QPushButton *ptn_delete;
    QPushButton *btn_start;
    QLabel *label;
    QLabel *lb_cardID;
    QPushButton *ptn_release;
    QLabel *lb_db;
    QLineEdit *ted_dbpath;
    QPushButton *btn_dbselect;
    QPushButton *btn_dbrefresh;
    QLabel *label_2;

    void setupUi(QWidget *DeleteCard)
    {
        if (DeleteCard->objectName().isEmpty())
            DeleteCard->setObjectName(QString::fromUtf8("DeleteCard"));
        DeleteCard->setEnabled(true);
        DeleteCard->resize(800, 440);
        DeleteCard->setMinimumSize(QSize(800, 440));
        DeleteCard->setMaximumSize(QSize(800, 440));
        lb_deletetitle = new QLabel(DeleteCard);
        lb_deletetitle->setObjectName(QString::fromUtf8("lb_deletetitle"));
        lb_deletetitle->setGeometry(QRect(270, 10, 231, 51));
        btn_back = new QPushButton(DeleteCard);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(0, 0, 90, 50));
        btn_back->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/back.png);"));
        db_table = new QTableWidget(DeleteCard);
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
        db_table->setGeometry(QRect(90, 110, 621, 181));
        db_table->setEditTriggers(QAbstractItemView::NoEditTriggers);
        db_table->setSelectionMode(QAbstractItemView::SingleSelection);
        db_table->setSelectionBehavior(QAbstractItemView::SelectRows);
        ted_showName = new QLineEdit(DeleteCard);
        ted_showName->setObjectName(QString::fromUtf8("ted_showName"));
        ted_showName->setEnabled(true);
        ted_showName->setGeometry(QRect(540, 370, 175, 25));
        ted_showID = new QLineEdit(DeleteCard);
        ted_showID->setObjectName(QString::fromUtf8("ted_showID"));
        ted_showID->setEnabled(true);
        ted_showID->setGeometry(QRect(250, 370, 175, 25));
        ted_showID->setMinimumSize(QSize(175, 25));
        ptn_delete = new QPushButton(DeleteCard);
        ptn_delete->setObjectName(QString::fromUtf8("ptn_delete"));
        ptn_delete->setGeometry(QRect(404, 312, 311, 28));
        ptn_delete->setMinimumSize(QSize(311, 28));
        ptn_delete->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        btn_start = new QPushButton(DeleteCard);
        btn_start->setObjectName(QString::fromUtf8("btn_start"));
        btn_start->setGeometry(QRect(90, 370, 93, 25));
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        btn_start->setFont(font);
        btn_start->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        label = new QLabel(DeleteCard);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(480, 372, 54, 20));
        lb_cardID = new QLabel(DeleteCard);
        lb_cardID->setObjectName(QString::fromUtf8("lb_cardID"));
        lb_cardID->setGeometry(QRect(200, 372, 54, 20));
        ptn_release = new QPushButton(DeleteCard);
        ptn_release->setObjectName(QString::fromUtf8("ptn_release"));
        ptn_release->setGeometry(QRect(86, 312, 311, 28));
        ptn_release->setMinimumSize(QSize(311, 28));
        ptn_release->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        lb_db = new QLabel(DeleteCard);
        lb_db->setObjectName(QString::fromUtf8("lb_db"));
        lb_db->setGeometry(QRect(91, 71, 45, 31));
        ted_dbpath = new QLineEdit(DeleteCard);
        ted_dbpath->setObjectName(QString::fromUtf8("ted_dbpath"));
        ted_dbpath->setGeometry(QRect(143, 74, 360, 25));
        ted_dbpath->setReadOnly(true);
        btn_dbselect = new QPushButton(DeleteCard);
        btn_dbselect->setObjectName(QString::fromUtf8("btn_dbselect"));
        btn_dbselect->setGeometry(QRect(517, 71, 93, 28));
        btn_dbselect->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        btn_dbrefresh = new QPushButton(DeleteCard);
        btn_dbrefresh->setObjectName(QString::fromUtf8("btn_dbrefresh"));
        btn_dbrefresh->setGeometry(QRect(620, 70, 93, 28));
        btn_dbrefresh->setStyleSheet(QString::fromUtf8("background-color: rgb(200, 200, 200);"));
        label_2 = new QLabel(DeleteCard);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(-20, -10, 831, 531));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/Images/bg2.jpg);"));
        label_2->raise();
        lb_deletetitle->raise();
        btn_back->raise();
        db_table->raise();
        ted_showName->raise();
        ted_showID->raise();
        ptn_delete->raise();
        btn_start->raise();
        label->raise();
        lb_cardID->raise();
        ptn_release->raise();
        ted_dbpath->raise();
        btn_dbselect->raise();
        lb_db->raise();
        btn_dbrefresh->raise();

        retranslateUi(DeleteCard);

        QMetaObject::connectSlotsByName(DeleteCard);
    } // setupUi

    void retranslateUi(QWidget *DeleteCard)
    {
        DeleteCard->setWindowTitle(QApplication::translate("DeleteCard", "Form", 0, QApplication::UnicodeUTF8));
        lb_deletetitle->setText(QApplication::translate("DeleteCard", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt; font-weight:600;\">\346\263\250\351\224\200\344\277\241\346\201\257\345\271\263\345\217\260</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        btn_back->setText(QString());
        QTableWidgetItem *___qtablewidgetitem = db_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("DeleteCard", "\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = db_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("DeleteCard", "\345\247\223\345\220\215", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = db_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("DeleteCard", "\346\200\247\345\210\253", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = db_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("DeleteCard", "\347\212\266\346\200\201", 0, QApplication::UnicodeUTF8));
        ptn_delete->setText(QApplication::translate("DeleteCard", "\345\210\240\351\231\244\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        btn_start->setText(QApplication::translate("DeleteCard", "\350\257\273\345\215\241", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DeleteCard", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">\345\247\223\345\220\215\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        lb_cardID->setText(QApplication::translate("DeleteCard", "<html><head/><body><p align=\"right\"><span style=\" font-size:10pt; font-weight:600;\">\345\215\241\345\217\267\357\274\232</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        ptn_release->setText(QApplication::translate("DeleteCard", "\346\263\250\351\224\200\345\215\241\345\217\267", 0, QApplication::UnicodeUTF8));
        lb_db->setText(QApplication::translate("DeleteCard", "\346\225\260\346\215\256\345\272\223", 0, QApplication::UnicodeUTF8));
        btn_dbselect->setText(QApplication::translate("DeleteCard", "\351\200\211\346\213\251", 0, QApplication::UnicodeUTF8));
        btn_dbrefresh->setText(QApplication::translate("DeleteCard", "\345\210\267\346\226\260", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DeleteCard: public Ui_DeleteCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETECARD_H

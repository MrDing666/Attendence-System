#ifndef ADDCARD_H
#define ADDCARD_H

#include <QWidget>
#include "IEEE14443/IEEE14443Control.h"
#include "ChannelMan/RFIDChannelMan.h"

namespace Ui {
class AddCard;
}


class AddCard : public QWidget
{
    Q_OBJECT

public:
    explicit AddCard(QWidget *parent = 0);
    ~AddCard();

private slots:
    void load();
    void on_pbn_start_clicked();
    void on_pbn_addName_clicked();
    void on_btn_dbselect_clicked();
    void on_btn_dbrefresh_clicked();
    void onNewCard(qlonglong decID, const QByteArray &byteID);
    void on_search_error(int cmdType, const QString &result);// 用来处理寻卡失败
    void on_search_success(const QByteArray &cardid);// 用来处理寻卡成功
    void on_ted_showID(int block, const QByteArray &data);// 显示卡号
    void onWriteCard(int block, const QByteArray &data);
    void on_pbn_back_clicked();




private:
    Ui::AddCard *ui;
    IEEE14443Control *rfid;
//    ManageControl *mcl;
};

#endif // AddCard_H

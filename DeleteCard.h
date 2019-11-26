#ifndef DELETECARD_H
#define DELETECARD_H

#include <QWidget>
#include "ChannelMan/RFIDChannelMan.h"
#include "IEEE14443/IEEE14443Control.h"

namespace Ui {
class DeleteCard;
}

class DeleteCard : public QWidget
{
    Q_OBJECT

public:
    explicit DeleteCard(QWidget *parent = 0);
    ~DeleteCard();

private slots:
    void on_btn_back_clicked();//返回
    void load();//加载数据表
     void onNewCard(qlonglong decID);
    void on_btn_dbselect_clicked();//选择数据库
    void on_btn_dbrefresh_clicked();//重选数据库
    void on_ptn_release_clicked(); //撤销
    void on_ptn_delete_clicked();//删除
    void on_search_error(int cmdType, const QString &result);// 用来处理寻卡失败
    void on_search_success(const QByteArray &cardid);// 用来处理寻卡成功
    void on_ted_showID(int block, const QByteArray &data);// 显示卡号
    void on_btn_start_clicked();



private:
    Ui::DeleteCard *ui;
    IEEE14443Control *rfid;
};

#endif // DELETECARD_H

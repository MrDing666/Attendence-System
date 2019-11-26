#ifndef EDITCARD_H
#define EDITCARD_H

#include <QWidget>
#include "IEEE14443/IEEE14443Control.h"
#include "ChannelMan/RFIDChannelMan.h"
namespace Ui {
class EditCard;
}

class EditCard : public QWidget
{
    Q_OBJECT

public:
    explicit EditCard(QWidget *parent = 0);
    ~EditCard();

private slots:
    void load();
    void on_btn_dbselect_clicked();
    void on_btn_dbrefresh_clicked();
    void on_pbn_back_clicked();
     void on_pbn_start_clicked();
    void onNewCard(qlonglong decID);
    void on_search_error(int cmdType, const QString &result);// 用来处理寻卡失败
    void on_search_success(const QByteArray &cardid);// 用来处理寻卡成功
    void on_ted_showID(int block, const QByteArray &data);// 显示卡号

    void on_pbn_update_clicked();

private:
    Ui::EditCard *ui;
    IEEE14443Control *rfid;

};

#endif // EditCard_H

#ifndef SYSTEMMANAGE_H
#define SYSTEMMANAGE_H

#include <QWidget>
#include "IEEE14443/IEEE14443Control.h"
#include "ChannelMan/RFIDChannelMan.h"

namespace Ui {
class SystemManage;
}

class SystemManage : public QWidget
{
    Q_OBJECT

public:
    explicit SystemManage(QWidget *parent = 0);
    ~SystemManage();

private slots:
    void load();
    void on_btn_dbselect_clicked();
    void on_btn_dbrefresh_clicked();
    void on_pbn_back_clicked();
    void on_pbn_start_clicked();
    void onNewCard(unsigned long decID);
    void on_search_error(int cmdType, const QString &result);// 用来处理寻卡失败
    void on_search_success(const QByteArray &cardid);// 用来处理寻卡成功
    void on_ted_showID(int block, const QByteArray &data);// 显示卡号



    void on_pbn_addName_clicked();

    void on_ptn_delete_clicked();



private:
    Ui::SystemManage *ui;
      IEEE14443Control *rfid;
};

#endif // SYSTEMMANAGE_H

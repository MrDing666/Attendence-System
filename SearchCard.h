#ifndef SEARCHCARD_H
#define SEARCHCARD_H

#include <QWidget>
#include"IEEE14443/IEEE14443Control.h"
#include"ChannelMan/RFIDChannelMan.h"

namespace Ui {
class SearchCard;
}

class SearchCard : public QWidget
{
    Q_OBJECT

public:
    explicit SearchCard(QWidget *parent = 0);
    ~SearchCard();

private slots:
    //定义槽函数，一个是寻卡失败的函数error(带2个参数，一个是失败类型，一个是失败返回的结果)
    void on_search_error(int cmdType, const QString &result);
    //定义槽函数，一个是寻卡成功的函数success(带1个参数，用来存储获取到的卡号)
//    void on_ted_showID(int block, const QByteArray &data);// 显示卡号
    void onNewCard(qlonglong decID);
    void on_search_success(const QByteArray &cardid);
    void on_btn_dbselect_clicked();
    void on_btn_dbrefresh_clicked();
    void on_pbn_back_clicked();
    void on_pbn_search_clicked();
    void on_pbn_searchLog_clicked();


    void load();
    void log_load(qlonglong card);

    void on_pbn_handsearch_clicked();

private:
    Ui::SearchCard *ui;
    IEEE14443Control *rfid;
};

#endif // SEARCHCARD_H

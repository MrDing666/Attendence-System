#include "EditCard.h"
#include "ui_EditCard.h"
#include "ManageControl.h"
#include"ATSysDatabaseControl.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QDebug>
#include<qdesktopwidget.h>

EditCard::EditCard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EditCard)
{
    ui->setupUi(this);

    this->setWindowTitle("考勤系统");//设置标题
    //窗口居中显示
    this->move((QApplication::desktop()->width() - this->width())/2,(QApplication::desktop()->height() - this->height())/2);

    ui->db_table->horizontalHeader()->setResizeMode(QHeaderView::Stretch);//设置表列宽
    // 选择13.56M读写器
    RFIDChannelMan::setChannel(RFIDChannelMan::ChannelIEEE14443);
    // 创建13.56M读写器操作类对象
    rfid = new IEEE14443Control(this);
    // 连接出错、寻卡成功以及读卡成功的信号
    connect(rfid, SIGNAL(error(int,QString)),
            this, SLOT(on_search_error(int,QString)));
    connect(rfid, SIGNAL(foundCard(QByteArray)),
            this, SLOT(on_search_success(QByteArray)));
    connect(rfid, SIGNAL(dataReaded(int,QByteArray)),
            this, SLOT(on_ted_showID(int,QByteArray)));

//    rfid->start(RFIDChannelMan::getRfidPort());
//    rfid->start("COM7");
     rfid->start("COM7");
}

EditCard::~EditCard()
{
    delete ui;
}

// 从数据库中加载考勤卡信息和考勤记录并显示在界面上
 void EditCard::load()
    {

        QList<employee_info> list = ATSysDatabaseControl::load();
        while(ui->db_table->rowCount() > 0)
            ui->db_table->removeRow(0);
        for(int i = 0; i < list.count(); i++)
        {
            const employee_info &info = list.at(i);
            ui->db_table->insertRow(i);
            ui->db_table->setItem(i, 0,
                                new QTableWidgetItem(QString::number(info.card)));
            ui->db_table->setItem(i, 1,
                                new QTableWidgetItem(info.name));
            ui->db_table->setItem(i, 2,
                                new QTableWidgetItem(info.sex));
            ui->db_table->setItem(i, 3,
                                new QTableWidgetItem(info.state));
        }
  }
 /*---------------------------修改信息--------------------------------*/
 void EditCard::on_pbn_update_clicked()
 {
//     if(ui->ted_showNumber->text().isEmpty() || ui->ted_showName->text().isEmpty())
//     {
//         QMessageBox::warning(this, "警告", "卡号或姓名不能为空");
//         return;
//     }
     QList<QTableWidgetItem *> sel = ui->db_table->selectedItems();
     if(sel.isEmpty())
     {
         QMessageBox::warning(this, "警告", "没有选择任何信息");
         return;
     }
     if(!sel.isEmpty())
     {
     //有个返回值，如果执行成功，提示成功
     ATSysDatabaseControl::update(  ui->ted_updateNumber->text().toLongLong(),
                                    ui->ted_updateName->text(),
                                    ui->cb_updateSex->currentText(),
                                    ui->cb_updateState->currentText());
     load();
     ui->ted_updateNumber->clear();
     ui->ted_updateName->clear();
     ui->cb_updateSex->setCurrentIndex(0);
     ui->cb_updateState->setCurrentIndex(0);

     QMessageBox::information(this, "提示", "修改成功！");

     }
 }

/*-----------------------选择与刷新数据库---------------------*/

// 点击选择按钮时执行的槽函数，用于选择数据库文件
void EditCard::on_btn_dbselect_clicked()
{
    QString dbPath = QFileDialog::getSaveFileName(
                this, "选择文件",
                ui->ted_dbpath->text(),
                "数据库(*.db *.db3)",
                NULL,
                QFileDialog::DontConfirmOverwrite);
    if(dbPath.isEmpty())
        return;
    if(ATSysDatabaseControl::setDatabase(dbPath))
    {
        ui->ted_dbpath->setText(dbPath);
        load();
    }
}
//点击刷新按钮时执行的槽函数，用于重新加载数据库中的信息
void EditCard::on_btn_dbrefresh_clicked()
{
    if(ui->ted_dbpath->text()==NULL)
    {
        QMessageBox::warning(this, "警告", "请先选择数据库！");
    }
    else
    {
        ui->ted_updateNumber->clear();
        ui->ted_updateName->clear();
        ui->cb_updateSex->setCurrentIndex(0);
        ui->cb_updateState->setCurrentIndex(0);
        load();

    }
}
//返回操作
void EditCard::on_pbn_back_clicked()
{
    ManageControl *mcl = new ManageControl();//实例化一个对象
    this->hide();
    mcl->show();
    rfid->stop();
}
/*---------------------------13.56M读卡-----------------*/
/**
 * @brief onNewCard
 * 获取到ID卡时执行的槽函数
 *
 * @param decID 由newCard()信号传递过来的卡号
 * @param byteID 由newCard()信号传递过来的卡号
 */
void EditCard::onNewCard(qlonglong decID)
{
    QList<QTableWidgetItem*> lists =
            ui->db_table->findItems(QString::number(decID), Qt::MatchExactly);
    if(lists.isEmpty())
    {
        QMessageBox::information(this, "提示", "此卡号未注册");
        return;
    }
    else
    {
        ui->db_table->selectRow(lists.at(0)->row());    //先选中某一行
        QList<QTableWidgetItem*> items = ui->db_table->selectedItems();//获取选中的行信息
        ui->ted_updateNumber->setText(items.at(0)->text());
        ui->ted_updateName->setText(items.at(1)->text());
//        ui->cb_updateSex->setText(items.at(2)->text());
//        ui->cb_updateSex->currentIndex(items.at(2)->text());
//       ui->cb_updateState->setItemText(0,items.at(3)->text());
    }
}

//------------------------13.56M读卡-----------------------//
//槽函数，获取卡号失败的函数
void EditCard::on_search_error(int cmdType, const QString &result)
{

    if(cmdType == IEEE14443Control::GetCardId)
    //    rfid->getCardId();
       QMessageBox::information(this, "提示", "读卡错误！");
}
void EditCard::on_search_success(const QByteArray &cardid)
{

    qlonglong decID;
    bool ok;

    qDebug()<<"==[on_search_success]==get cardID:"<<cardid.toHex();
    decID = cardid.toHex().toLongLong(&ok, 16);
    qDebug()<<"====get cardID:"<<QString::number(decID);
    //读卡成功，将卡号显示在文本框中
    ui->ted_updateNumber->setText(QString::number(decID));
    // 读卡过程中获得卡号，显示卡号
    onNewCard(decID);

}

//读卡完成，显示读取到到数据
void EditCard::on_ted_showID(int block, const QByteArray &data)
{
  QMessageBox::information(this, "提示", data.toHex());

}

void EditCard::on_pbn_start_clicked()
{
    // 点击按钮时，启动寻卡操作
    rfid->getCardId();
}



#include "AddCard.h"
#include "ui_AddCard.h"
#include "ManageControl.h"
#include "ATSysDatabaseControl.h"

#include <QMessageBox>
#include <QFileDialog>
#include <QDebug>
#include <QTableWidgetItem>
#include<qdesktopwidget.h>

AddCard::AddCard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddCard)
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

// rfid->start(RFIDChannelMan::getRfidPort());
//    rfid->start("COM7");

    rfid->start("COM7");
}

//析构函数
AddCard::~AddCard()
{
    delete ui;
}

// 从数据库中加载考勤卡信息和考勤记录并显示在界面上
 void AddCard::load()
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

//点击登记按钮时执行的槽函数，用于将考勤卡添加到数据库中
 void AddCard::on_pbn_addName_clicked()
 {
     if(ui->ted_showNumber->text().isEmpty() || ui->ted_showName->text().isEmpty())
     {
         QMessageBox::warning(this, "警告", "卡号或姓名不能为空");
         return;
     }
    QString ts = ui->ted_showNumber->text();
    employee_info list = ATSysDatabaseControl::load(ts.toLongLong());
     //如果数据表中卡号已经存在，则无法注册
     if(list.card > 0)//如果卡号存在，这里可以进一步的改进
     {
         QMessageBox::warning(this, "警告", "该卡号已登记");
         return;
     }

     //添加用户信息的时候，状态默认为：正常
     ATSysDatabaseControl::add(ui->ted_showNumber->text().toLongLong(),
                               ui->ted_showName->text(),
                               ui->ted_showSex->currentText(),
                               "正常");
     load();
     ui->ted_showNumber->clear();
     ui->ted_showName->clear();
     ui->ted_showSex->setCurrentIndex(0);
     //在登记的同时，将卡的信息写入IC卡中
     //设置ted_showNumber获取的信息为字节信息
/*
    这部分是写卡函数需要的信息，先注释了，需要调试
     QByteArray data = QByteArray::fromHex(ui->ted_showNumber->text().toLatin1());
     qDebug()<<"获取的data是："<<data;
     AddCard::onWriteCard(0,data);*/

     QMessageBox::information(this, "提示", "登记完成");
 }

 //写卡函数，将获取的卡号信息写入ic卡中---先注释，有问题
  void AddCard::onWriteCard(int block, const QByteArray &data)
  {
      /*
      QByteArray data = QByteArray::fromHex(
      ui->lineEdit_2->text().toLatin1());*/
     //如果写卡失败，返回信息
   //   if(!rfid->writeCard(block, data))
    //      QMessageBox::warning(this, "错误", "卡信息写入失败！");
  }

/*-----------------------选择与刷新数据库---------------------*/

// 点击选择按钮时执行的槽函数，用于选择数据库文件
void AddCard::on_btn_dbselect_clicked()
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
void AddCard::on_btn_dbrefresh_clicked()
{
    if(ui->ted_dbpath->text()==NULL)
    {
        QMessageBox::warning(this, "警告", "请先选择数据库！");
    }
    else
    {
        ui->ted_showNumber->clear();
        ui->ted_showName->clear();
        ui->ted_showSex->setCurrentIndex(0);
        load();
    }
}
//返回操作
void AddCard::on_pbn_back_clicked()
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
void AddCard::onNewCard(qlonglong decID, const QByteArray &byteID)
{
    QList<QTableWidgetItem*> lists =
            ui->db_table->findItems(QString::number(decID), Qt::MatchExactly);
    if(!lists.isEmpty())//如果列表中存在对应的卡号信息，则选中表中的信息
        ui->db_table->selectRow(lists.at(0)->row());
    ui->ted_showNumber->setFocus();
}

//------------------------13.56M读卡-----------------------//
//槽函数，获取卡号失败的函数
void AddCard::on_search_error(int cmdType, const QString &result)
{

    if(cmdType == IEEE14443Control::GetCardId)
//        rfid->getCardId();
       QMessageBox::information(this, "提示", "读卡错误！");
}
void AddCard::on_search_success(const QByteArray &cardid)
{

    qlonglong decID;
    bool ok;
    qDebug()<<"==[on_search_success]==get cardID:"<<cardid.toHex();
    decID = cardid.toHex().toLongLong(&ok,16);
    qDebug()<<"====get cardID:"<<QString::number(decID);
    // 读卡过程中获得卡号，显示卡号
    ui->ted_showNumber->setText(QString::number(decID));
    onNewCard(decID,cardid);

}

//读卡完成，显示读取到到数据
void AddCard::on_ted_showID(int block, const QByteArray &data)
{
  QMessageBox::information(this, "提示", data.toHex());

}

void AddCard::on_pbn_start_clicked()
{
    // 点击按钮时，启动寻卡操作
    rfid->getCardId();
}

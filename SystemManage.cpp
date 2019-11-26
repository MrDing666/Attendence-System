#include "SystemManage.h"
#include "ui_SystemManage.h"
#include "ManageControl.h"
#include"ATSysDatabaseControl.h"
#include<QFileDialog>
#include<QMessageBox>
#include<QDebug>
#include<QDialog>
#include<qdesktopwidget.h>

SystemManage::SystemManage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SystemManage)
{
     ui->setupUi(this);

     this->setWindowTitle("考勤系统");//设置标题
     //窗口居中显示
     this->move((QApplication::desktop()->width() - this->width())/2,(QApplication::desktop()->height() - this->height())/2);


    setWindowFlags(Qt::WindowTitleHint | Qt::CustomizeWindowHint);//设置窗口只有一个标题
    setAttribute(Qt::WA_ShowModal, true);//设置为模态窗口

    ui->ted_showPassword->setPlaceholderText("请输入数字");//使用占位符提示

    //使用正则表达式限制密码仅能输入数字
    QRegExp regx("^[0-9]*$");
    ui->ted_showPassword->setValidator(new QRegExpValidator(regx, this));


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

SystemManage::~SystemManage()
{
    delete ui;
}
// 从数据库中加载管理员信息表
 void SystemManage::load()
    {

        QList<manage_info> list = ATSysDatabaseControl::manageload();
        while(ui->db_table->rowCount() > 0)
            ui->db_table->removeRow(0);
        for(int i = 0; i < list.count(); i++)
        {
            const manage_info &info = list.at(i);
            ui->db_table->insertRow(i);
            ui->db_table->setItem(i, 0,
                                new QTableWidgetItem(QString::number(info.id)));
            ui->db_table->setItem(i, 1,
                                new QTableWidgetItem(QString::number(info.manageid)));
            ui->db_table->setItem(i, 2,
                                new QTableWidgetItem(info.name));
            ui->db_table->setItem(i, 3,
                                new QTableWidgetItem(info.sex));
            ui->db_table->setItem(i, 4,
                                new QTableWidgetItem(info.pwd));
            ui->db_table->setItem(i, 5,
                                new QTableWidgetItem(info.permission));
        }
  }
 //添加管理员
 void SystemManage::on_pbn_addName_clicked()
 {
     QString uname;
     qlonglong manid;
     uname =ui->ted_showName->text();
     manid =ui->ted_showNumber->text().toLongLong();
     manage_info info = ATSysDatabaseControl::manageload(uname);
      manage_info info1 = ATSysDatabaseControl::manageload(manid);
     if(ui->ted_showNumber->text().isEmpty() ||ui->ted_showPassword->text().isEmpty())
     {
         QMessageBox::warning(this, "警告", "卡号或密码不能为空");
         return;
      }
         //如果数据表中该姓名已经存在，则无法注册
     else if(uname == info.name )
         {
             QMessageBox::warning(this, "警告", "该姓名已注册");
             ui->ted_showName->clear();
             return;
         }
     else if(manid == info1.manageid)
         {
             QMessageBox::warning(this, "警告", "该卡号已注册");
             ui->ted_showNumber->clear();
             return;
         }

     else if( ui->ted_showName->text().isEmpty())
       {
         QMessageBox::warning(this, "警告", "姓名不能为空");
         return;
        }

//     QRegExp reg("^[0-9]{6}$");
//     QRegExpValidator validator(reg);
//     else if(ui->ted_showPassword->text()!= validator.validate(reg) )
//        {
//         QMessageBox::Warning(this,"警告","密码只能是6位数字");
//         return;
//        }
     //添加管理员信息的时候，权限默认为1（普通管理员）
     ATSysDatabaseControl::manageadd(ui->ted_showNumber->text().toLongLong(),
                                     ui->ted_showName->text(),
                                     ui->ted_showSex->currentText(),
                                     ui->ted_showPassword->text(),
                                     "管理员" );
      load();
     ui->ted_showNumber->clear();
     ui->ted_showName->clear();
     ui->ted_showSex->setCurrentIndex(0);
     ui->ted_showPassword->clear();


     QMessageBox::information(this, "提示", "注册完成");
 }
 //删除管理员
 void SystemManage::on_ptn_delete_clicked()
 {
     QList<QTableWidgetItem *> sel = ui->db_table->selectedItems();
     if(sel.isEmpty())
     {
         QMessageBox::warning(this, "警告", "没有选择任何信息");
         return;
     }
     if(!sel.isEmpty())
        {
         int question;
         question=QMessageBox::question(this,"提示","确定删除该用户吗？",QMessageBox::Yes|QMessageBox::No,QMessageBox::No);
         if(question==QMessageBox::Yes)
             {
                int row = sel[0]->row();
                qlonglong manageid = ui->db_table->item(row, 1)->text().toLongLong();
                ATSysDatabaseControl::manageremove(manageid);
                ui->db_table->removeRow(row);
                QMessageBox::about(NULL,"提示","删除成功！");
             }
         if(question==QMessageBox::No)
             {
                return;
             }
         }
     load();
 }


/*-----------------------选择与刷新数据库---------------------*/

// 点击选择按钮时执行的槽函数，用于选择数据库文件
void SystemManage::on_btn_dbselect_clicked()
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
void SystemManage::on_btn_dbrefresh_clicked()
{
    if(ui->ted_dbpath->text()==NULL)
    {
        QMessageBox::warning(this, "警告", "请先选择数据库！");
    }
    else
    {
        ui->ted_showNumber->clear();
        ui->ted_showName->clear();
        ui->ted_showSex->clear();
        ui->ted_showPassword->clear();
        load();
    }
}
//返回控制界面
void SystemManage::on_pbn_back_clicked()
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
void SystemManage::onNewCard(unsigned long decID)
{
    QList<QTableWidgetItem*> lists =
            ui->db_table->findItems(QString::number(decID), Qt::MatchExactly);
    if(lists.isEmpty())
    {
        return;
    }
    else
    {    
        ui->db_table->selectRow(lists.at(0)->row());
        QList<QTableWidgetItem*> items = ui->db_table->selectedItems();//获取选中的行信息
        ui->ted_showNumber->setText(items.at(1)->text());
        ui->ted_showName->setText(items.at(2)->text());
        ui->ted_showPassword->setText(items.at(4)->text());
//        ui->ted_showSex->setText(items.at(3)->text());

    }
}

//------------------------13.56M读卡-----------------------//
//槽函数，获取卡号失败的函数
void SystemManage::on_search_error(int cmdType, const QString &result)
{

    if(cmdType == IEEE14443Control::GetCardId)
//        rfid->getCardId();
       QMessageBox::information(this, "提示", "读卡错误！");
}
void SystemManage::on_search_success(const QByteArray &cardid)
{

    qlonglong decID;
    bool ok;

    qDebug()<<"==[on_search_success]==get cardID:"<<cardid.toHex();
    decID = cardid.toHex().toLongLong(&ok,16);

    qDebug()<<"====get cardID:"<<QString::number(decID);
    // 读卡过程中获得卡号，显示卡号
    ui->ted_showNumber->setText(QString::number(decID));
    onNewCard(decID);

}

//读卡完成，显示读取到到数据
void SystemManage::on_ted_showID(int block, const QByteArray &data)
{
  QMessageBox::information(this, "提示", data.toHex());

}
void SystemManage::on_pbn_start_clicked()
{
    // 点击按钮时，启动寻卡操作
    rfid->getCardId();
}



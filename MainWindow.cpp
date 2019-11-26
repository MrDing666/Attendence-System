#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "ATSysDatabaseControl.h"
#include <QTimer>
#include <QDateTime>
#include <QMessageBox>
#include <QFileDialog>
#include <QDebug>
#include<stdio.h>
#include<QDesktopWidget>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    int period, duty;
//    FILE *fp = fopen("/sys/class/misc/pwm-buzzer/period", "r");
//    fscanf(fp, "%d", &period);
//    fclose(fp);
//    fp = fopen("/sys/class/misc/pwm-buzzer/duty", "r");
//    fscanf(fp, "%d", &duty);
//    fclose(fp);

    //设置背景颜色
       QPalette palette(this->palette());
       palette.setColor(QPalette::Background, Qt::white);
       palette.background();
       this->setPalette(palette);

    timer = new QTimer(this);
    //时间组的信号/槽
    connect(timer, SIGNAL(timeout()), this, SLOT(onTimeout()));
    timer->setSingleShot(false);
    timer->start(1000);

    tipTimer = new QTimer(this);
    connect(tipTimer, SIGNAL(timeout()), this, SLOT(hideTip()));
    tipTimer->setSingleShot(true);
    tipTimer->setInterval(3000);//设置定时器每个多少毫秒发送一个timeout()信号

    this->move((QApplication::desktop()->width() - this->width())/2,(QApplication::desktop()->height() - this->height())/2);

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
            this, SLOT(on_show_data(int,QByteArray)));


#ifndef _WIN32
    rfid->start("COM7");         //"/dev/s3c2410_serial2"
#else
    rfid->start("COM7");        //"COM7"

#endif

    onTimeout();
    hideTip();
}

MainWindow::~MainWindow()
{

    delete ui;
}
/**
 * @brief Widget::onTimeout
 * QTimer每个一秒钟触发的槽函数，用于更新日期和时间
 */
//时间组
void MainWindow::onTimeout()
{
    QDateTime dt = QDateTime::currentDateTime();
    ui->lb_date->setText(dt.toString("yyyy-MM-dd"));
    if(ui->lb_hour->number() != dt.time().hour())
        ui->lb_hour->motionToNumber(dt.time().hour());
    if(ui->lb_minute->number() != dt.time().minute())
        ui->lb_minute->motionToNumber(dt.time().minute());
    ui->lcdNumber->display(dt.time().second());
}

/**
 * @brief Widget::onNewCard
 * 获取到ID卡时执行的槽函数
 * @param decID 由newCard()信号传递过来的卡号
 * @param byteID 由newCard()信号传递过来的卡号
 */
void MainWindow::onNewCard(qlonglong decID, const QByteArray &byteID)
{
    employee_info info = ATSysDatabaseControl::load(decID);
    if(info.id > 0 && info.state == "正常" )
    {
        showTip("欢迎你 " + info.name, true);
        //打卡成功，启动蜂鸣器
        FILE *fp = fopen("/sys/class/misc/pwm-buzzer/duty", "r+");
        fprintf(fp, "%d\n", 100);
        fclose(fp);

        ATSysDatabaseControl::checkIn(decID, info.name);
    }
    else if(info.id > 0 && info.state == "已注销" )
     {
        showTip("此卡已注销 " ,false);
    }
    else
        showTip("此卡无效", false);
    tipTimer->start();
}

/**
 * @brief Widget::showTip
 * 用于显示刷卡后的提示信息
 * @param tip 提示信息
 * @param valid 绿色指示灯是否点亮
 */
void MainWindow::showTip(const QString &tip, bool valid)
{
    ui->lb_tip->setText(tip);
    ui->lb_tip->show();
    if(valid)
    {
        ui->lb_red->setStyleSheet("");
        ui->lb_green->setStyleSheet(
                    "background-color: rgb(0, 255, 0);\n"
                    "border-radius: 30px;");
    }
    else
    {
        ui->lb_red->setStyleSheet("background-color: rgb(255, 0, 0);\n"
                                    "border-radius: 30px;");
        ui->lb_green->setStyleSheet("");
    }
}
/**
 * @brief Widget::hideTip
 * 关闭刷卡后的提示信息的显示
 */
void  MainWindow::hideTip()
{
    ui->lb_tip->hide();
    ui->lb_red->setStyleSheet("");
    ui->lb_green->setStyleSheet("");
}


//后台登录功能
void MainWindow::on_ptn_sysLogin_clicked()
{
   this->hide();
    ml.show();
     rfid->stop();
}

////获取数据库
//void MainWindow::on_btn_dbselect_clicked()
//{
//        QString dbPath = QFileDialog::getOpenFileName(  //获取本地文件
//                this, "选择文件",
//                ui->ted_dbpath->text(),
//                "数据库(*.db *.db3)");
//        if(dbPath.isEmpty())
//            return;
//        if(ATSysDatabaseControl::setDatabase(dbPath))
//        {
//            ui->ted_dbpath->setText(dbPath);
//        }
//}

/*--------------------读卡功能--------------------------------*/
//槽函数，获取卡号失败的函数
void MainWindow::on_search_error(int cmdType, const QString &result)
{

    if(cmdType == IEEE14443Control::GetCardId)
        //rfid->getCardId();
        QMessageBox::information(this, "提示", "读卡错误！");
}
void MainWindow::on_search_success(const QByteArray &cardid)
{
    qlonglong decID;
    bool ok;

    qDebug()<<"==[on_search_success]==get cardID:"<<cardid.toHex();
    decID = cardid.toHex().toLongLong(&ok, 16);

    qDebug()<<"====get cardID:"<<QString::number(decID);
    // 读卡过程中获得卡号，显示卡号
    onNewCard(decID,cardid);

}
//
void MainWindow::on_show_data(int block, const QByteArray &data)
{
    //读卡完成，显示读取到到数据
    QMessageBox::information(this, "提示", data.toHex());
}

//连接数据库
void MainWindow::on_ptn_clockIN_clicked()
{
    //打卡成功，启动蜂鸣器
    int period = 1; // 用来保存当前的周期值
    // 打开周期控制文件
    FILE *fp = fopen("/sys/class/misc/pwm-buzzer/period", "r");
    // 从文件中读取十进制形式的周期值
    fscanf(fp, "%d", &period);
    // 控制结束，关闭控制文件
    fclose(fp);
   fp = fopen("/sys/class/misc/pwm-buzzer/duty", "r+");
    fprintf(fp, "%d\n", 100);
    fclose(fp);
    //ATSysDatabaseControl::setNewDatabase()是将路径设置成为固定的路径了。
     if(ATSysDatabaseControl::setDatabase(ATSysDatabaseControl::setNewDatabase()))
     {
        // 点击按钮时，启动寻卡操作
        rfid->getCardId();
     }
     else
     {
         //数据库连接失败
         QMessageBox::information(this, "提示", "数据库初始化失败！");
     }
}



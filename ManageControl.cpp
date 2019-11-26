#include "ManageControl.h"
#include "ui_ManageControl.h"
#include"MainWindow.h"
#include<qdialog.h>
#include<QDesktopWidget>

ManageControl::ManageControl(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ManageControl)
{
    ui->setupUi(this);
    QPalette palette(this->palette());
    palette.setColor(QPalette::Background, Qt::white);
    this->setPalette(palette);


    QDesktopWidget* desktop = QApplication::desktop(); // =qApp->desktop();也可以

    this->setWindowTitle("考勤系统");//设置标题
    move((desktop->width() - this->width())/2, (desktop->height() - this->height())/2);//窗口居中显示
}

ManageControl::~ManageControl()
{
    delete ui;
}



//删除卡信息
void ManageControl::on_ptn_deleteCard_clicked()
{
    dtcd = new DeleteCard();
    this->hide();
    dtcd->show();
}
//查询卡信息
void ManageControl::on_ptn_searchCard_clicked()
{
    srcd =new SearchCard();
    this->hide();
    srcd->show();
}

//添加卡信息
void ManageControl::on_ptn_addCard_clicked()
{
    adcd=new AddCard();
    this->hide();
    adcd->show();
}

//修改信息
void ManageControl::on_ptn_editCard_clicked()
{
    etcd =new EditCard();
    this->hide();
    etcd->show();
}
//跳转到MainWindow
void ManageControl::on_pbn_back_clicked()
{
  MainWindow *mw= new MainWindow();//实例化一个对象
    rfid = new IEEE14443Control();
    this->hide();
     mw->show();
     rfid->stop();

}

void ManageControl::on_ptn_systemManage_clicked()
{
    sysm =new SystemLogin();
    this->hide();
    sysm->show();
}

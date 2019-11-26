#include "SystemLogin.h"
#include "ui_SystemLogin.h"
#include"ManageControl.h"
//#include<QDialog>
#include<QMessageBox>
#include<qdesktopwidget.h>

SystemLogin::SystemLogin(QWidget *parent) :    
    ui(new Ui::SystemLogin)
{
    setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);//设置窗口无关闭和最大小化
    setAttribute(Qt::WA_ShowModal, true);//设置为模态窗口

    ui->setupUi(this);
    ui->ted_pwd->setEchoMode(QLineEdit::Password);

    this->move((QApplication::desktop()->width() - this->width())/2,(QApplication::desktop()->height() - this->height())/2);


//   QPalette palette(this->palette());
//   palette.setColor(QPalette::Background, Qt::white);
//   this->setPalette(palette);




}

SystemLogin::~SystemLogin()
{
    delete ui;
}

void SystemLogin::on_ptn_login_clicked()
{
    if(ui->ted_user->text() == "admin" && ui->ted_pwd->text() == "123456")//在这里修改超级管理员账号和密码
    {
        sys =new SystemManage();
        sys->show();
        this->hide();
    }
    else if(ui->ted_user->text() == "")
    {
         QMessageBox::warning(NULL,"提示","用户名不能为空！");
    }
    else if(ui->ted_pwd->text() == "")
    {
         QMessageBox::warning(NULL,"提示","密码不能为空！");
    }
    else
    {
         QMessageBox::warning(NULL,"提示","用户名或密码错误！");
    }
}

void SystemLogin::on_ptn_reset_clicked()
{
    ui->ted_user->clear();
    ui->ted_pwd->clear();

}

void SystemLogin::on_pbn_back_clicked()
{
    ManageControl *mcl=new ManageControl() ;
    mcl->show();
    this->hide();

}

#include "ManageLogin.h"
#include "ui_ManageLogin.h"
#include "ATSysDatabaseControl.h"
#include"MainWindow.h"
#include<QMessageBox>
#include<QtSql>
#include <QDebug>
#include"MainWindow.h"
#include<QDesktopWidget>

ManageLogin::ManageLogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ManageLogin)
{
    setWindowFlags(Qt::Dialog|Qt::FramelessWindowHint);//设置窗口无关闭和最大小化
    setAttribute(Qt::WA_ShowModal, true);//设置为模态窗口


    ui->setupUi(this);
   ui->ted_pwd->setEchoMode(QLineEdit::Password);
   ui->ted_pwd->setPlaceholderText("请输入数字");
   //使用正则表达式限制密码仅能输入数字
   QRegExp regx("^[0-9]*$");
   ui->ted_pwd->setValidator(new QRegExpValidator(regx, this));


  this->move((QApplication::desktop()->width() - this->width())/2,(QApplication::desktop()->height() - this->height())/2);


//设置背景颜色
   QPalette palette(this->palette());
   palette.setColor(QPalette::Background, Qt::white);
   this->setPalette(palette);

//设置数据库的路径
//   QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE", "connection1");
//   QString dbPath = QCoreApplication::applicationDirPath() + "//text.db";
//   db.setDatabaseName(dbPath);
//        QSqlDatabase db1 = QSqlDatabase::addDatabase("QSQLITE", "connection1");
//       QString dbpath = QCoreApplication::applicationDirPath();
//       db1.setDatabaseName(dbpath + "/" + "text.db");
//       if(!db1.open())
//       {
//           qDebug() << db1.lastError();
//       }
//       else
//       {
//           qDebug() << "connect to db1.db";
//       }


}

ManageLogin::~ManageLogin()
{
    delete ui;
}

//登录界面
void ManageLogin::on_ptn_login_clicked()
{
    //ATSysDatabaseControl::setNewDatabase()是将路径设置成为固定的路径了。
     if(ATSysDatabaseControl::setDatabase(ATSysDatabaseControl::setNewDatabase()))
     {
        QString uname;
        QString upwd;
        uname = ui->ted_user->text();//获取用户名e
        upwd = ui->ted_pwd->text();//获取密码
       manage_info info = ATSysDatabaseControl::manageload(uname);
//    if(info.manageid == user &&  QString::compare(pwd, info.pwd, Qt::CaseInsensitive)==0)//字符串的比较
//       qDebug() << "uname:"<<uname;
//       qDebug() << "info.name:"<<info.name;
//       qDebug() << "upwd:"<<upwd;
//       qDebug() << "info.pwd:"<<info.pwd;
       if(((info.name == uname)&&(info.pwd == upwd)&&(uname != "")&&(upwd != ""))||((uname == "admin")&&(upwd=="123456")))
                                                                                     //在这里修改超级管理员账号，密码
       {
          mcl.show();
          this->hide();
       }
      else if(ui->ted_user->text() == "")
            QMessageBox::warning(this,"提示","用户名不能为空！");
      else if(upwd == "")
            QMessageBox::warning(this,"提示","密码不能为空！");
      else
            QMessageBox::warning(NULL,"提示","用户名或密码错误！");
     }


}

void ManageLogin::on_ptn_reset_clicked()
{
    ui->ted_user->clear();
    ui->ted_pwd->clear();

}

void ManageLogin::on_pbn_back_clicked()
{
    MainWindow *mww=new MainWindow() ;
    mww->show();
    this->hide();

}

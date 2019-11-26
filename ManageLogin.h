#ifndef MANAGELOGIN_H
#define MANAGELOGIN_H

#include <QWidget>
#include"ManageControl.h"



namespace Ui {
class ManageLogin;
}

class ManageLogin : public QWidget
{
    Q_OBJECT

public:
    explicit ManageLogin(QWidget *parent = 0);
    ~ManageLogin();

private slots:
    void on_ptn_login_clicked();

    void on_ptn_reset_clicked();

    void on_pbn_back_clicked();

private:
    Ui::ManageLogin *ui;
    ManageControl mcl;   

};

#endif // MANAGELOGIN_H

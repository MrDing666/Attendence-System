#ifndef SYSTEMLOGIN_H
#define SYSTEMLOGIN_H

#include <QWidget>
#include"SystemManage.h"

namespace Ui {
class SystemLogin;
}

class SystemLogin : public QWidget
{
    Q_OBJECT

public:
    explicit SystemLogin(QWidget *parent = 0);
    ~SystemLogin();

private slots:
    void on_ptn_login_clicked();

    void on_ptn_reset_clicked();

    void on_pbn_back_clicked();

private:
    Ui::SystemLogin *ui;
    SystemManage *sys;
};

#endif // SYSTEMLOGIN_H

#ifndef MANAGECONTROL_H
#define MANAGECONTROL_H

#include <QWidget>
#include "DeleteCard.h"
#include "SearchCard.h"
#include "AddCard.h"
#include "EditCard.h"
#include "SystemLogin.h"


namespace Ui {
class ManageControl;
}

class ManageControl : public QWidget
{
    Q_OBJECT

public:

    explicit ManageControl(QWidget *parent = 0);
    ~ManageControl();

private slots:

    void on_ptn_deleteCard_clicked();

    void on_ptn_searchCard_clicked();

    void on_ptn_addCard_clicked();

    void on_ptn_editCard_clicked();

    void on_pbn_back_clicked();

    void on_ptn_systemManage_clicked();

private:
    Ui::ManageControl *ui;
    DeleteCard *dtcd;
    SearchCard *srcd;
    AddCard    *adcd;
    EditCard   *etcd;
    SystemLogin *sysm;
    IEEE14443Control *rfid;
};

#endif // MANAGECONTROL_H

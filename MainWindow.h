#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"ManageLogin.h"

#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

private slots:

    void onTimeout();
    void onNewCard(qlonglong decID, const QByteArray &byteID);
    void showTip(const QString &tip, bool valid);
    void hideTip();
    void on_ptn_sysLogin_clicked();
    void on_search_error(int cmdType, const QString &result);
    void on_search_success(const QByteArray &cardid);
    void on_show_data(int block, const QByteArray &data);
    void on_ptn_clockIN_clicked();

private:
    Ui::MainWindow *ui;
    ManageLogin ml;
    QTimer *timer;
    QTimer *tipTimer;
    IEEE14443Control *rfid;
};

#endif // MAINWINDOW_H

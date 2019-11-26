#include "MainWindow.h"
#include "SearchCard.h"
#include <QApplication>
#include <QTextCodec>
#include<qframe.h>
#include<QDesktopWidget>



int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));

    MainWindow w;
//    SystemManage w;
//    SearchCard w;
    w.setWindowTitle("考勤系统");
//    w.move ((QApplication::desktop()->width() - w.width())/2,(QApplication::desktop()->height() - w.height())/2);
    w.show();



    return a.exec();
}

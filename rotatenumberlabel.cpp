//#include "rotatenumberlable.h"
#include "rotatenumberlabel.h"
#include <QPainter>
#include "numres.h"
RotateNumberLabel::RotateNumberLabel(QWidget *parent)
    : QLabel(parent)
    , currentIndex(0)
    , currentNumber(0)
    , nextNumber(0)
    , motion(false)
{
    this->setMinimumSize(QSize(96, 90));
    this->setMaximumSize(QSize(96, 90));
    this->resize(QSize(96, 90));
    timer = new QTimer(this);
    timer->setInterval(50);
    connect(timer, SIGNAL(timeout()), this, SLOT(onTimer()));
    reloadPicture();
}

RotateNumberLabel::~RotateNumberLabel()
{
    delete timer;
}

void RotateNumberLabel::reloadPicture()
{
	bgPic.loadFromData(bgMap[currentIndex].pic, bgMap[currentIndex].size);
	underPic[0].loadFromData(underMap[nextNumber / 10][currentIndex].pic, underMap[nextNumber / 10][currentIndex].size);
	underPic[1].loadFromData(underMap[nextNumber % 10][currentIndex].pic, underMap[nextNumber % 10][currentIndex].size);
	upperPic[0].loadFromData(upperMap[currentNumber / 10][currentIndex].pic, upperMap[currentNumber / 10][currentIndex].size);
	upperPic[1].loadFromData(upperMap[currentNumber % 10][currentIndex].pic, upperMap[currentNumber % 10][currentIndex].size);
}

void RotateNumberLabel::onTimer()
{
    this->update();
    if(motion)
        timer->start();
}

void RotateNumberLabel::paintEvent(QPaintEvent *ev)
{
        Q_UNUSED(ev);
        if(this->bgPic.isNull())
            return;
        int oy = (90 - 87) / 2;
        int ox1 = 8;
        int ox2  = 0;
        QPainter pt(this);
        pt.drawImage(0, 0, bgPic);
        pt.drawImage(ox1, oy, underPic[0]);
        pt.drawImage(ox1 + ox2 + underPic[0].width(), oy, underPic[1]);
        pt.drawImage(ox1, oy, upperPic[0]);
        pt.drawImage(ox1 + ox2 + upperPic[0].width(), oy, upperPic[1]);
        if(motion)
        {
            if(++currentIndex >= 10)
            {
                currentIndex = 0;
                currentNumber = nextNumber;
                motion  = false;
            }
            reloadPicture();
        }
}

void RotateNumberLabel::setNumber(int n)
{
        n = n % 100;
        currentIndex = 0;
        currentNumber = n;
        nextNumber = n;
        reloadPicture();
        motion = false;
        this->update();
}

void RotateNumberLabel::motionToNumber(int n)
{
     n = n % 100;
     currentIndex = 0;
     nextNumber = n;
     motion = true;
     reloadPicture();
     this->update();
     timer->start();
}

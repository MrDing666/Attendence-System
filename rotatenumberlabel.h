#ifndef ROTATENUMBERLABLE_H
#define ROTATENUMBERLABLE_H

#include <QLabel>
#include <QPaintEvent>
#include <QImage>
#include <QTimer>
#include <stdio.h>

class RotateNumberLabel : public QLabel
{
    Q_OBJECT
public:
    explicit RotateNumberLabel(QWidget *parent = 0);
    ~RotateNumberLabel();

    int number(void){
        return nextNumber;
    }
signals:

public slots:
    void setSpeed(int fps){
        timer->setInterval(1000 / fps);
    }
    void setNumber(int n);
    void motionToNumber(int n);
protected slots:
    void onTimer();

protected slots:
    virtual void paintEvent(QPaintEvent *ev);

protected:
    QImage bgPic;
    QImage underPic[2];
    QImage upperPic[2];
    QTimer *timer;
    int currentIndex;
    int currentNumber;
    int nextNumber;
    bool motion;

protected:
    void reloadPicture(void);
};




#endif // ROTATENUMBERLABLE_H

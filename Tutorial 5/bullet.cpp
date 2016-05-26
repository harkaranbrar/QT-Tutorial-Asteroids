#include "bullet.h"
#include <QGraphicsScene>
#include <QTimer>
#include <QDebug>

Bullet::Bullet()
{
    //if you like to ude circle bullet use this
    //setRect(10,10,10,10);

            setRect(0,0,2,10);
            QTimer * timer = new QTimer();
            connect(timer,SIGNAL(timeout()),this,SLOT(move()));
            timer->start(50);

}

void Bullet::move()
{
    setPos(x(),y()-10);
    if (pos().y() + rect().height() < 0){
            scene()->removeItem(this);
            delete this;
            qDebug()<<"bullet deleted";
        }

}



#include "player.h"
#include <QDebug>
#include<QGraphicsScene>
Player::Player()
{

}

void Player::keyPressEvent(QKeyEvent *event)
{

    if (event->key()==Qt::Key_Left)
    {
        setPos(x()-10,y());
    }
    else if(event->key()==Qt::Key_Right)
    {
        setPos(x()+10,y());
    }
    else if (event->key()==Qt::Key_Up)
    {
        setPos(x(),y()-10);
    }
    else if(event->key()==Qt::Key_Down)
    {
        setPos(x(),y()+10);
    }
    else if (event->key()== Qt::Key_Space){
           Bullet * bull = new Bullet();
           bull->setPos(x(),y());
           scene()->addItem(bull);
           //qDebug() << "bullet is created";
       }


}

#ifndef BULLET_H
#define BULLET_H

#include <QGraphicsRectItem>

// if you like to use Cicrle bullet just use this code
//#include <QGraphicsEllipseItem>
//class Bullet: public QObject ,public QGraphicsEllipseItem
class Bullet: public QObject ,public QGraphicsRectItem
{
    Q_OBJECT
public:
    Bullet();


public slots:
    void move();
};

#endif // BULLET_H

#ifndef PLAYER_H
#define PLAYER_H
#include <QGraphicsRectItem>
#include <QKeyEvent>
#include <bullet.h>

class Player:public QGraphicsRectItem
{

public:
    Player();
   void keyPressEvent(QKeyEvent * event);


};

#endif // PLAYER_H

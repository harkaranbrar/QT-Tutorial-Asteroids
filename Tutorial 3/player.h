#ifndef PLAYER_H
#define PLAYER_H

#include <QKeyEvent>
#include<QGraphicsRectItem>

class Player:public QObject, public QGraphicsRectItem
{
public:
    Player();
    void keyPressEvent(QKeyEvent *event);
};

#endif // PLAYER_H

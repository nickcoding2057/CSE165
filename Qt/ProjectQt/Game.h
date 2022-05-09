#ifndef GAME_H
#define GAME_H

#include "Score.h"
#include "BulletsLeft.h"
#include "Gun.h"
#include <QGraphicsView>
#include <QWidget>
#include <QGraphicsScene>

class Game: public QGraphicsView{
public:
    Game(QWidget * parent = 0);

    QGraphicsScene * scene;
    Gun * gun;
    Score * score;
    //BulletCount * bulletCount;
    //friend class BulletCount;
    BulletsLeft * bulletsLeft;

};

#endif // GAME_H

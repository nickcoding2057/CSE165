#include "BulletsLeft.h"
#include "Game.h"
#include <QGraphicsTextItem>
#include <QFont>

//extern Game * game;

BulletsLeft::BulletsLeft(/*QGraphicsItem* parent*/){
    num = 20;//game->gun->bulletNum;
    setPlainText(QString("Bullets: " + QString::number(num)));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times", 16));
    setPos(550, 650);
}

void BulletsLeft::increase(int num){
    this->num += num;
    setPlainText(QString("Bullets: " + QString::number(this->num)));
}

void BulletsLeft::decrease(int num){
    this->num -= num;
    setPlainText(QString("Bullets: " + QString::number(this->num)));
}

#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h>
#include "BirdTypes.h"
#include "Game.h"

extern Game * game;

defaultBird::defaultBird(){
    int random_number = rand() % 300;

    //draw the rect
    setRect(0,0,100,70);
    setPos(850, random_number);

    pen.setBrush(Qt::NoBrush);
    setPen(pen);

    setBrush(Qt::black);


    //connect
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer ->start(50);
}

void defaultBird::hit(){
    game->score->increase();
    game->gun->bulletNum++;
    game->bulletsLeft->increase();
}

void defaultBird::move(){
    setPos(x()-8,y());
    if(pos().x() < -100){
        scene()->removeItem(this);
        delete this;
        //qDebug() << "deleted Bird \n";
    }
}



sacredBird::sacredBird(){
    int random_number = rand() % 300;

    //draw the rect
    setRect(0,0,100,70);
    setPos(850, random_number);

    pen.setBrush(Qt::NoBrush);
    setPen(pen);

    setBrush(Qt::darkRed);


    //connect
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer ->start(50);
}

void sacredBird::hit(){
    game->score->increase(-1);
    game->gun->bulletNum -= 2;
    game->bulletsLeft->decrease(2);
}

void sacredBird::move(){
    setPos(x()-6,y());
    if(pos().x() < -100){
        scene()->removeItem(this);
        delete this;
        //qDebug() << "deleted Bird \n";
    }
}


bonusBird::bonusBird(){
    int random_number = rand() % 300;

    //draw the rect
    setRect(0,0,90,70);
    setPos(850, random_number);

    pen.setBrush(Qt::NoBrush);
    setPen(pen);

    setBrush(Qt::cyan);


    //connect
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer ->start(50);
}

void bonusBird::hit(){
    game->score->increase(5);
    game->gun->bulletNum += 3;
    game->bulletsLeft->increase(3);
}

void bonusBird::move(){
    setPos(x()-10,y());
    if(pos().x() < -100){
        scene()->removeItem(this);
        delete this;
        //qDebug() << "deleted Bird \n";
    }
}



goldenBird::goldenBird(){
    int random_number = rand() % 300;

    //draw the rect
    setRect(0,0,50,40);
    setPos(850, random_number);

    pen.setBrush(Qt::NoBrush);
    setPen(pen);

    setBrush(Qt::yellow);


    //connect
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer ->start(50);
}

void goldenBird::hit(){
    game->score->increase(10);
    game->gun->bulletNum += 10;
    game->bulletsLeft->increase(10);
}

void goldenBird::move(){
    setPos(x()-20,y());
    if(pos().x() < -100){
        scene()->removeItem(this);
        delete this;
        //qDebug() << "deleted Bird \n";
    }
}

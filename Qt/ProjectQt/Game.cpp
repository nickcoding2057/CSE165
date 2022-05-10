#include "Game.h"
#include "bird.h"
#include "BulletsLeft.h"
#include <QTimer>
#include <QGraphicsTextItem>
#include <QPalette>
#include <QFont>
#include <QImage>
extern Game * game;
void restart(){
    game->gun->bulletNum = 20;

}

Game::Game(QWidget *parent){
    scene = new QGraphicsScene ();
    scene->setSceneRect(0, 0, 700, 700);
    setBackgroundBrush(QBrush(QImage(":/images/background4")));
    setScene(scene);
    setFixedSize(700, 700);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    gun = new Gun();
    //gun->setRect(0, 0, 25, -150);
    gun->setPixmap(QPixmap(":/images/gun2.png"));
    gun->setPos(650, 650);
    gun->setRotation(90);
    gun->setScale(-0.1);
    gun->setFlag(QGraphicsItem::ItemIsFocusable);
    gun->setFocus();
    scene->addItem(gun);



    //QGraphicsView * view = new QGraphicsView(scene);


    score = new Score();
    scene->addItem(score);

    bulletsLeft = new BulletsLeft();
    scene->addItem(bulletsLeft);

    //BulletCount* bulletCount = new BulletCount();
    //scene->addItem(bulletCount);

    //bulletCount->bulletsLeft.push_back(scene->addRect(625 - (15 * 0), 650, 5, 25));

//    for(int i = 0; i < gun->bulletNum; i++){
//        bulletCount->bulletsLeft.push_back(scene->addRect(625 - (15 * i), 650, 5, 25));
//    }
//    scene->addRect(625 - (15 * 1), 650, 5, 25);
//    scene->addRect(625 - (15 * 2), 650, 5, 25);
//    scene->addRect(625 - (15 * 3), 650, 5, 25);
//    scene->addRect(625 - (15 * 4), 650, 5, 25);
//    scene->addRect(625 - (15 * 5), 650, 5, 25);
//    scene->addRect(625 - (15 * 6), 650, 5, 25);
//    scene->addRect(625 - (15 * 7), 650, 5, 25);
//    scene->addRect(625 - (15 * 8), 650, 5, 25);
//    scene->addRect(625 - (15 * 9), 650, 5, 25);
//    scene->addRect(625 - (15 * 10), 650, 5, 25);
//    scene->addRect(625 - (15 * 11), 650, 5, 25);
//    scene->addRect(625 - (15 * 12), 650, 5, 25);
//    scene->addRect(625 - (15 * 13), 650, 5, 25);
//    scene->addRect(625 - (15 * 14), 650, 5, 25);
//    scene->addRect(625 - (15 * 15), 650, 5, 25);
//    scene->addRect(625 - (15 * 16), 650, 5, 25);
//    scene->addRect(625 - (15 * 17), 650, 5, 25);
//    scene->addRect(625 - (15 * 18), 650, 5, 25);
//    scene->addRect(625 - (15 * 19), 650, 5, 25);

//    bulletCount = new BulletCount();
//    scene->addItem(bulletCount);


    //spawn birds
    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),gun,SLOT(spawn()));
    timer->start(1000);

    //return a.exec();
    show();

}

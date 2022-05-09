#include "Gun.h"
#include "Bullet.h"
#include <QKeyEvent>
#include <QGraphicsRotation>
#include <QGraphicsScene>
#include <QDebug>
#include <stdlib.h>
#include "Game.h"
#include "bird.h"
#include "BirdTypes.h"

extern Game * game;


void Gun::keyPressEvent(QKeyEvent *event){
    if(event->key() == Qt::Key_Right && angle <= -3){
        //if(angle <= 0){
            angle+= 5;
            setRotation(angle);
            //qDebug() << angle;
        //}
    } else if(event->key() == Qt::Key_Left && angle > -90){
        //if(!(angle < -89)){
            angle-= 5;
            setRotation(angle);
            //qDebug() << angle;
        //}
    } else if(event->key() == Qt::Key_Space && bulletNum > 0){
        Bullet * bullet = new  Bullet(angle);
        scene()->addItem(bullet);
        bullet->setPos(x(), y());
        bulletNum--;
        game->bulletsLeft->decrease();
        //game->bulletCount->Delete();
        qDebug() << bulletNum << "\n";
    }
}

void Gun::spawn(){
    //create a bird
    //int random = rand() % 20;
    //if(random > 15){
        //return;
    //} else{
        Bird * bird;
        int birdSpawn = rand() % 20;
        switch(birdSpawn){
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:

            bird = new defaultBird();
            break;
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
            bird = new sacredBird();
            break;
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
            bird = new bonusBird();
            break;
        case 19:
            bird = new goldenBird();
            break;
        }

        scene()->addItem(bird);
  //  }


}

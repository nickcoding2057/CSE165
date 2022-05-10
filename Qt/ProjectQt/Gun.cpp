#include "Gun.h"
#include "Bullet.h"
#include <QKeyEvent>
#include <QGraphicsRotation>
#include <QGraphicsTextItem>
#include <QGraphicsScene>
#include <QPushButton>
#include <QGraphicsProxyWidget>
#include <QDebug>
#include <stdlib.h>
#include "Game.h"
#include "bird.h"
#include "BirdTypes.h"

extern Game * game;


void Gun::keyPressEvent(QKeyEvent *event){
    if(event->key() == Qt::Key_Right && angle < 90){
        //if(angle <= 0){
            angle+= 5;
            setRotation(angle);
            //qDebug() << angle;
        //}
    } else if(event->key() == Qt::Key_Left && angle > 0){
        //if(!(angle < -89)){
            angle-= 5;
            setRotation(angle);
            //qDebug() << angle;
        //}
    } else if(event->key() == Qt::Key_Space && bulletNum > 0){
        Bullet * bullet = new  Bullet(angle - 90);
        scene()->addItem(bullet);

        float fireRads = ((angle - 90) * M_PI) / 180;
        float xMove = 200 * qSin(fireRads);
        float yMove = 200 * qCos(fireRads);

        bullet->setPos(x() + 20 + xMove, y() - yMove);
        bulletNum--;
        game->bulletsLeft->decrease();
        //game->bulletCount->Delete();
        //qDebug() << bulletNum << "\n";
    }
}

void Gun::spawn(){
    //create a bird
    //int random = rand() % 20;
    //if(random > 15){
        //return;
    //} else{
    if(bulletNum <= 0){
        gameOver->setPlainText(QString("GAME OVER!"));
        gameOver->setPos(250, 300);
        gameOver->setDefaultTextColor(Qt::red);
        gameOver->setFont(QFont("times", 20));
        if(count <= 0){
            scene()->addItem(gameOver);
        }
        count++;
//        QPushButton* replay = new QPushButton();
//        replay->setText(QString("Play Again?"));
//        replay->move(250, 350);
//        //replay->setDefaultTextColor(Qt::red);
//        replay->setFont(QFont("times", 20));
//        button = scene()->addWidget(replay);
//        QObject::connect(replay,SIGNAL(clicked),this,SLOT(restart()));
        //replay->show();

        return;
    }else {
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
            bird = new defaultBird();
            break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
            bird = new sacredBird();
            break;
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
            bird = new bonusBird();
            break;
        case 18:
        case 19:
            bird = new goldenBird();
            break;
        }


        scene()->addItem(bird);
    }
  //  }
}

//void Gun::restart(){
//    bulletNum = 20;
//    game->score->score = 0;
//    scene()->removeItem(button/*->graphicsProxyWidget()*/);
//    scene()->removeItem(gameOver/*->graphicsProxyWidget()*/);
//}

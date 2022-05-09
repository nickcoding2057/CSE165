#include "Gun.h"
#include "Bullet.h"
#include <QKeyEvent>
#include <QGraphicsRotation>
#include <QGraphicsScene>
#include <QDebug>
#include "Bird.h"


void Gun::keyPressEvent(QKeyEvent *event){
    if(event->key() == Qt::Key_Right && angle <= -3){
        //if(angle <= 0){
            angle+= 5;
            setRotation(angle);
            qDebug() << angle;
        //}
    } else if(event->key() == Qt::Key_Left && angle > -90){
        //if(!(angle < -89)){
            angle-= 5;
            setRotation(angle);
            qDebug() << angle;
        //}
    } else if(event->key() == Qt::Key_Space){
        Bullet * bullet = new  Bullet(angle);
        scene()->addItem(bullet);
        bullet->setPos(x(), y());
    }
}

void Gun::spawn(){
    //create a bird
    Bird * bird = new Bird();
    scene()->addItem(bird);

}

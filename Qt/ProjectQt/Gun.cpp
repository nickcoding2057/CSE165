#include "Gun.h"
#include <QKeyEvent>
#include <QGraphicsRotation>
#include <QDebug>


void Gun::keyPressEvent(QKeyEvent *event){
    if(event->key() == Qt::Key_Right && angle < 0){
        //if(angle <= 0){
            angle+= 2;
            setRotation(angle);
            qDebug() << angle;
        //}
    } else if(event->key() == Qt::Key_Left && angle > -90){
        //if(!(angle < -89)){
            angle-= 2;
            setRotation(angle);
            qDebug() << angle;
        //}
    }
}

#include "Gun.h"
#include <QKeyEvent>
#include <QGraphicsRotation>
#include <QDebug>


void Gun::keyPressEvent(QKeyEvent *event){
    if(event->key() == Qt::Key_Left){
        angle++;
        //setPos(x() - 10, y());
        setRotation(angle);
    } else if(event->key() == Qt::Key_Right){
        angle--;
        setRotation(angle);
    }
}

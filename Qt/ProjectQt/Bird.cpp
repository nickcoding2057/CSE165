#include "Bird.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h> //rand() -> really large int

#include <QDebug>
Bird::Bird():QObject(), QGraphicsRectItem()
{
    //set random position
    int random_number = rand() % 700;
    setPos(random_number,0);

    //draw the rect
    setRect(0,0,100,100);

    //connect
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer ->start(50);

}

void birds::move(){
    //move birds down
    setPos(x(),y()-1);
    if(pos().y() + rect().height() < 0){
        scene()->removeItem(this);
        delete this;
    }
}

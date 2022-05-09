#include "bird.h"
#include <QTimer>
#include <QGraphicsScene>
#include <QList>
#include <stdlib.h> //rand() -> really large int

#include <QDebug>
Bird::Bird():QObject(), QGraphicsRectItem()
{
    //set random position
    int random_number = rand() % 300;

    //draw the rect
    setRect(0,0,50,30);
    setPos(850, random_number);


    //connect
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer ->start(50);

}

void Bird::move(){
    //move birds down



    setPos(x()-10,y());
    if(pos().x() < -100){
        scene()->removeItem(this);
        delete this;
        qDebug() << "deleted Bird \n";
    }
}

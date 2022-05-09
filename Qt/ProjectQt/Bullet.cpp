#include <Bullet.h>
#include <QTimer>
#include <QtMath>
#include <QGraphicsScene>
#include <QDebug>
#include "bird.h"

Bullet::Bullet(int fireAngle){
    setRect(0, 0, 5, 25);
    this->fireAngle = fireAngle;
    setRotation(fireAngle);
    QTimer * timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this,SLOT(move()));

    timer->start(50);

    float fireRads = (fireAngle * M_PI) / 180;
    int xMove = 10 * qSin(fireRads);
    int yMove = 10 * qCos(fireRads);
    qDebug() << xMove << " : " << yMove << "\n";
}

void Bullet::move(){

    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i = 0, n = colliding_items.size(); i < n; i++){
        if(typeid(*(colliding_items[i])) == typeid(Bird)){
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);
            delete colliding_items[i];
            delete this;
            return;
        }
    }

    float fireRads = (fireAngle * M_PI) / 180;
    float xMove = 50 * qSin(fireRads);
    float yMove = 50 * qCos(fireRads);

    setPos(x()+xMove, y()-yMove);
    //qDebug() << xMove << " : " << yMove << "\n";

    if(pos().y() + 25 < 0 || pos().x() + 25 < 0){
        scene()->removeItem(this);
        delete this;
        qDebug() << "deleted \n";
    }

}

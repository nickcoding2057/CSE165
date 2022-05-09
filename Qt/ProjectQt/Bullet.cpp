#include <Bullet.h>
#include <QTimer>(
#include <QtMath>
#include <QDebug>

Bullet::Bullet(int fireAngle){
    setRect(0, 0, 10, 50);
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
    float fireRads = (fireAngle * M_PI) / 180;
    float xMove = 20 * qSin(fireRads);
    float yMove = 20 * qCos(fireRads);

    setPos(x()+xMove, y()-yMove);
    //qDebug() << xMove << " : " << yMove << "\n";

}

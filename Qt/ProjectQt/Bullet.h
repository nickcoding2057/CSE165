#ifndef BULLET_H
#define BULLET_H
#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>
#include <QObject>

class Bullet : public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
    int fireAngle;
public:
    Bullet(int fireAngle);
public slots:
    void move();
};

#endif // BULLET_H

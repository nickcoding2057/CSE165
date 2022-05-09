#ifndef GUN_H
#define GUN_H

#include <QGraphicsRectItem>
#include <QObject>
#include "BulletCount.h"


class Gun: public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    void keyPressEvent(QKeyEvent * event);
    int bulletNum = 20;
    int angle = 0;
    friend class BulletCount;
    //transformOrigin: Gun.Center;
public slots:
    void spawn();
};

#endif // GUN_H

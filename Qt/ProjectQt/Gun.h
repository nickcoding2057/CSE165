#ifndef GUN_H
#define GUN_H

#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>
#include <QGraphicsProxyWidget>
#include <QObject>
#include <QPushButton>
#include "BulletCount.h"


class Gun: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    void keyPressEvent(QKeyEvent * event);
    int bulletNum = 20;
    int angle = 90;
    QGraphicsTextItem* gameOver = new QGraphicsTextItem();
    //QPushButton* replay = new QPushButton();
    //QGraphicsProxyWidget *text = new QGraphicsProxyWidget;
    //QGraphicsProxyWidget *button = new QGraphicsProxyWidget;
    friend class BulletCount;
    //transformOrigin: Gun.Center;
public slots:
    void spawn();
   // void restart();
};

#endif // GUN_H

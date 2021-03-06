#ifndef BIRD_H
#define BIRD_H

#include <QGraphicsRectItem>
#include <QGraphicsPixmapItem>
#include <QObject>

class Bird: public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Bird();
    virtual void hit() { };
public slots:
    virtual void move();
};

#endif // BIRD_H

#ifndef BIRD_H
#define BIRD_H

#include <QGraphicsRectItem>
#include <QObject>

class Bird: public QObject, public QGraphicsRectItem{
    Q_OBJECT
public:
    Bird();
public slots:
    void move();
};

#endif // BIRD_H

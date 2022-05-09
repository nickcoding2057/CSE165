#ifndef BIRDTYPES_H
#define BIRDTYPES_H
#include "bird.h"
#include <QGraphicsRectItem>
#include <QGraphicsView>

class defaultBird : public Bird{
    QPen pen;
public:
    defaultBird();
    void hit();
public slots:
    void move();
};

class sacredBird : public Bird{
    QPen pen;
public:
    sacredBird();
    void hit();
public slots:
    void move();
};

class bonusBird : public Bird{
    QPen pen;
public:
    bonusBird();
    void hit();
public slots:
    void move();
};

class goldenBird : public Bird{
    QPen pen;
public:
    goldenBird();
    void hit();
public slots:
    void move();
};

#endif // BIRDTYPES_H

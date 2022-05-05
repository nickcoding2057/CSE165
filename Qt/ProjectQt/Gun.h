#ifndef GUN_H
#define GUN_H

#include <QGraphicsRectItem>

class Gun: public QGraphicsRectItem{
public:
    void keyPressEvent(QKeyEvent * event);
    int angle = 0;
};

#endif // GUN_H

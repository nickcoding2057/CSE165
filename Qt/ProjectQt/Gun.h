#ifndef GUN_H
#define GUN_H

#include <QGraphicsRectItem>

class Gun: public QGraphicsRectItem{
public:
    void keyPressEvent(QKeyEvent * event);
};

#endif // GUN_H

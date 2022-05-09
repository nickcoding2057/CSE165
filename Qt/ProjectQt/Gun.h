#ifndef GUN_H
#define GUN_H

#include <QGraphicsRectItem>
#include <QObject>


class Gun: public QGraphicsRectItem{
    Q_OBJECT
public:
    void keyPressEvent(QKeyEvent * event);
    int angle = 0;
    //transformOrigin: Gun.Center;
public slots:
    void spawn();
};

#endif // GUN_H

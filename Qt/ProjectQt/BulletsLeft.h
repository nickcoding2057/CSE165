#ifndef BULLETSLEFT_H
#define BULLETSLEFT_H
#include <QGraphicsTextItem>
#include <QGraphicsItem>



class BulletsLeft : public QGraphicsTextItem{
public:
    BulletsLeft(/*QGraphicsItem * parent = 0*/);
    void increase(int num = 1);
    void decrease(int num = 1);
    int num;
};

#endif // BULLETSLEFT_H

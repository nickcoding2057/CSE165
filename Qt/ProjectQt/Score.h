#ifndef SCORE_H
#define SCORE_H

#include <QGraphicsTextItem>

class Score: public QGraphicsTextItem
{
public:
    Score(QGraphicsItem * parent = 0);
    void increase(int num = 1);
    int getScore();
    int score;
};

#endif // SCORE_H

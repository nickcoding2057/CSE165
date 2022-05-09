#include "Score.h"
#include <QGraphicsTextItem>
#include <QFont>

Score::Score(QGraphicsItem *parent) : QGraphicsTextItem(parent){
    score = 0;
    setPlainText(QString("Score: " + QString::number(score)));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times", 16));
}

void Score::increase(int num){
    score += num;
    setPlainText(QString("Score: " + QString::number(score)));
}

int Score::getScore(){
    return score;
}

//#include "BulletCount.h"
//#include "Game.h"
//#include <QDebug>

////extern Game * game;

////BulletCount::BulletCount(){
////    for(int i = 0; i < 5/*game->gun->bulletNum*/; i++){
////        QGraphicsRectItem* tempBullet;
////        tempBullet = game->scene->addRect(625 - (15 * i), 650, 5, 25);
////        bulletsLeft.push_back(tempBullet);
////    }

////    QGraphicsRectItem* temp = new QGraphicsRectItem(400, 400, 5, 200);
////    scene()->addItem(temp);
//    //qDebug() << temp->isVisible();
////}

//void BulletCount::Delete(int num){
//    //for(int i = 0; i < num; i++){
//      //  int last = bulletsLeft.size() - 1;
//        //scene()->removeItem(bulletsLeft[last]);
//        //bulletsLeft.pop_back();
//    //}
//    int last = bulletsLeft.size() - 1;
//    scene()->removeItem(bulletsLeft[last]);
//    bulletsLeft.pop_back();
//}

//void BulletCount::Add(int num){
//    for(int i = 0; i < num; i++){
//        bulletsLeft.push_back(scene()->addRect(625 - (15 * bulletsLeft.size()), 650, 5, 25));
//    }
//}

#include "mainwindow.h"
#include "Gun.h"

#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    QGraphicsScene * scene = new QGraphicsScene ();

    Gun * gun = new Gun();
    gun->setRect(0, 0, 25, -150);

    scene->addItem(gun);

    //gun->setTransformOriginPoint(QPoint(0, 0));
    //gun->setRotation(5);

    gun->setFlag(QGraphicsItem::ItemIsFocusable);
    gun->setFocus();



    QGraphicsView * view = new QGraphicsView(scene);

    view->setFixedSize(700, 700);

    gun->setPos(600, 500);

    //view->setSceneRect(0, 0, 10, 100);
    //view->fitInView(0, 0, 10, 100, Qt::KeepAspectRatio);

    view->show();

    return a.exec();
}

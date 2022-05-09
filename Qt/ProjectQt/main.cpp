#include "mainwindow.h"
#include "Gun.h"
#include "Game.h"

#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QTimer>
#include <QObject>

Game * game;

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);

    game = new Game();
    game->show();

    return a.exec();
}

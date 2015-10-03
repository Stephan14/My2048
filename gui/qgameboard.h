#ifndef QGAMEBOARD_H
#define QGAMEBOARD_H

#include <QObject>
#include <QVector>
#include <QLabel>
#include <QGridLayout>
#include <iostream>

#include "gui/qtile.h"
#include "core/observer.h"
#include "core/board.h"


using namespace std;

class  Game;

class QGameBoard : public QWidget, public Observer
{
    Q_OBJECT
public:

    explicit QGameBoard(Board *board);
    virtual ~QGameBoard();

    void notify();

private:
    QVector< QVector<QTile*> > guiBoard;

    QGridLayout *boardLayout;

    void drawBoard();

    Board *board;
signals:

public slots:
    void restartGame();
};

#endif // QGAMEBOARD_H

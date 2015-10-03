#ifndef GAME_H
#define GAME_H

#include "core/subject.h"
#include "core/board.h"
#include "core/tile.h"
#include "gui/qwinwindow.h"
#include "gui/qlostwindow.h"

#define WINNING_VALUE 2048

#include <QDebug>

class Board;

class Game:public Subject, public QObject
{
public:

    Game(int dimension);
    ~Game();
    //void restart();
    Board* getBoard() const { return board; }
    int& getScore() { return score; }
    bool isWon() const;
    void move(Direction dir);
private:
    Board *board;
    int score;
    QWinWindow winWindow;
    QLostWindow lostWindow;

public slots:
    void restart();
};

#endif // GAME_H

#include "gui/qgameboard.h"

#include <QDebug>
#include <QKeyEvent>

QGameBoard::QGameBoard(Board *board)
{
   boardLayout = NULL;
   this->board = board;

    //setStyleSheet("QGameBoard { background-color: #cc0000 }");
    guiBoard.resize(board->getDimension());
    for(int i = 0; i < board->getDimension(); i++)
        guiBoard[i].resize(board->getDimension());

    for(int i = 0; i < board->getDimension(); i++){
        for(int j = 0; j < board->getDimension(); j++){
            delete guiBoard[i][j];
             guiBoard[i][j] = NULL;
        }
    }
    drawBoard();

    setStyleSheet("QGameBoard { background-color: #cc0000 }");
}

void QGameBoard::drawBoard()
{
    delete boardLayout;
    boardLayout = new QGridLayout;

    for(int i = 0; i < board->getDimension(); i++){
        for(int j = 0;j < board->getDimension(); j++){
            delete guiBoard[i][j];
            guiBoard[i][j] = new QTile(board->getTile(i,j));
            boardLayout->addWidget(guiBoard[i][j],i,j);
            guiBoard[i][j]->draw();
        }
    }

    setLayout(boardLayout);
}


QGameBoard::~QGameBoard()
{
    //delete board;不能析构两次以上
}

void QGameBoard::notify()
{
    drawBoard();
}

void QGameBoard::restartGame()
{
    board->reset();
    drawBoard();


}


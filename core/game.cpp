#include "core/game.h"


Game::Game(int dimension)
{
    score = 0;
    board = new Board(dimension);
    restart();
}

Game::~Game()
{

    delete board;
}

void Game::restart()
{
       score = 0;
       board->reset();
}

void Game::move(Direction dir)
{
    board->move(dir);

    if(board->getTileCollisionLastRound()){
        score += board->getPointsScoredLastRound();
    }

    if(isWon()){
        winWindow.show();
    }

    if(!board->movePossible()){
        lostWindow.show();
    }

    notifyObservers();
}

bool Game::isWon() const
{
    for(int i = 0; i < board->getDimension(); i++)
        for(int j = 0; j < board->getDimension(); j++)
        {
            if(board->getTile(i, j) != NULL && board->getTile(i, j)->getValue() == WINNING_VALUE)
                return true;
        }

    return false;
}

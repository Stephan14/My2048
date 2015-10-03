#ifndef BOARD_H
#define BOARD_H

#include "core/subject.h"

#include <QVector>
#include <QString>

#include <QDebug>

class  Tile;

enum Direction{ UP, DOWN, LEFT, RIGHT };

class Board//: public Subject
{
public:

    Board(int dimension);
    Board(const Board& other);
    ~Board();
    //重置为开始状态
    void reset();
    //判断面板是否放满卡片
    bool full() const;
    int getDimension() const { return dimension; }
    int getPointsScoredLastRound() const { return pointsScoredLastRound; }
    bool getTileCollisionLastRound() const { return tileCollisionLastRound; }
    Tile* getTile(int i,int j);
    //判断是否可以移动
    bool movePossible() const;
    void move(Direction dir);
private:

    QVector<QVector<Tile* > > board;
    //维度
    int dimension;
    int pointsScoredLastRound;
    bool tileCollisionLastRound;
    //创建一个空的面板
    void init();
    //产生一个坐标位置
    QVector<int> freePosition();
    //判断是否在界内
    bool inBound(int i,int j) const;
    //判断是否面板是否改变
    bool isChanged(Board &other) const;
    //为下一次移动做准备
    void prepareForNextMove();
    //改变状态
    void handleCollision(int i, int j);
    void moveVerticality(int i, int j, Direction dir);
    void moveHorizontally(int i, int j, Direction dir);
};

#endif // BOARD_H

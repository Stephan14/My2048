#ifndef TILE_H
#define TILE_H

#define EXP_MULTIPLIER 2

class Tile
{
public:
    //构造函数
    Tile(){ value = 2; upgratedThisMove = false;}
    Tile(int value){ this->value = value; }
    //拷贝构造函数
    Tile(const Tile& other){ value = other.value; }

    //设置和获得upgratedThisMove
    void setUpgratedThisMove(bool upgrated){ upgratedThisMove = upgrated;}
    bool getUpgratedThisMove()const{ return upgratedThisMove;}

    //获取和设置卡片值
    void upgrade(){ this->value *= EXP_MULTIPLIER; }
    int getValue()const {return value;}
private:

    int value;
    bool upgratedThisMove;
};

#endif // TILE_H

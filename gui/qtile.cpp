#include "gui/qtile.h"
#include "core/tile.h"

#include <QGraphicsDropShadowEffect>
#include <QDebug>

QTile::QTile(){
    tile = NULL;
}

QTile::QTile(int value)
{
    tile = new Tile(value);
    setAlignment(Qt::AlignCenter);
}

QTile::QTile(Tile *tile)
{
    this->tile = tile;
    setAlignment(Qt::AlignCenter);
}

QTile::QTile(const QTile &other){
    this->tile = other.tile;
    setAlignment(Qt::AlignCenter);
}

QTile::~QTile(){
   // delete tile;
}

int QTile::getTileValue()
{
    return tile->getValue();
}
void QTile::draw(){
    if(tile == NULL){//注意没有卡片的情况
        setText("");
        setStyleSheet("QTile { background-color: #DCDCDC; border-radius: 7px; }");
    }else{
        setText(QString::number(tile->getValue()));
        //qDebug()<<"tile->getValue()"<<tile->getValue()<<endl;
        switch(tile->getValue()){
        case 2:{
            setStyleSheet("QTile { background-color: #FFFAF0; border-radius: 7px; font-size: 20px; color: rgb(0,0,0)}");
            break;
        }
        case 4:{
            setStyleSheet("QTile { background-color: #FFDEAD; border-radius: 7px; font-size: 20px; color: rgb(0,0,0)}");
            break;
        }
        case 8:{
            setStyleSheet("QTile { background-color: #F4A460; border-radius: 7px; font-size: 20px; color: rgb(0,0,0)}");
            break;
        }
        case 16:{
            setStyleSheet("QTile { background-color: #FFA500; border-radius: 7px; font-size: 20px; color: rgb(255,255,255)}");
            break;
        }
        case 32:{
            setStyleSheet("QTile { background-color: #FF6347; border-radius: 7px; font-size: 20px; color: rgb(255,255,255)}");
            break;
        }
        case 64:{
            setStyleSheet("QTile { background-color: #FF0000; border-radius: 7px; font-size: 20px; color: rgb(255,255,255)}");
            break;
        }
        case 128:{
            setStyleSheet("QTile { background-color: #FFE7BA; border-radius: 7px; font-size: 20px; color: rgb(255,255,255)}");
            break;
        }
        case 256:{
            QGraphicsDropShadowEffect *dse = new QGraphicsDropShadowEffect;
            dse->setColor(Qt::yellow);
            dse->setBlurRadius(20);
            dse->setOffset(-1);
            setGraphicsEffect(dse);
            setStyleSheet("QTile { background-color: #F5DEB3; border-radius: 7px; font-size: 20px; color: rgb(255,255,255)}");
            break;
        }
        case 512:{
            QGraphicsDropShadowEffect *dse = new QGraphicsDropShadowEffect;
            dse->setBlurRadius(40);
            dse->setOffset(-1);
            setGraphicsEffect(dse);
            setStyleSheet("QTile { background-color: #F5DEB3; border-radius: 7px; font-size: 20px; color: rgb(255,255,255)}");
            break;
        }
        case 1024:{
            QGraphicsDropShadowEffect *dse = new QGraphicsDropShadowEffect;
            dse->setBlurRadius(60);
            dse->setOffset(-1);
            setGraphicsEffect(dse);
            setStyleSheet("QTile { background-color: #F5DEB3; border-radius: 7px; font-size: 20px; color: rgb(255,255,255)}");
            break;
        }
        case 2048:{
            QGraphicsDropShadowEffect *dse = new QGraphicsDropShadowEffect;
            dse->setBlurRadius(80);
            dse->setOffset(-1);
            setGraphicsEffect(dse);
            setStyleSheet("QTile { background-color: #F5DEB3; border-radius: 7px; font-size: 20px; color: rgb(255,255,255)}");
            break;
        }
        default:{
            setStyleSheet("QTile { background: rgb(238,228,218); color: rgb(119,110,101); font: bold; border-radius: 10px; font: 40pt; }");
        }
        }

    }

}

#ifndef QTILE_H
#define QTILE_H



#include <QLabel>

class Tile;

class QTile : public QLabel
{
    Q_OBJECT
public:
    QTile();
    QTile(int value);
    QTile(Tile* tile);
    QTile(const QTile &other);
    ~QTile();
    void draw();
    int getTileValue();
private:
    Tile *tile;

signals:

public slots:
};

#endif // QTILE_H

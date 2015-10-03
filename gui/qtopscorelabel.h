#ifndef QTOPSCORELABEL_H
#define QTOPSCORELABEL_H

#include <QLabel>
#include <fstream>
#include "core/observer.h"

class QTopScoreLabel : public QLabel, public Observer
{
    Q_OBJECT
public:
    explicit QTopScoreLabel(int &currentScore,QWidget *parent = 0);
    ~QTopScoreLabel();

    void notify();
signals:

public slots:
private:
    int topScore;
    int &currentScore;

    void updateScore();
};

#endif // QTOPSCORELABEL_H

#ifndef QSCORELABLE_H
#define QSCORELABLE_H

#include <QWidget>
#include <QLabel>
#include "core/observer.h"
class QScoreLable:public QLabel, public Observer
{
public:
    QScoreLable(int &score);
    ~QScoreLable();
    void notify();

private:
    int &currentScore;
};

#endif // QSCORELABLE_H

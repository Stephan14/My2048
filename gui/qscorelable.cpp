#include "gui/qscorelable.h"


QScoreLable::QScoreLable(int &score):currentScore(score)
{
    setText("\n分数:\n\n0");
}

QScoreLable::~QScoreLable()
{

}

void QScoreLable::notify()
{
    setText(QString("\n分数:\n\n%1").arg(currentScore));
}

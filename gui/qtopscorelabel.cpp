#include "gui/qtopscorelabel.h"
#include <QDebug>
using namespace std;

QTopScoreLabel::QTopScoreLabel(int &currentScore,QWidget *parent) : QLabel(parent), currentScore(currentScore)
{
    //读文本文件
    fstream file("/Users/md101/Documents/code/My2048/topscore.txt", ios::in);
    if(!file){
        qDebug()<<"打开文件失败"<<endl;
        topScore = 0;
    }else{
        file>>topScore;
        file.close();
    }
    setText(QString("\n最高成绩:\n\n%1").arg(topScore));
}


void QTopScoreLabel::updateScore()
{
    if(currentScore > topScore){
        topScore = currentScore;
        //写文本文件
        fstream file("/Users/md101/Documents/code/My2048/topscore.txt", ios::out);
        if(!file){
            qDebug()<<"打开文件失败"<<endl;
        }
        file<<topScore;
        file.close();
    }
}

void QTopScoreLabel::notify()
{
    updateScore();
    setText(QString("\n最高成绩:\n\n%1").arg(topScore));
}

QTopScoreLabel::~QTopScoreLabel()
{

}

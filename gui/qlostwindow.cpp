#include "gui/qlostwindow.h"



QLostWindow::~QLostWindow()
{

}

QLostWindow::QLostWindow(QWidget *parent) : QWidget(parent)
{
    setStyleSheet("QWinWindow { background: rgb(237,224,200); }");
    setFixedSize(350,205);

    QVBoxLayout *mainLayout = new QVBoxLayout();
    setLayout(mainLayout);

    QLabel *infLable = new QLabel("You lost!\n Please try again",this);
    infLable->setStyleSheet("QLabel { color: rgb(119,110,101); font: 20pt; font: bold;} ");
    mainLayout->insertWidget(0, infLable, 0, Qt::AlignCenter);

    button = new QPushButton("try again",this);
    button->setStyleSheet("QPushButton { color: rgb(119,110,101); font: 20pt; font: bold;}");
    mainLayout->insertWidget(1, button, 0, Qt::AlignCenter);

}


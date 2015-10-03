#include "gui/qwinwindow.h"

QWinWindow::QWinWindow(QWidget *parent) : QWidget(parent)
{
    setStyleSheet("QWinWindow { background: rgb(237,224,200); }");
    setFixedSize(350,205);

    QVBoxLayout *mainLayout = new QVBoxLayout();
    setLayout(mainLayout);

    QLabel *infLable = new QLabel("You hit 2048\nCongratulations!",this);
    infLable->setStyleSheet("QLabel { color: rgb(119,110,101); font: 20pt; font: bold;} ");
    mainLayout->insertWidget(0, infLable, 0, Qt::AlignCenter);

    QPushButton *button = new QPushButton("confirm",this);
    button->setStyleSheet("QPushButton { color: rgb(119,110,101); font: 20pt; font: bold;}");
    mainLayout->insertWidget(1, button, 0, Qt::AlignCenter);
    connect(button, SIGNAL(clicked()), this, SLOT(close()));
}


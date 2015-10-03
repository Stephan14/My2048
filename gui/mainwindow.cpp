#include "gui/mainwindow.h"
//#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
    /*ui(new Ui::MainWindow)*/
{
    //ui->setupUi(this);
    //先创建业务逻辑类
    game = new Game(4);
    //game->registerObserver(gameboard);
    resize(350,480);

    nameLabel = new QLabel(this);
    scoresLabel = new QScoreLable(game->getScore());
    topscoresLabel = new QTopScoreLabel(game->getScore(),this);
    //创建一个widget部件作为窗口的中央部件
    widget = new QWidget;
    setCentralWidget(widget);
    mainLayout = new QVBoxLayout;
    widget->setLayout(mainLayout);
    //创建标签的水平布局
    infLabelLayout = new QHBoxLayout;
    mainLayout->addLayout(infLabelLayout);

    //设置标签的内容居中，大小和背景等
    nameLabel->setAlignment(Qt::AlignCenter);
    nameLabel->setText("2048");
    nameLabel->setFixedSize(90,110);
    nameLabel->setStyleSheet("QLabel { background-color: #f1c232; border-radius: 10px; font-size: 30px; font-weight: bold; color: rgb(255,255,255)}");
    infLabelLayout->addWidget(nameLabel);

    scoresLabel->setAlignment(Qt::AlignTop | Qt::AlignHCenter);
    scoresLabel->setFixedSize(90,110);
    scoresLabel->setStyleSheet("QLabel { background-color: #8B7E66; border-radius: 10px; font-size: 20px; color: rgb(255,255,255)}");
    game->registerObserver(scoresLabel);
    infLabelLayout->addWidget(scoresLabel);

    topscoresLabel->setAlignment(Qt::AlignTop | Qt::AlignHCenter);
    topscoresLabel->setFixedSize(90,110);
    topscoresLabel->setStyleSheet("QLabel { background-color: #8B7E66; border-radius: 10px; font-size: 20px; color: rgb(255,255,255) }");
    game->registerObserver(topscoresLabel);
    infLabelLayout->addWidget(topscoresLabel);

    gameboard = new QGameBoard(game->getBoard());
    mainLayout->addWidget(gameboard);
    game->registerObserver(gameboard);
}

MainWindow::~MainWindow()
{
    //delete ui;
    delete game;
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_Up:
        game->move(UP);
        break;
    case Qt::Key_Left:
        game->move(LEFT);
        break;
    case Qt::Key_Right:
        game->move(RIGHT);
        break;
    case Qt::Key_Down:
        game->move(DOWN);
        break;
    }

}

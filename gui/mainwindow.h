#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QKeyEvent>

#include "gui/qgameboard.h"
#include "gui/qscorelable.h"
#include "gui/qtopscorelabel.h"
#include "core/game.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void keyPressEvent(QKeyEvent *event);
private:
    //Ui::MainWindow *ui;
    QLabel *nameLabel;
    QScoreLable *scoresLabel;
    QTopScoreLabel *topscoresLabel;

    QWidget *widget;
    QHBoxLayout *infLabelLayout;
    QVBoxLayout *mainLayout;
    QGameBoard *gameboard;
    Game *game;
};

#endif // MAINWINDOW_H

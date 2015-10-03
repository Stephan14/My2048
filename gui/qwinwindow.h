#ifndef QWINWINDOW_H
#define QWINWINDOW_H

#include <QWidget>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>

class QWinWindow : public QWidget
{
    Q_OBJECT
public:
    explicit QWinWindow(QWidget *parent = 0);

signals:

public slots:
};

#endif // QWINWINDOW_H

#ifndef QLOSTWINDOW_H
#define QLOSTWINDOW_H

#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>


class QLostWindow : public QWidget
{
    Q_OBJECT
public:
    explicit QLostWindow(QWidget *parent = 0);
    virtual ~QLostWindow();
    QPushButton *getButton() const {return button; }
signals:

public slots:

private:
    QPushButton *button;
};

#endif // QLOSTWINDOW_H

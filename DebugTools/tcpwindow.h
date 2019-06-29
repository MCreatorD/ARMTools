#ifndef TCPWINDOW_H
#define TCPWINDOW_H

#include <QWidget>

namespace Ui {
class tcpwindow;
}

class tcpwindow : public QWidget
{
    Q_OBJECT

public:
    explicit tcpwindow(QWidget *parent = 0);
    ~tcpwindow();

private:
    Ui::tcpwindow *ui;
};

#endif // TCPWINDOW_H

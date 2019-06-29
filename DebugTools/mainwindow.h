#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "serialwindow.h"
#include <QMainWindow>
#include <QFile>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public:
    void find_theme();
private slots:
    void actionsSlot();

private:
    //1.ui界面
    Ui::MainWindow *ui;
    serialwindow serialwindow_m;
};

#endif // MAINWINDOW_H

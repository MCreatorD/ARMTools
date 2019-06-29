#include "mainwindow.h"
#include <QApplication>
#include <QTextCodec>
#include "loadqss.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTextCodec *codec = QTextCodec::codecForName("UTF-8");//情况1
    QTextCodec::setCodecForLocale(codec);

    LoadQss::loadQss(":/qss/styleSheet.qss");

    MainWindow w;
    w.show();

    return a.exec();
}

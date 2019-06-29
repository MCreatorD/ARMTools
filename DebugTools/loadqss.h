#ifndef LOADQSS_H
#define LOADQSS_H

#include <QFile>
#include <QApplication>

class LoadQss
{
public:
    //加载qss声明为静态函数
    static void loadQss(const QString &path)
    {
        QFile qss(path);
        qss.open(QFile::ReadOnly);
        //A global pointer referring to the unique application object.
        qApp->setStyleSheet(qss.readAll());
        qss.close();
    }
};

#endif // LOADQSS_H

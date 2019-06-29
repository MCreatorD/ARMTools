#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "loadqss.h"
#include <QFileInfo>
#include <QApplication>
#include "QList"
#include "QFileInfoList"
#include "QDir"
#include "QDebug"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //添加串口单元ui界面
    ui->verticalLayout_serial->addWidget(&serialwindow_m);
    //TCP单元ui界面
    //usb单元ui界面
    find_theme();
    //LoadQss::loadQss(":/qss/qss/white.qss");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::find_theme()
{
    QFileInfoList InfoList = QDir(qApp->applicationDirPath()+"/qss").entryInfoList();//获取当前目录所有文件
    //遍历
    foreach(QFileInfo fileInfo, InfoList)
    {
        if(!fileInfo.isFile()) continue;//不是文件继续，只用于加速，可不加
        //后缀不区分大小写，需要区分直接用“==”
        if(0==fileInfo.suffix().compare("qss"))
        {
            //打印出查询到的文件
            qDebug()<<"file name:"<<fileInfo.fileName();
            //添加子菜单和槽函数
            ui->theme->addAction(fileInfo.fileName(),this,SLOT(actionsSlot()));
        }
    }
    //qDebug()<<"SuffixInfoList:"<<SuffixInfoList;
}

//切换主题子菜单槽函数
void MainWindow::actionsSlot()
{
    //获取出发此槽函数的signal 匹配 对应服务函数
    QAction *action = (QAction*)sender();
    QString actionText = action->text();
    qDebug()<<actionText<<"triggerred!"<<endl;
    QString loadQsspath = qApp->applicationDirPath()+"/qss/"  + actionText;
    qDebug()<<"loadQsspath!"<<loadQsspath<<endl;
    LoadQss::loadQss(loadQsspath);
}


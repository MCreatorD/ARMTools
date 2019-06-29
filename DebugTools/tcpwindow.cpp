#include "tcpwindow.h"
#include "ui_tcpwindow.h"

tcpwindow::tcpwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tcpwindow)
{
    ui->setupUi(this);
}

tcpwindow::~tcpwindow()
{
    delete ui;
}

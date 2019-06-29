#ifndef SERIALWINDOW_H
#define SERIALWINDOW_H

#include <QWidget>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
//#include "tcpwidget.h"
#include <QDebug>
#include <QTime>

namespace Ui {
class serialwindow;
}

class serialwindow : public QWidget
{
    Q_OBJECT

public:
    explicit serialwindow(QWidget *parent = 0);
    ~serialwindow();

public://对于串口读取查找
    void SerialRead_Date();       //读取串口数据
    void Serialfind_port();       //查找可用串口
    void Serialsleep(int msec);      //延时函数
    char SerialConvertHexChar(char ch);
    void SerialStringToHex(QString str, QByteArray &senddata); //字符串转换为十六进制数据0-F
private slots:
    void on_Serial_Open_clicked();

    void on_Serial_send_button_clicked();

    void on_Serial_checkBoxHexS_clicked();

    void on_Serial_checkBoxHexR_clicked();

private:
    Ui::serialwindow *ui;
    QSerialPort *serialwindow_m;
    //tcpwidget *tcpwidget_m;
    bool Serialtextstate_receive;
    bool Serialtextstate_send;
};

#endif // SERIALWINDOW_H

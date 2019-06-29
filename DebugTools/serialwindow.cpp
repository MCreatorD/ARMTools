#include "serialwindow.h"
#include "ui_serialwindow.h"
#include <QMessageBox>
//#include <QString>
serialwindow::serialwindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::serialwindow)
{
    ui->setupUi(this);
    serialwindow_m = new QSerialPort;
    //遍历能打开的串口设备，添加到ui界面的Item列表
    this->Serialfind_port();
    //设置控件不可用
    ui->Serial_send_button->setEnabled(false);
    //打开串口控件可用
    ui->Serial_Open->setText("打开串口");
    Serialtextstate_send = true;
    Serialtextstate_receive = true;
   // tcpwidget_m = new tcpwidget;
}

serialwindow::~serialwindow()
{
    delete ui;
}
#if 1
void serialwindow::SerialRead_Date()
{
    QByteArray buf;
    buf = serialwindow_m->readAll();
    if(!buf.isEmpty())          //将数据显示到文本串口
    {
        if(Serialtextstate_receive == true)   //文本模式
        {
            QString str = ui->Serial_Receive_text_window->toPlainText();
            str+=tr(buf);
            str += "  ";
            ui->Serial_Receive_text_window->clear();
            ui->Serial_Receive_text_window->append(str);
        }
        if(Serialtextstate_receive == false)   //文本模式
        {
            QString str = ui->Serial_Receive_text_window->toPlainText();
            // byteArray 转 16进制
            QByteArray temp = buf.toHex();
            str+=tr(temp);
            str += "  ";
            ui->Serial_Receive_text_window->clear();
            ui->Serial_Receive_text_window->append(str);
        }
    }
    buf.clear();    //清空缓存区
}

//查询可用串口
void serialwindow::Serialfind_port()
{
    //清除列表
    ui->Serial_PortBox->clear();
    //遍历能打开的串口设备，添加到ui界面的Item列表
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        QSerialPort serial;
        serial.setPort(info);   //设置串口
        if(serial.open(QIODevice::ReadWrite))
        {
            ui->Serial_PortBox->addItem( info.portName()+ ":"+info.description());//在comboBox那添加串口号
            serial.close();
        }
    }
}
//延时函数
void serialwindow::Serialsleep( int msec)
{
    QTime dieTime = QTime::currentTime().addMSecs(msec);
    while( QTime::currentTime() < dieTime )
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

char serialwindow::SerialConvertHexChar(char ch)
{
    if ((ch >= '0') && (ch <= '9'))
        return ch - 0x30;
    else if ((ch >= 'A') && (ch <= 'F'))
        return ch - 'A' + 10;
    else if ((ch >= 'a') && (ch <= 'f'))
        return ch - 'a' + 10;
    else return ch -  ch;
}
//字符串转换为十六进制数据0-F
void serialwindow::SerialStringToHex(QString str, QByteArray &senddata)
{
    int hexdata,lowhexdata;
    int hexdatalen = 0;
    int len = str.length();
    senddata.resize(len / 2);
    char lstr,hstr;
    for (int i = 0; i < len; ) {
        hstr = str[i].toLatin1();
        if (hstr == ' ') {
            ++i;
            continue;
        }
        ++i;
        if (i  >= len) break;
        lstr = str[i].toLatin1();
        hexdata = SerialConvertHexChar(hstr);
        lowhexdata = SerialConvertHexChar(lstr);
        if ((hexdata == 16) || (lowhexdata == 16))
            break;
        else
            hexdata = hexdata*16 + lowhexdata;
        ++i;
        senddata[hexdatalen] = (char)hexdata;
        ++hexdatalen;
    }
    senddata.resize(hexdatalen);
}
//打开关闭串口
void serialwindow::on_Serial_Open_clicked()
{
    //qDebug() << "OpenPortName" << ui->Serial_PortBox->text();
    if(ui->Serial_Open->text() == "关闭串口")
    {
        ui->Serial_Label_Open->setStyleSheet("image: url(:/serialstatus/close)");
        ui->Serial_Open->setText("打开串口");
        serialwindow_m->clear();        //清空缓存区
        serialwindow_m->close();        //关闭串口
        return;
    }
    update();
    //sleep(100);      //延时100ms
    //find_port();     //重新查找com
    //初始化串口
    qDebug() << "COMPORTName" <<ui->Serial_PortBox->currentText();
    //源内容："COM1:Virtual Serial Port (Eltima Softwate)"
    qDebug() << "COMPORTName sub" <<ui->Serial_PortBox->currentText().mid(0,4);
    serialwindow_m->setPortName(ui->Serial_PortBox->currentText().mid(0,4));        //设置串口名
    if(serialwindow_m->open(QIODevice::ReadWrite))              //打开串口成功
    {
        ui->Serial_Label_Open->setStyleSheet("image: url(:/serialstatus/open)");
        ui->Serial_Open->setText("关闭串口");
        serialwindow_m->setBaudRate(ui->Serial_BaudRateBox->currentText().toInt());       //设置波特率
        switch(ui->Serial_DataBitBox->currentIndex())                   //设置数据位数
        {
            case 5:serialwindow_m->setDataBits(QSerialPort::Data5);break;
            case 6:serialwindow_m->setDataBits(QSerialPort::Data6);break;
            case 7:serialwindow_m->setDataBits(QSerialPort::Data7);break;
            case 8:serialwindow_m->setDataBits(QSerialPort::Data8);break;
            default: break;
        }
        switch(ui->Serial_CheckBitBox->currentIndex())                   //设置奇偶校验
        {
            case 0: serialwindow_m->setParity(QSerialPort::NoParity);break;
            case 1: serialwindow_m->setParity(QSerialPort::OddParity);break;
            case 2: serialwindow_m->setParity(QSerialPort::EvenParity);break;
            default: break;
        }
        switch(ui->Serial_StopBitBox->currentIndex())                     //设置停止位
        {
            case 1: serialwindow_m->setStopBits(QSerialPort::OneStop);break;
            case 2: serialwindow_m->setStopBits(QSerialPort::TwoStop);break;
            default: break;
        }
        serialwindow_m->setFlowControl(QSerialPort::NoFlowControl);     //设置流控制
        //连接槽函数
        QObject::connect(serialwindow_m, &QSerialPort::readyRead, this, &serialwindow::SerialRead_Date);
        // 设置控件可否使用
        ui->Serial_send_button->setEnabled(true);
        //打开串口控件可用
        ui->Serial_Open->setText("关闭串口");
    }
    else    //打开失败提示
    {
        Serialsleep(100);

        QMessageBox::information(this,tr("Erro"),tr("Open the failure"),QMessageBox::Ok);
    }
}


void serialwindow::on_Serial_send_button_clicked()
{
    if(Serialtextstate_send == true)  //文版模式
    {
        serialwindow_m->write(ui->Serial_send_text_window->toPlainText().toLatin1());
    }

    if(Serialtextstate_send == false)     //16进制
    {
        //获取源数据
        QString dataStr = ui->Serial_send_text_window->toPlainText();
        //如果发送的数据个数为奇数的，则在前面最后落单的字符前添加一个字符0
        if (dataStr.length() % 2){
            dataStr.insert(dataStr.length()-1, '0');
        }
        QByteArray sendData;
        SerialStringToHex(dataStr, sendData);
        serialwindow_m->write(sendData);
        //qDebug("0x%s",sendData);
    }
}

#endif


//发送框文本模式转换
void serialwindow::on_Serial_checkBoxHexS_clicked()
{
    if(ui->Serial_checkBoxHexS->isChecked()==true)
    {
        qDebug()<<"textstate_send:HEX";
        Serialtextstate_send = false;
    }
    else
    {
        qDebug()<<"textstate_send:ASCII";
        Serialtextstate_send = true;
    }
}
//接收框文本模式转换
void serialwindow::on_Serial_checkBoxHexR_clicked()
{
    if(ui->Serial_checkBoxHexR->isChecked()==true)
    {
        Serialtextstate_receive = false;
        qDebug()<<"textstate_recv:HEX";
    }
    else{
        qDebug()<<"textstate_recv:ASCII";
        Serialtextstate_receive = true;
    }
}


//void serialwindow::on_Serial_PortBox_highlighted(const QString &arg1)
//{
//    qDebug() << "a1......"<<endl;
//   //遍历能打开的串口设备，添加到ui界面的Item列表
//   this->Serialfind_port();
//}


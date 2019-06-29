/********************************************************************************
** Form generated from reading UI file 'serialwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALWINDOW_H
#define UI_SERIALWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_serialwindow
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_9;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_14;
    QTextBrowser *Serial_Receive_text_window;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_11;
    QTextEdit *Serial_send_text_window;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *Serial_send_button;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *Serial_manysend_button;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_12;
    QGroupBox *SerialConf;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_15;
    QLabel *Serial_Label_PortBox;
    QComboBox *Serial_PortBox;
    QHBoxLayout *horizontalLayout_16;
    QLabel *Serial_Label_BaudRateBox;
    QComboBox *Serial_BaudRateBox;
    QHBoxLayout *horizontalLayout_17;
    QLabel *Serial_Label_DataBitBox;
    QComboBox *Serial_DataBitBox;
    QHBoxLayout *horizontalLayout_18;
    QLabel *Serial_Label_StopBitBox;
    QComboBox *Serial_StopBitBox;
    QHBoxLayout *horizontalLayout_19;
    QLabel *Serial_Label_CheckBitBox;
    QComboBox *Serial_CheckBitBox;
    QHBoxLayout *horizontalLayout_20;
    QLabel *Serial_Label_Open;
    QPushButton *Serial_Open;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_21;
    QCheckBox *Serial_checkBoxHexS;
    QCheckBox *Serial_checkBoxHexR;
    QHBoxLayout *horizontalLayout_22;
    QCheckBox *Serial_checkBox_Continuous_send;
    QLineEdit *Serial_LineEdit_checkBox_Continuous_send;
    QHBoxLayout *horizontalLayout_23;
    QCheckBox *Serial_checkBox_frameline;
    QLineEdit *Serial_LineEdit_checkBox_frameline;
    QHBoxLayout *horizontalLayout_24;
    QPushButton *Serial_pushButtonclearsend;
    QPushButton *Serial_pushButtonclearrecv;
    QPushButton *Serial_jiankong;
    QPushButton *Serial_count_rev;

    void setupUi(QWidget *serialwindow)
    {
        if (serialwindow->objectName().isEmpty())
            serialwindow->setObjectName(QStringLiteral("serialwindow"));
        serialwindow->resize(820, 610);
        layoutWidget = new QWidget(serialwindow);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(233, 11, 551, 591));
        verticalLayout_9 = new QVBoxLayout(layoutWidget);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        groupBox_4 = new QGroupBox(layoutWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        horizontalLayout_14 = new QHBoxLayout(groupBox_4);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        Serial_Receive_text_window = new QTextBrowser(groupBox_4);
        Serial_Receive_text_window->setObjectName(QStringLiteral("Serial_Receive_text_window"));

        horizontalLayout_14->addWidget(Serial_Receive_text_window);


        verticalLayout_9->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(layoutWidget);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        verticalLayout_10 = new QVBoxLayout(groupBox_5);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        Serial_send_text_window = new QTextEdit(groupBox_5);
        Serial_send_text_window->setObjectName(QStringLiteral("Serial_send_text_window"));

        verticalLayout_11->addWidget(Serial_send_text_window);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        Serial_send_button = new QPushButton(groupBox_5);
        Serial_send_button->setObjectName(QStringLiteral("Serial_send_button"));

        horizontalLayout_12->addWidget(Serial_send_button);

        horizontalSpacer_2 = new QSpacerItem(248, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_2);

        Serial_manysend_button = new QPushButton(groupBox_5);
        Serial_manysend_button->setObjectName(QStringLiteral("Serial_manysend_button"));

        horizontalLayout_12->addWidget(Serial_manysend_button);


        verticalLayout_11->addLayout(horizontalLayout_12);


        verticalLayout_10->addLayout(verticalLayout_11);


        verticalLayout_9->addWidget(groupBox_5);

        layoutWidget_2 = new QWidget(serialwindow);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(11, 11, 217, 591));
        verticalLayout_12 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        SerialConf = new QGroupBox(layoutWidget_2);
        SerialConf->setObjectName(QStringLiteral("SerialConf"));
        SerialConf->setAutoFillBackground(false);
        verticalLayout_4 = new QVBoxLayout(SerialConf);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        Serial_Label_PortBox = new QLabel(SerialConf);
        Serial_Label_PortBox->setObjectName(QStringLiteral("Serial_Label_PortBox"));

        horizontalLayout_15->addWidget(Serial_Label_PortBox);

        Serial_PortBox = new QComboBox(SerialConf);
        Serial_PortBox->setObjectName(QStringLiteral("Serial_PortBox"));

        horizontalLayout_15->addWidget(Serial_PortBox);


        verticalLayout_13->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        Serial_Label_BaudRateBox = new QLabel(SerialConf);
        Serial_Label_BaudRateBox->setObjectName(QStringLiteral("Serial_Label_BaudRateBox"));

        horizontalLayout_16->addWidget(Serial_Label_BaudRateBox);

        Serial_BaudRateBox = new QComboBox(SerialConf);
        Serial_BaudRateBox->setObjectName(QStringLiteral("Serial_BaudRateBox"));

        horizontalLayout_16->addWidget(Serial_BaudRateBox);


        verticalLayout_13->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        Serial_Label_DataBitBox = new QLabel(SerialConf);
        Serial_Label_DataBitBox->setObjectName(QStringLiteral("Serial_Label_DataBitBox"));

        horizontalLayout_17->addWidget(Serial_Label_DataBitBox);

        Serial_DataBitBox = new QComboBox(SerialConf);
        Serial_DataBitBox->setObjectName(QStringLiteral("Serial_DataBitBox"));

        horizontalLayout_17->addWidget(Serial_DataBitBox);


        verticalLayout_13->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QStringLiteral("horizontalLayout_18"));
        Serial_Label_StopBitBox = new QLabel(SerialConf);
        Serial_Label_StopBitBox->setObjectName(QStringLiteral("Serial_Label_StopBitBox"));

        horizontalLayout_18->addWidget(Serial_Label_StopBitBox);

        Serial_StopBitBox = new QComboBox(SerialConf);
        Serial_StopBitBox->setObjectName(QStringLiteral("Serial_StopBitBox"));

        horizontalLayout_18->addWidget(Serial_StopBitBox);


        verticalLayout_13->addLayout(horizontalLayout_18);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QStringLiteral("horizontalLayout_19"));
        Serial_Label_CheckBitBox = new QLabel(SerialConf);
        Serial_Label_CheckBitBox->setObjectName(QStringLiteral("Serial_Label_CheckBitBox"));

        horizontalLayout_19->addWidget(Serial_Label_CheckBitBox);

        Serial_CheckBitBox = new QComboBox(SerialConf);
        Serial_CheckBitBox->setObjectName(QStringLiteral("Serial_CheckBitBox"));

        horizontalLayout_19->addWidget(Serial_CheckBitBox);


        verticalLayout_13->addLayout(horizontalLayout_19);


        verticalLayout_4->addLayout(verticalLayout_13);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QStringLiteral("horizontalLayout_20"));
        Serial_Label_Open = new QLabel(SerialConf);
        Serial_Label_Open->setObjectName(QStringLiteral("Serial_Label_Open"));
        Serial_Label_Open->setStyleSheet(QStringLiteral("image: url(:/seialimage/close.png);"));

        horizontalLayout_20->addWidget(Serial_Label_Open);

        Serial_Open = new QPushButton(SerialConf);
        Serial_Open->setObjectName(QStringLiteral("Serial_Open"));

        horizontalLayout_20->addWidget(Serial_Open);


        verticalLayout_4->addLayout(horizontalLayout_20);


        verticalLayout_12->addWidget(SerialConf);

        groupBox_6 = new QGroupBox(layoutWidget_2);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        verticalLayout_14 = new QVBoxLayout(groupBox_6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QStringLiteral("horizontalLayout_21"));
        Serial_checkBoxHexS = new QCheckBox(groupBox_6);
        Serial_checkBoxHexS->setObjectName(QStringLiteral("Serial_checkBoxHexS"));

        horizontalLayout_21->addWidget(Serial_checkBoxHexS);

        Serial_checkBoxHexR = new QCheckBox(groupBox_6);
        Serial_checkBoxHexR->setObjectName(QStringLiteral("Serial_checkBoxHexR"));
        Serial_checkBoxHexR->setMouseTracking(true);
        Serial_checkBoxHexR->setChecked(false);

        horizontalLayout_21->addWidget(Serial_checkBoxHexR);


        verticalLayout_14->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QStringLiteral("horizontalLayout_22"));
        Serial_checkBox_Continuous_send = new QCheckBox(groupBox_6);
        Serial_checkBox_Continuous_send->setObjectName(QStringLiteral("Serial_checkBox_Continuous_send"));

        horizontalLayout_22->addWidget(Serial_checkBox_Continuous_send);

        Serial_LineEdit_checkBox_Continuous_send = new QLineEdit(groupBox_6);
        Serial_LineEdit_checkBox_Continuous_send->setObjectName(QStringLiteral("Serial_LineEdit_checkBox_Continuous_send"));

        horizontalLayout_22->addWidget(Serial_LineEdit_checkBox_Continuous_send);


        verticalLayout_14->addLayout(horizontalLayout_22);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QStringLiteral("horizontalLayout_23"));
        Serial_checkBox_frameline = new QCheckBox(groupBox_6);
        Serial_checkBox_frameline->setObjectName(QStringLiteral("Serial_checkBox_frameline"));

        horizontalLayout_23->addWidget(Serial_checkBox_frameline);

        Serial_LineEdit_checkBox_frameline = new QLineEdit(groupBox_6);
        Serial_LineEdit_checkBox_frameline->setObjectName(QStringLiteral("Serial_LineEdit_checkBox_frameline"));

        horizontalLayout_23->addWidget(Serial_LineEdit_checkBox_frameline);


        verticalLayout_14->addLayout(horizontalLayout_23);

        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        Serial_pushButtonclearsend = new QPushButton(groupBox_6);
        Serial_pushButtonclearsend->setObjectName(QStringLiteral("Serial_pushButtonclearsend"));

        horizontalLayout_24->addWidget(Serial_pushButtonclearsend);

        Serial_pushButtonclearrecv = new QPushButton(groupBox_6);
        Serial_pushButtonclearrecv->setObjectName(QStringLiteral("Serial_pushButtonclearrecv"));

        horizontalLayout_24->addWidget(Serial_pushButtonclearrecv);


        verticalLayout_14->addLayout(horizontalLayout_24);

        Serial_jiankong = new QPushButton(groupBox_6);
        Serial_jiankong->setObjectName(QStringLiteral("Serial_jiankong"));

        verticalLayout_14->addWidget(Serial_jiankong);

        Serial_count_rev = new QPushButton(groupBox_6);
        Serial_count_rev->setObjectName(QStringLiteral("Serial_count_rev"));

        verticalLayout_14->addWidget(Serial_count_rev);


        verticalLayout_12->addWidget(groupBox_6);


        retranslateUi(serialwindow);

        QMetaObject::connectSlotsByName(serialwindow);
    } // setupUi

    void retranslateUi(QWidget *serialwindow)
    {
        serialwindow->setWindowTitle(QApplication::translate("serialwindow", "Form", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("serialwindow", "\346\216\245\346\224\266\345\214\272\357\274\232", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("serialwindow", "\345\217\221\351\200\201\345\214\272\357\274\232", Q_NULLPTR));
        Serial_send_button->setText(QApplication::translate("serialwindow", "\345\217\221\351\200\201", Q_NULLPTR));
        Serial_manysend_button->setText(QApplication::translate("serialwindow", "\345\244\232\351\241\271\345\217\221\351\200\201", Q_NULLPTR));
        SerialConf->setTitle(QApplication::translate("serialwindow", "\344\270\262\345\217\243\351\205\215\347\275\256", Q_NULLPTR));
        Serial_Label_PortBox->setText(QApplication::translate("serialwindow", "\347\253\257\345\217\243\345\217\267\357\274\232", Q_NULLPTR));
        Serial_PortBox->clear();
        Serial_PortBox->insertItems(0, QStringList()
         << QApplication::translate("serialwindow", "COM1", Q_NULLPTR)
        );
        Serial_Label_BaudRateBox->setText(QApplication::translate("serialwindow", "\346\263\242\347\211\271\347\216\207\357\274\232", Q_NULLPTR));
        Serial_BaudRateBox->clear();
        Serial_BaudRateBox->insertItems(0, QStringList()
         << QApplication::translate("serialwindow", "1200", Q_NULLPTR)
         << QApplication::translate("serialwindow", "2400", Q_NULLPTR)
         << QApplication::translate("serialwindow", "4800", Q_NULLPTR)
         << QApplication::translate("serialwindow", "9600", Q_NULLPTR)
         << QApplication::translate("serialwindow", "14400", Q_NULLPTR)
         << QApplication::translate("serialwindow", "19200", Q_NULLPTR)
         << QApplication::translate("serialwindow", "38400", Q_NULLPTR)
         << QApplication::translate("serialwindow", "56000", Q_NULLPTR)
         << QApplication::translate("serialwindow", "57600", Q_NULLPTR)
         << QApplication::translate("serialwindow", "115200", Q_NULLPTR)
         << QApplication::translate("serialwindow", "194000", Q_NULLPTR)
         << QApplication::translate("serialwindow", "1800000", Q_NULLPTR)
        );
        Serial_BaudRateBox->setCurrentText(QApplication::translate("serialwindow", "1200", Q_NULLPTR));
        Serial_Label_DataBitBox->setText(QApplication::translate("serialwindow", "\346\225\260\346\215\256\344\275\215\357\274\232", Q_NULLPTR));
        Serial_DataBitBox->clear();
        Serial_DataBitBox->insertItems(0, QStringList()
         << QApplication::translate("serialwindow", "5", Q_NULLPTR)
         << QApplication::translate("serialwindow", "6", Q_NULLPTR)
         << QApplication::translate("serialwindow", "7", Q_NULLPTR)
         << QApplication::translate("serialwindow", "8", Q_NULLPTR)
        );
        Serial_DataBitBox->setCurrentText(QApplication::translate("serialwindow", "5", Q_NULLPTR));
        Serial_Label_StopBitBox->setText(QApplication::translate("serialwindow", "\345\201\234\346\255\242\344\275\215\357\274\232", Q_NULLPTR));
        Serial_StopBitBox->clear();
        Serial_StopBitBox->insertItems(0, QStringList()
         << QApplication::translate("serialwindow", "1", Q_NULLPTR)
         << QApplication::translate("serialwindow", "2", Q_NULLPTR)
        );
        Serial_Label_CheckBitBox->setText(QApplication::translate("serialwindow", "\346\240\241\351\252\214\344\275\215\357\274\232", Q_NULLPTR));
        Serial_CheckBitBox->clear();
        Serial_CheckBitBox->insertItems(0, QStringList()
         << QApplication::translate("serialwindow", "NONE", Q_NULLPTR)
         << QApplication::translate("serialwindow", "ODD", Q_NULLPTR)
         << QApplication::translate("serialwindow", "EVEN", Q_NULLPTR)
        );
        Serial_Label_Open->setText(QString());
        Serial_Open->setText(QApplication::translate("serialwindow", "\346\211\223\345\274\200\344\270\262\345\217\243", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("serialwindow", "\346\225\260\346\215\256\346\230\276\347\244\272\346\240\274\345\274\217\357\274\232", Q_NULLPTR));
        Serial_checkBoxHexS->setText(QApplication::translate("serialwindow", "Hex\345\217\221\351\200\201", Q_NULLPTR));
        Serial_checkBoxHexR->setText(QApplication::translate("serialwindow", "Hex\346\230\276\347\244\272", Q_NULLPTR));
        Serial_checkBox_Continuous_send->setText(QApplication::translate("serialwindow", "\350\277\236\347\273\255\345\217\221\351\200\201", Q_NULLPTR));
        Serial_LineEdit_checkBox_Continuous_send->setInputMask(QString());
        Serial_LineEdit_checkBox_Continuous_send->setText(QApplication::translate("serialwindow", "1000", Q_NULLPTR));
        Serial_checkBox_frameline->setText(QApplication::translate("serialwindow", "\345\270\247\346\215\242\350\241\214  ", Q_NULLPTR));
        Serial_LineEdit_checkBox_frameline->setInputMask(QString());
        Serial_LineEdit_checkBox_frameline->setText(QApplication::translate("serialwindow", "40", Q_NULLPTR));
        Serial_pushButtonclearsend->setText(QApplication::translate("serialwindow", "\346\270\205\351\231\244\345\217\221\351\200\201", Q_NULLPTR));
        Serial_pushButtonclearrecv->setText(QApplication::translate("serialwindow", "\346\270\205\351\231\244\346\216\245\346\224\266", Q_NULLPTR));
        Serial_jiankong->setText(QApplication::translate("serialwindow", "\344\270\262\345\217\243\345\215\217\350\256\256\347\233\221\346\216\247", Q_NULLPTR));
        Serial_count_rev->setText(QApplication::translate("serialwindow", "\351\207\215\346\226\260\350\256\241\346\225\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class serialwindow: public Ui_serialwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALWINDOW_H

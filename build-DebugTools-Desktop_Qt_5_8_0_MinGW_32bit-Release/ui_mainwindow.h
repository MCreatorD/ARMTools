/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionwhite;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTabWidget *mianwindowtabWidget;
    QWidget *serial_tab;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_serial;
    QWidget *commit_tab;
    QWidget *tcp_tab;
    QWidget *usb_tab;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *theme;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(898, 771);
        actionwhite = new QAction(MainWindow);
        actionwhite->setObjectName(QStringLiteral("actionwhite"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        mianwindowtabWidget = new QTabWidget(centralWidget);
        mianwindowtabWidget->setObjectName(QStringLiteral("mianwindowtabWidget"));
        serial_tab = new QWidget();
        serial_tab->setObjectName(QStringLiteral("serial_tab"));
        gridLayout = new QGridLayout(serial_tab);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout_serial = new QVBoxLayout();
        verticalLayout_serial->setSpacing(7);
        verticalLayout_serial->setObjectName(QStringLiteral("verticalLayout_serial"));

        gridLayout->addLayout(verticalLayout_serial, 0, 0, 1, 1);

        mianwindowtabWidget->addTab(serial_tab, QString());
        commit_tab = new QWidget();
        commit_tab->setObjectName(QStringLiteral("commit_tab"));
        mianwindowtabWidget->addTab(commit_tab, QString());
        tcp_tab = new QWidget();
        tcp_tab->setObjectName(QStringLiteral("tcp_tab"));
        mianwindowtabWidget->addTab(tcp_tab, QString());
        usb_tab = new QWidget();
        usb_tab->setObjectName(QStringLiteral("usb_tab"));
        mianwindowtabWidget->addTab(usb_tab, QString());

        horizontalLayout->addWidget(mianwindowtabWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 898, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        theme = new QMenu(menu);
        theme->setObjectName(QStringLiteral("theme"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menu->addAction(theme->menuAction());

        retranslateUi(MainWindow);

        mianwindowtabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionwhite->setText(QApplication::translate("MainWindow", "white", Q_NULLPTR));
        mianwindowtabWidget->setTabText(mianwindowtabWidget->indexOf(serial_tab), QApplication::translate("MainWindow", "\344\270\262\345\217\243\350\260\203\350\257\225", Q_NULLPTR));
        mianwindowtabWidget->setTabText(mianwindowtabWidget->indexOf(commit_tab), QApplication::translate("MainWindow", "\345\215\217\350\256\256\350\247\243\346\236\220", Q_NULLPTR));
        mianwindowtabWidget->setTabText(mianwindowtabWidget->indexOf(tcp_tab), QApplication::translate("MainWindow", "TCP\350\260\203\350\257\225", Q_NULLPTR));
        mianwindowtabWidget->setTabText(mianwindowtabWidget->indexOf(usb_tab), QApplication::translate("MainWindow", "USB", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\350\217\234\345\215\225", Q_NULLPTR));
        theme->setTitle(QApplication::translate("MainWindow", "\345\210\207\346\215\242\344\270\273\351\242\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

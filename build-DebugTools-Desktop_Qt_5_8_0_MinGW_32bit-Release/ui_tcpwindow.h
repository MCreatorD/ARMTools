/********************************************************************************
** Form generated from reading UI file 'tcpwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TCPWINDOW_H
#define UI_TCPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tcpwindow
{
public:

    void setupUi(QWidget *tcpwindow)
    {
        if (tcpwindow->objectName().isEmpty())
            tcpwindow->setObjectName(QStringLiteral("tcpwindow"));
        tcpwindow->resize(400, 300);

        retranslateUi(tcpwindow);

        QMetaObject::connectSlotsByName(tcpwindow);
    } // setupUi

    void retranslateUi(QWidget *tcpwindow)
    {
        tcpwindow->setWindowTitle(QApplication::translate("tcpwindow", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class tcpwindow: public Ui_tcpwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TCPWINDOW_H

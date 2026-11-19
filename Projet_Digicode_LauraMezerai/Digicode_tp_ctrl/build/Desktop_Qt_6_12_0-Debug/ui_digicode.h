/********************************************************************************
** Form generated from reading UI file 'digicode.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIGICODE_H
#define UI_DIGICODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Digicode
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Digicode)
    {
        if (Digicode->objectName().isEmpty())
            Digicode->setObjectName("Digicode");
        Digicode->resize(800, 600);
        centralwidget = new QWidget(Digicode);
        centralwidget->setObjectName("centralwidget");
        Digicode->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Digicode);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 20));
        Digicode->setMenuBar(menubar);
        statusbar = new QStatusBar(Digicode);
        statusbar->setObjectName("statusbar");
        Digicode->setStatusBar(statusbar);

        retranslateUi(Digicode);

        QMetaObject::connectSlotsByName(Digicode);
    } // setupUi

    void retranslateUi(QMainWindow *Digicode)
    {
        Digicode->setWindowTitle(QCoreApplication::translate("Digicode", "Digicode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Digicode: public Ui_Digicode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIGICODE_H

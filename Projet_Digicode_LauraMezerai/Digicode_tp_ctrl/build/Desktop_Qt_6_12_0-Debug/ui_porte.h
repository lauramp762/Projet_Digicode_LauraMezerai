/********************************************************************************
** Form generated from reading UI file 'porte.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PORTE_H
#define UI_PORTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Porte
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Porte)
    {
        if (Porte->objectName().isEmpty())
            Porte->setObjectName("Porte");
        Porte->resize(400, 300);
        label = new QLabel(Porte);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 80, 161, 16));
        label_2 = new QLabel(Porte);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 110, 141, 16));

        retranslateUi(Porte);

        QMetaObject::connectSlotsByName(Porte);
    } // setupUi

    void retranslateUi(QWidget *Porte)
    {
        Porte->setWindowTitle(QCoreApplication::translate("Porte", "Form", nullptr));
        label->setText(QCoreApplication::translate("Porte", "La porte est d\303\251verrouill\303\251e", nullptr));
        label_2->setText(QCoreApplication::translate("Porte", "La porte est verrouill\303\251e", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Porte: public Ui_Porte {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PORTE_H

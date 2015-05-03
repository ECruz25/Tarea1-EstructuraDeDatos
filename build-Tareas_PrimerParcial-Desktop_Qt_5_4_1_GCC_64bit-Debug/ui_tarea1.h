/********************************************************************************
** Form generated from reading UI file 'tarea1.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAREA1_H
#define UI_TAREA1_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Tarea1
{
public:

    void setupUi(QDialog *Tarea1)
    {
        if (Tarea1->objectName().isEmpty())
            Tarea1->setObjectName(QStringLiteral("Tarea1"));
        Tarea1->resize(400, 300);

        retranslateUi(Tarea1);

        QMetaObject::connectSlotsByName(Tarea1);
    } // setupUi

    void retranslateUi(QDialog *Tarea1)
    {
        Tarea1->setWindowTitle(QApplication::translate("Tarea1", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Tarea1: public Ui_Tarea1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAREA1_H

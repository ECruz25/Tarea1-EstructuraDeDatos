/********************************************************************************
** Form generated from reading UI file 'tarea2.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAREA2_H
#define UI_TAREA2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tarea2
{
public:

    void setupUi(QWidget *Tarea2)
    {
        if (Tarea2->objectName().isEmpty())
            Tarea2->setObjectName(QStringLiteral("Tarea2"));
        Tarea2->resize(400, 300);

        retranslateUi(Tarea2);

        QMetaObject::connectSlotsByName(Tarea2);
    } // setupUi

    void retranslateUi(QWidget *Tarea2)
    {
        Tarea2->setWindowTitle(QApplication::translate("Tarea2", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Tarea2: public Ui_Tarea2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAREA2_H

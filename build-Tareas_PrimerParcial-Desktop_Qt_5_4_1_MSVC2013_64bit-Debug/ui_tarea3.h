/********************************************************************************
** Form generated from reading UI file 'tarea3.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAREA3_H
#define UI_TAREA3_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Tarea3
{
public:
    QListWidget *listWidget;
    QPushButton *appendBtn;
    QPushButton *searchBtn;
    QPushButton *insertBtn;
    QPushButton *clearBtn;
    QPushButton *removeBtn;
    QSpinBox *spinNum;
    QPushButton *goBtn;
    QSpinBox *spinPos;
    QTextEdit *textEdit;
    QTextEdit *textEdit_2;

    void setupUi(QDialog *Tarea3)
    {
        if (Tarea3->objectName().isEmpty())
            Tarea3->setObjectName(QStringLiteral("Tarea3"));
        Tarea3->resize(400, 300);
        listWidget = new QListWidget(Tarea3);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(90, 10, 256, 192));
        appendBtn = new QPushButton(Tarea3);
        appendBtn->setObjectName(QStringLiteral("appendBtn"));
        appendBtn->setGeometry(QRect(0, 10, 80, 21));
        searchBtn = new QPushButton(Tarea3);
        searchBtn->setObjectName(QStringLiteral("searchBtn"));
        searchBtn->setGeometry(QRect(0, 70, 80, 21));
        insertBtn = new QPushButton(Tarea3);
        insertBtn->setObjectName(QStringLiteral("insertBtn"));
        insertBtn->setGeometry(QRect(0, 40, 80, 21));
        clearBtn = new QPushButton(Tarea3);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));
        clearBtn->setGeometry(QRect(0, 130, 80, 21));
        removeBtn = new QPushButton(Tarea3);
        removeBtn->setObjectName(QStringLiteral("removeBtn"));
        removeBtn->setGeometry(QRect(0, 100, 80, 21));
        spinNum = new QSpinBox(Tarea3);
        spinNum->setObjectName(QStringLiteral("spinNum"));
        spinNum->setGeometry(QRect(110, 240, 43, 22));
        goBtn = new QPushButton(Tarea3);
        goBtn->setObjectName(QStringLiteral("goBtn"));
        goBtn->setGeometry(QRect(260, 230, 80, 21));
        spinPos = new QSpinBox(Tarea3);
        spinPos->setObjectName(QStringLiteral("spinPos"));
        spinPos->setGeometry(QRect(190, 240, 43, 22));
        textEdit = new QTextEdit(Tarea3);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(100, 210, 71, 31));
        textEdit_2 = new QTextEdit(Tarea3);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(180, 210, 71, 31));

        retranslateUi(Tarea3);

        QMetaObject::connectSlotsByName(Tarea3);
    } // setupUi

    void retranslateUi(QDialog *Tarea3)
    {
        Tarea3->setWindowTitle(QApplication::translate("Tarea3", "Dialog", 0));
        appendBtn->setText(QApplication::translate("Tarea3", "Append", 0));
        searchBtn->setText(QApplication::translate("Tarea3", "Search", 0));
        insertBtn->setText(QApplication::translate("Tarea3", "Insert", 0));
        clearBtn->setText(QApplication::translate("Tarea3", "Clear", 0));
        removeBtn->setText(QApplication::translate("Tarea3", "Remove", 0));
        goBtn->setText(QApplication::translate("Tarea3", "Go", 0));
        textEdit->setHtml(QApplication::translate("Tarea3", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Number:</p></body></html>", 0));
        textEdit_2->setHtml(QApplication::translate("Tarea3", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Position:</p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Tarea3: public Ui_Tarea3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAREA3_H

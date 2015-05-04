#ifndef TAREA3_H
#define TAREA3_H

#include <QDialog>

#include "arreglos.h"
#include <QDialog>
#include <QSpinBox>
#include <Qlabel>
#include <iostream>

namespace Ui {
class Tarea3;
}

class Tarea3 : public QDialog
{
    Q_OBJECT

public:
    explicit Tarea3(QWidget *parent = 0);
    ~Tarea3();
    void imprimir();
    int u;
    Arreglos* arreglo;
    QString n;
    int x;

private slots:
    void on_clearBtn_clicked();

    void on_appendBtn_clicked();

    void on_appGoBtn_clicked();

    void on_insertBtn_clicked();

    void on_goBtn_clicked();

    void on_searchBtn_clicked();

    void on_removeBtn_clicked();

private:
    Ui::Tarea3 *ui;
};

#endif // TAREA3_H

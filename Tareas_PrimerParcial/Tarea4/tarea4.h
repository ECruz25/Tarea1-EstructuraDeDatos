#ifndef TAREA4_H
#define TAREA4_H

#include <QDialog>
#include "tarea4/carta.h"

namespace Ui {
class Tarea4;
}

class Tarea4 : public QDialog
{
    Q_OBJECT

public:
    explicit Tarea4(QWidget *parent = 0);
    ~Tarea4();
    void add(int num);
    void remove(int pos);
    void insert(int pos, int num);
    Carta* getFinal();
    Carta* getPos(int pos);
    void imprimir();

private slots:
    void on_addBtn_clicked();

    void on_removeBtn_clicked();

    void on_insertBtn_clicked();

    void on_goBtn_clicked();

private:
    int u;
    int size;
    Carta* inicio;
    Carta* final;
    Ui::Tarea4 *ui;
};

#endif // TAREA4_H

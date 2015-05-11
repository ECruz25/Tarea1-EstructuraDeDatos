#ifndef Pila_H
#define Pila_H

#include <QDialog>
#include "nodo.h"

namespace Ui {
class Pila;
}

class Pila : public QDialog
{
    Q_OBJECT

public:
    explicit Pila(QWidget *parent = 0);
    ~Pila();
    Nodo* getTope();
    bool sacar();
    void meter(Nodo* obj);
    bool vacia();
    void anular();

private:
    Ui::Pila *ui;
    Nodo* tope;
};

#endif // Pila_H

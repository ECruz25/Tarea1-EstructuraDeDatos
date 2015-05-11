#ifndef COLA_H
#define COLA_H

#include <QDialog>
#include "nodo.h"

namespace Ui {
class Cola;
}

class Cola : public QDialog
{
    Q_OBJECT

public:
    explicit Cola(QWidget *parent = 0);
    ~Cola();
    bool quitarCola();
    void ponerCola(Nodo* nodo);
    Nodo* getFrente();
    void anular();
    bool vacia();
    Nodo* frente;
    Nodo* ultimo;

private:
    Ui::Cola *ui;
};

#endif // COLA_H

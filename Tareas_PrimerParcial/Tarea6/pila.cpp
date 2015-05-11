#include "pila.h"
#include "ui_pila.h"

Pila::Pila(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Pila)
{
    ui->setupUi(this);
    tope = NULL;
}

Pila::~Pila()
{
    delete ui;
}


Nodo* Pila::getTope()
{
    return this->tope;
}

bool Pila::sacar()
{
    if(tope)
    {
        Nodo* t = tope;
        tope = tope->anterior;
        delete t;
        return true;
    }
    return false;
}

void Pila::meter(Nodo* obj)
{
    if(tope)
    {
        obj->anterior = tope;
    }
    tope = obj;
}

bool Pila::vacia()
{
    if(tope)
    {
        return false;
    }
    return true;
}

void Pila::anular()
{
    while(sacar());
}

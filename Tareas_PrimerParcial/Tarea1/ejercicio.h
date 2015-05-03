#ifndef EJERCICIO_H
#define EJERCICIO_H

#include "tarea1.h"
#include "street.h"
#include <QString>
#include <QList>
#include <QTextStream>
#include <iostream>

class Ejercicio
{
public:
    Ejercicio();
    Ejercicio(QList<Street*> streets);
    ~Ejercicio();
    bool allPainted();
    bool coloredAdjacents(Street* street);
    void setColors();
    QList <Street*> getQList();
private:
    QList <Street*> streets;
    QList <Street*> coloreds;
    QList <QString> colors;
};

#endif // EJERCICIO_H

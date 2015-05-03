#ifndef TAREA1_H
#define TAREA1_H

#include "street.h"
#include "ejercicio.h"
#include <QTextStream>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QPainter>
#include <QPen>
#include <list>
#include <QDialog>
#include <QGraphicsScene>

namespace Ui {
class Tarea1;
}

class Tarea1 : public QDialog
{
    Q_OBJECT

public:
    bool todosPintados();
    void printStreets();
    QGraphicsView w;
    QGraphicsScene* scene;
    QGraphicsRectItem* rect;
    QPen pen;
    explicit Tarea1(QWidget *parent = 0);
    ~Tarea1();

private:
    Ui::Tarea1 *ui;
    QList<Street*> streets;
};

#endif // TAREA1_H

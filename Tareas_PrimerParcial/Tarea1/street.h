#ifndef STREET_H
#define STREET_H

#include <list>
#include <QString>
#include <QList>
#include <iostream>
#include <QTextStream>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QPainter>
#include <QPen>

using namespace std;

class Street
{
public:
    Street(QString name);
    Street();
    ~Street();
    void setName(QString name);
    QString getName();
    void addAdjacent(Street* adjacent);
    QList<Street*> getAdjacents();
    void setColor(QString color);
    QString getColor();
    Street exists(QString name);
    void printStreets();
    QGraphicsEllipseItem* ellip;

private:
    QString name;
    QString color;
    QList<Street*> adjacents;

};

#endif // STREET_H

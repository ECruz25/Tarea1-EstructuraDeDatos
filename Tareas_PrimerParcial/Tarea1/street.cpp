#include "street.h"

Street::Street()
{
    this->name = "";
    this->color = "";
}

Street::Street(QString name)
{
    this->name = name;
    this->color = "";
}

Street::~Street()
{

}

void Street::setName(QString name)
{
    this->name = name;
}

QString Street::getName()
{
    return this->name;
}

void Street::addAdjacent(Street* adjacent)
{
    this->adjacents.append(adjacent);
}

QList<Street*> Street::getAdjacents()
{
    return this->adjacents;
}

void Street::setColor(QString color)
{
    this->color = color;
}

QString Street::getColor()
{
    return this->color;
}

void Street::printStreets()
{
    ellip->setBrush(QBrush(QColor(this->color)));
}

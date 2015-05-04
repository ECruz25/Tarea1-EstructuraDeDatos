#include "ejercicio.h"


Ejercicio::Ejercicio()
{

}

QList<Street*> Ejercicio::getQList()
{
    return streets;
}

Ejercicio::Ejercicio(QList<Street*> streets)
{
    this->streets = streets;
    int colors_ = 0;
    setColors();
    while(!allPainted())
    {
        coloreds.clear();
        for(int i = 0; i < streets.size(); i++)
        {
            if(streets.at(i)->getColor().isEmpty())
            {
                if(coloredAdjacents(streets.at(i))==false)
                {
                    streets.at(i)->setColor(colors.at(colors_));
                    coloreds.append(streets.at(i));
                }
            }
        }
        colors_++;
    }
}

Ejercicio::~Ejercicio()
{

}

bool Ejercicio::allPainted()
{
    for(int i = 0; i < streets.size(); i++)
    {
        if(streets.at(i)->getColor().isEmpty())
        {
            return false;
        }
    }
    return true;
}

void Ejercicio::setColors()
{
    colors.append("Red");
    colors.append("Green");
    colors.append("Blue");
    colors.append("Yellow");
    colors.append("White");
}

bool Ejercicio::coloredAdjacents(Street *street)
{
    for(int i=0;i<street->getAdjacents().length();i++)
    {
        for(int j=0 ;j < this->coloreds.length();j++)
        {
            if(street->getAdjacents().at(i)->getName() == this->coloreds.at(j)->getName())
            {
                return true;
            }
        }
    }
    return false;
}

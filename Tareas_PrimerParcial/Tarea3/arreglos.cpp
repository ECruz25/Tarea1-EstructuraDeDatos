#include "arreglos.h"
#include "arreglos.h"

Arreglos::Arreglos()
{
    agregados = 0;
}

Arreglos::~Arreglos()
{

}

int Arreglos::search(int num)
{
    for(int i = 0; i < actual; i++)
    {
        if(this->array[i] == num)
        {
            return i;
        }
    }
    return -1;
}

void Arreglos::clear()
{
    for(int i = 0; i < actual; i++)
    {
        array[i] = 0;
    }
    actual = 0;
}

bool Arreglos::append(int num)
{
    if(actual < size)
    {
        array[actual++] = num;
        agregados += 1;
        return true;
    }
    return false;
}

bool Arreglos::remove(int pos)
{
    if(pos < actual)
    {
        for(int i = pos; pos < actual; i++)
        {
            array[i] = array[i+1];
        }
        array[--actual] = 0;
        agregados -= 1;
        return true;
    }
    return false;
}

int Arreglos::insert(int pos, int num)
{
    if(actual < size && pos < actual)
    {
        for(int x = actual-1; x >= pos; x--)
        {
            array[x+1] = array[x];
        }
        array[pos]=num;
        actual++;
        agregados += 1;
        return true;
    }
    return false;
}




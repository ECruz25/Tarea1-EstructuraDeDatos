#ifndef ARREGLOS_H
#define ARREGLOS_H

#include <QSpinBox>
#include <Qlabel>

class Arreglos
{
public:
    Arreglos();
    ~Arreglos();
    int search(int num);
    void clear();
    bool append(int num);
    bool remove(int pos);
    int insert(int pos, int num);
    void imprimir();
    int size = 15;
    int array[15];
    int actual = 0;
    int agregados;

private:
};

#endif // ARREGLOS_H

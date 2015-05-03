#ifndef CARTA_H
#define CARTA_H


class Carta
{
public:
    Carta();
    Carta(int num);
    ~Carta();

private:
    int num;
    Carta* siguiente;

};

#endif // CARTA_H

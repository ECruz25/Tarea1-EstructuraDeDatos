#include "tarea2.h"
#include "ui_tarea2.h"

Tarea2::Tarea2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tarea2)
{
    ui->setupUi(this);
    for(int s = 0; s<20;s++)
    {
        array[s]=0;
    }
}

Tarea2::~Tarea2()
{
    delete ui;
}

void Tarea2::append(int num)
{
    for(int x = 0; x < size; x++)
    {
        if(array[x] == 0)
        {
            array[x] = num;
            return;
        }
    }
}

void Tarea2::remove(int pos)
{
    array[pos] = 0;
}

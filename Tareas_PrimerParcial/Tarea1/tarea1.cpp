#include "tarea1.h"
#include "ui_tarea1.h"

Tarea1::Tarea1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tarea1)
{
    ui->setupUi(this);
}

void Tarea1::printStreets()
{

}

Tarea1::~Tarea1()
{
    delete ui;
}

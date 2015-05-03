#include "tarea2.h"
#include "ui_tarea2.h"

Tarea2::Tarea2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Tarea2)
{
    ui->setupUi(this);
}

Tarea2::~Tarea2()
{
    delete ui;
}

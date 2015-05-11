#include "cola.h"
#include "ui_cola.h"

Cola::Cola(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cola)
{
    ui->setupUi(this);
}

Cola::~Cola()
{
    delete ui;
}

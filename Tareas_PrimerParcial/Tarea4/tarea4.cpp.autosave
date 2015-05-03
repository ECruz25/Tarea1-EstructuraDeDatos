#include "tarea4.h"
#include "ui_tarea4.h"

Tarea4::Tarea4(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tarea4)
{
    ui->setupUi(this);
    imprimir();
    ui->spinNum->hide();
    ui->spinPos->hide();
    ui->goBtn->hide();
    ui->text1->hide();
    ui->text2->hide();
    size = 0;
    inicio = NULL;
    final = NULL;
}

Tarea4::~Tarea4()
{
    delete ui;
}

void Tarea4::add(int num)
{
    size++;
    if(!inicio)
    {
        inicio = new Carta(num);
        final = inicio;
        return;
    }
    final->siguiente = new Carta(num);
    final = final->siguiente;
}

void Tarea4::remove(int pos)
{
    pos -= 1;
    if(pos >= 0 && pos < size-1)
    {
        Carta* temp = getPos(pos);
        Carta* tempo = temp->siguiente;
        temp->siguiente =tempo->siguiente;
        delete tempo;
        size--;
    }
    else if(pos == -1)
    {
        Carta* temp = inicio;
        inicio = inicio->siguiente;
        delete temp;
        size--;
    }
    else if(pos == size-2)
    {
        Carta* temp = getPos(pos);
        temp->siguiente = NULL;
        delete final;
        final = temp;
        size--;
    }
}

void Tarea4::insert(int pos, int num)
{
    if(pos >= 0 && pos < size)
    {
        if(pos == 0)
        {
            Carta* temp = new Carta(num);
            temp->siguiente = inicio;
            inicio = temp;
        }
        else if(pos == size-1)
        {
            add(num);
        }
        else
        {
            Carta* temp = getPos(pos-1);
            Carta* tempo = new Carta(num);
            tempo->siguiente = temp->siguiente;
            temp->siguiente = tempo;
            size++;
        }
    }
}

Carta* Tarea4::getFinal()
{
    return final;
}

Carta* Tarea4::getPos(int pos)
{
    if(pos >= 0 && pos < size)
    {
        if(pos == size-1)
        {
            return final;
        }
        else
        {
            Carta* temp = inicio;
            for(int i = 1; i <= pos; i++)
            {
                temp = temp->siguiente;
            }
            return temp;
        }
    }

    return NULL;
}

void Tarea4::on_addBtn_clicked()
{
    ui->goBtn->show();
    ui->text1->show();
    ui->spinNum->show();
    ui->spinPos->hide();
    ui->text2->hide();
    u=1;
}

void Tarea4::on_removeBtn_clicked()
{
    ui->goBtn->show();
    ui->text1->hide();
    ui->spinNum->hide();
    ui->spinPos->show();
    ui->text2->show();
    u=2;
}

void Tarea4::on_insertBtn_clicked()
{
    ui->goBtn->show();
    ui->text1->show();
    ui->spinNum->show();
    ui->spinPos->show();
    ui->text2->show();
    u=3;
}

void Tarea4::on_goBtn_clicked()
{
    switch(u)
    {
        case 1:
            add(ui->spinNum->value());
            imprimir();
            break;
        case 2:
            remove(ui->spinPos->value());
            imprimir();
            break;
        case 3:
            insert(ui->spinPos->value(), ui->spinNum->value());
            imprimir();
            break;
    }
}

void Tarea4::imprimir()
{
    ui->listWidget->clear();
    QString n;
    Carta* temp = inicio;
    for(int i = 0; i < size; i++)
    {
        n = n.number(temp->num);
        n.append(" ->");
        ui->listWidget->addItem(n);
        if(temp->siguiente != NULL)
        {
            temp = temp->siguiente;
        }
    }
}

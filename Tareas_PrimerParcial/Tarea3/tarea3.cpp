#include "tarea3.h"
#include "ui_tarea3.h"

Tarea3::Tarea3(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tarea3)
{
    arreglo = new Arreglos();
    ui->setupUi(this);
    ui->spinNum->hide();
    ui->spinPos->hide();
    ui->goBtn->hide();
    ui->textEdit->hide();
    ui->textEdit_2->hide();
    arreglo->size = 15;
    arreglo->agregados = 0;
    arreglo->actual = 0;
    ui->text->hide();
    imprimir();
}

Tarea3::~Tarea3()
{
    delete ui;
}

void Tarea3::imprimir()
{
    ui->listWidget->clear();
    QString n;
    for(int i = 0; i < arreglo->actual; i++)
    {
        n = n.number(arreglo->array[i]);
        if(i < arreglo->size-1)
        {
            n.append(" ->");
        }
        ui->listWidget->addItem(n);
    }
}

void Tarea3::on_clearBtn_clicked()
{
    ui->spinNum->hide();
    ui->spinPos->hide();
    ui->goBtn->hide();
    ui->textEdit->hide();
    ui->textEdit_2->hide();
    ui->listWidget->clear();
    arreglo->clear();
    u=0;
    ui->text->hide();
}

void Tarea3::on_appendBtn_clicked()
{
    ui->spinNum->show();
    ui->spinNum->setValue(0);
    ui->goBtn->show();
    ui->spinPos->hide();
    ui->spinPos->setValue(0);
    ui->textEdit->show();
    ui->textEdit_2->hide();
    u=1;
    ui->text->hide();
}

void Tarea3::on_appGoBtn_clicked()
{
}

void Tarea3::on_insertBtn_clicked()
{
    ui->spinNum->show();
    ui->spinNum->setValue(0);
    ui->spinPos->show();
    ui->spinPos->setValue(0);
    ui->textEdit->show();
    ui->textEdit_2->show();
    ui->goBtn->show();
    u = 2;
    ui->text->hide();
}


void Tarea3::on_goBtn_clicked()
{
    switch(u)
    {
        case 1:
            arreglo->append(ui->spinNum->value());
            imprimir();
            break;
        case 2:
            arreglo->insert(ui->spinPos->value(), ui->spinNum->value());
            imprimir();
            break;
        case 3:
            n.clear();
            x = arreglo->search(ui->spinNum->value());
            if(x >= 0)
            {
                n.append(n.number(x));
                ui->text->setText(n);
                ui->text->show();
            }
            imprimir();
            break;
        case 4:
            arreglo->remove(ui->spinPos->value());
            imprimir();
            break;
    }
}

void Tarea3::on_searchBtn_clicked()
{
    ui->spinNum->show();
    ui->spinNum->setValue(0);
    ui->textEdit->show();
    ui->spinPos->hide();
    ui->textEdit_2->hide();
    ui->goBtn->show();
    u=3;
}

void Tarea3::on_removeBtn_clicked()
{
    ui->spinNum->hide();
    ui->spinNum->setValue(0);
    ui->textEdit->hide();
    ui->spinPos->show();
    ui->spinPos->setValue(0);
    ui->textEdit_2->show();
    ui->goBtn->show();
    u=4;
    ui->text->hide();
}

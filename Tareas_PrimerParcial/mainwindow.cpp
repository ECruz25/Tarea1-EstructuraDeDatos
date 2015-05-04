#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tarea1btn_clicked()
{
    tarea1 = new Tarea1(this);
    tarea1->show();
}

void MainWindow::on_tarea3btn_1_clicked()
{

}

void MainWindow::on_tarea3btn_clicked()
{
    tarea3 = new Tarea3(this);
    tarea3->show();
}

void MainWindow::on_tarea1btn_1_clicked()
{
}

void MainWindow::on_tarea1btn_2_clicked()
{

}


void MainWindow::on_tarea4btn_clicked()
{
    tarea4 = new Tarea4(this);
    tarea4->show();
}

void MainWindow::on_tarea2_clicked()
{
    tarea2 = new Tarea2(this);
    tarea2->show();
}

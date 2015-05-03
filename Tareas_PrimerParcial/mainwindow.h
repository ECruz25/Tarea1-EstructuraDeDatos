#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "Tarea1/tarea1.h"
#include "Tarea3/tarea3.h"

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_tarea1btn_clicked();
    void on_tarea3btn_1_clicked();
    void on_tarea1btn_1_clicked();
    void on_tarea3btn_clicked();

    void on_tarea1btn_2_clicked();

private:
    Tarea1* tarea1;
    Tarea3* tarea3;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
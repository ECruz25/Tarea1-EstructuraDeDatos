#include "mainwindow.h"
#include <QApplication>
#include "Tarea1/tarea1.h"
#include "Tarea3/tarea3.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}

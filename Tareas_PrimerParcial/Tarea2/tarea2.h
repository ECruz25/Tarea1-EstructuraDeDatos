#ifndef TAREA2_H
#define TAREA2_H

#include <QWidget>
#include <iostream>
using namespace std;

namespace Ui {
class Tarea2;
}

class Tarea2 : public QWidget
{
    Q_OBJECT

public:
    explicit Tarea2(QWidget *parent = 0);
    ~Tarea2();
    int size = 20;
    int array[20];
    void append(int num);
    void remove(int num);

private:
    Ui::Tarea2 *ui;
};

#endif // TAREA2_H

#ifndef COLA_H
#define COLA_H

#include <QDialog>

namespace Ui {
class Cola;
}

class Cola : public QDialog
{
    Q_OBJECT

public:
    explicit Cola(QWidget *parent = 0);
    ~Cola();

private:
    Ui::Cola *ui;
};

#endif // COLA_H

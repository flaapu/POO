#ifndef RESULTADO_H
#define RESULTADO_H

#include <QDialog>
#include <iostream>

using namespace std;

namespace Ui {
class resultado;
}

class resultado : public QDialog
{
    Q_OBJECT

public:
    explicit resultado(QWidget *parent, QString nombre, int caja, string gusto, float subtotal, float regalo, float iva, float total );
    ~resultado();

private:
    Ui::resultado *ui;
};

#endif // RESULTADO_H

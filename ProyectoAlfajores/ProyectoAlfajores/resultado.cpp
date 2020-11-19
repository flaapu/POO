#include "resultado.h"
#include "ui_resultado.h"

resultado::resultado(QWidget *parent, QString nombre, int caja, string gusto, float subtotal, float regalo, float iva, float total):
    QDialog(parent),
    ui(new Ui::resultado)
{
    QString auxGusto = QString::fromUtf8(gusto.c_str());
    QString auxSubtotal = QString::number(subtotal,'subtotal',2);
    QString auxRegalo = QString::number(regalo,'regalo',2);
    QString auxIVA = QString::number(iva,'iva',2);
    QString auxTotal = QString::number(total,'total',2);

    ui->setupUi(this);
    ui->MostrarNombre->setText(nombre);
    ui->MostrarCaja->setNum(caja);
    ui->MostrarSabor->setText(auxGusto);
    ui->MostrarSubtotal->setText(auxSubtotal);
    ui->MostrarRecargo->setText(auxRegalo);
    ui->MostrarIVA->setText(auxIVA);
    ui->MostrarTotal->setText(auxTotal);
}

resultado::~resultado()
{
    delete ui;
}

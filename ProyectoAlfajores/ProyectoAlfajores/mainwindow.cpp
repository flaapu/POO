#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->nombre_cliente = ui->lineNombre->text();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_SpinDLL_valueChanged(double arg1)
{

}

void MainWindow::on_SpinF_valueChanged(double arg1)
{

}

void MainWindow::on_SpinM_valueChanged(double arg1)
{

}

void MainWindow::on_bt6_clicked()
{
    this->caja = 6;
}

void MainWindow::on_bt12_clicked()
{
    this->caja = 12;
    this->porcentajeDesc  = 0.10;

}

void MainWindow::on_bt24_clicked()
{
    this->caja = 24;
    this->porcentajeDesc = 0.20;
}

void MainWindow::on_btDulce_clicked()
{
    this->gusto = "Dulce de leche";
}

void MainWindow::on_btFrutal_clicked()
{
    this->gusto = "Frutal";
}

void MainWindow::on_btMousse_clicked()
{
    this->gusto = "Mousse";
}

//boton confirmar
void MainWindow::on_btConfirmar_clicked()
{
    QMessageBox msgBox; msgBox.setText(tr("Desea preparar la caja para regalo?"));
    QAbstractButton* pButtonYes = msgBox.addButton(tr("Si"), QMessageBox::YesRole); msgBox.addButton(tr("No"), QMessageBox::NoRole);

    msgBox.exec();

    //GENERO LOS PRECIOS DE LAS CAJAS DEPENDIENDO LOS GUSTOS
    if(this->gusto == "Dulce de leche")
    {
        this->descuento = this->caja * ui->SpinDLL->value() * this->porcentajeDesc;
        this->subtotal = this->caja * ui->SpinDLL->value();
        this->iva = this->subtotal * 0.21;

    }
    if(this->gusto == "Frutal")
    {
        this->descuento = this->caja * ui->SpinF->value() * this->porcentajeDesc;
        this->subtotal = (this->caja * ui->SpinF->value());
        this->iva = this->subtotal * 0.21;
    }
    if(this->gusto == "Mousse")
    {
        this->descuento = this->caja * ui->SpinM->value() * this->porcentajeDesc;
        this->subtotal = (this->caja * ui->SpinM->value());
        this->iva = this->subtotal * 0.21;
    }


    //si presiona SI pasa esto, sino lo otro.
    if (msgBox.clickedButton()==pButtonYes) {
        this->regalo = 150.5;
        this->total = this->subtotal + this->regalo + this->iva - this->descuento;

    }
    else{
        this->total = this->subtotal + this->iva - this->descuento;
    }

    resultado *ventanaResultado = new resultado(this, ui->lineNombre->text(), this->caja, this->gusto, this->subtotal, this->regalo, this->iva, this->total);
    ventanaResultado->setModal(true);
    ventanaResultado->show();
}

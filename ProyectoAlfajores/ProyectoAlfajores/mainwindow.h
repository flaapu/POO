#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include <iostream>
#include <QMessageBox>
#include <QString>
#include "resultado.h"

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    float subtotal = 0;
    float total = 0;
    float iva = 0;
    float porcentajeDesc = 0;
    float descuento = 0;
    float regalo = 0;
    int caja;
    string gusto;
    QString nombre_cliente;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_SpinDLL_valueChanged(double arg1);

    void on_SpinF_valueChanged(double arg1);

    void on_SpinM_valueChanged(double arg1);

    void on_bt6_clicked();

    void on_bt12_clicked();

    void on_bt24_clicked();

    void on_btDulce_clicked();

    void on_btFrutal_clicked();

    void on_btMousse_clicked();

    void on_btConfirmar_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

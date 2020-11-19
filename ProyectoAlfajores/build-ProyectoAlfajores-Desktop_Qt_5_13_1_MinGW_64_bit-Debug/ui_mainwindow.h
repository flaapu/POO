/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QDoubleSpinBox *SpinDLL;
    QDoubleSpinBox *SpinF;
    QDoubleSpinBox *SpinM;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *lineNombre;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_4;
    QPushButton *bt6;
    QPushButton *bt12;
    QPushButton *bt24;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_9;
    QLabel *label_11;
    QLabel *label_12;
    QVBoxLayout *verticalLayout_6;
    QPushButton *btDulce;
    QPushButton *btFrutal;
    QPushButton *btMousse;
    QPushButton *btConfirmar;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(130, 40, 581, 489));
        verticalLayout_9 = new QVBoxLayout(widget);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Hynings Handwriting"));
        font.setPointSize(14);
        label->setFont(font);

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        SpinDLL = new QDoubleSpinBox(widget);
        SpinDLL->setObjectName(QString::fromUtf8("SpinDLL"));
        SpinDLL->setMaximum(1000.000000000000000);

        verticalLayout_2->addWidget(SpinDLL);

        SpinF = new QDoubleSpinBox(widget);
        SpinF->setObjectName(QString::fromUtf8("SpinF"));
        SpinF->setMaximum(1000.000000000000000);

        verticalLayout_2->addWidget(SpinF);

        SpinM = new QDoubleSpinBox(widget);
        SpinM->setObjectName(QString::fromUtf8("SpinM"));
        SpinM->setMaximum(1000.000000000000000);

        verticalLayout_2->addWidget(SpinM);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_8->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Hynings Handwriting"));
        font1.setPointSize(12);
        label_4->setFont(font1);

        horizontalLayout_2->addWidget(label_4, 0, Qt::AlignHCenter);

        lineNombre = new QLineEdit(widget);
        lineNombre->setObjectName(QString::fromUtf8("lineNombre"));

        horizontalLayout_2->addWidget(lineNombre);


        verticalLayout_8->addLayout(horizontalLayout_2);


        verticalLayout_9->addLayout(verticalLayout_8);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("A little sunshine"));
        font2.setPointSize(28);
        label_5->setFont(font2);

        verticalLayout_7->addWidget(label_5, 0, Qt::AlignHCenter);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);

        verticalLayout_3->addWidget(label_6);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);

        verticalLayout_3->addWidget(label_7);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        verticalLayout_3->addWidget(label_8);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        bt6 = new QPushButton(widget);
        bt6->setObjectName(QString::fromUtf8("bt6"));

        verticalLayout_4->addWidget(bt6);

        bt12 = new QPushButton(widget);
        bt12->setObjectName(QString::fromUtf8("bt12"));

        verticalLayout_4->addWidget(bt12);

        bt24 = new QPushButton(widget);
        bt24->setObjectName(QString::fromUtf8("bt24"));

        verticalLayout_4->addWidget(bt24);


        horizontalLayout_3->addLayout(verticalLayout_4);


        verticalLayout_7->addLayout(horizontalLayout_3);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font2);

        verticalLayout_7->addWidget(label_10, 0, Qt::AlignHCenter);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        verticalLayout_5->addWidget(label_9);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);

        verticalLayout_5->addWidget(label_11);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        verticalLayout_5->addWidget(label_12);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        btDulce = new QPushButton(widget);
        btDulce->setObjectName(QString::fromUtf8("btDulce"));

        verticalLayout_6->addWidget(btDulce);

        btFrutal = new QPushButton(widget);
        btFrutal->setObjectName(QString::fromUtf8("btFrutal"));

        verticalLayout_6->addWidget(btFrutal);

        btMousse = new QPushButton(widget);
        btMousse->setObjectName(QString::fromUtf8("btMousse"));

        verticalLayout_6->addWidget(btMousse);


        horizontalLayout_4->addLayout(verticalLayout_6);


        verticalLayout_7->addLayout(horizontalLayout_4);


        verticalLayout_9->addLayout(verticalLayout_7);

        btConfirmar = new QPushButton(widget);
        btConfirmar->setObjectName(QString::fromUtf8("btConfirmar"));

        verticalLayout_9->addWidget(btConfirmar);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Precio de Alfajor de Dulce de Leche:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Precio de Alfajor Frutal:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Precio de Alfajor de Mousse:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Ingrese su nombre:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "MENU DE CAJAS", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Caja de 6 (Sin descuento)", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Caja de 12 (descuento del %10)", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Caja de 24 (descuento del %20)", nullptr));
        bt6->setText(QCoreApplication::translate("MainWindow", "Seleccionar", nullptr));
        bt12->setText(QCoreApplication::translate("MainWindow", "Seleccionar", nullptr));
        bt24->setText(QCoreApplication::translate("MainWindow", "Seleccionar", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "SABOR DE LA CAJA", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Dulce de leche", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Frutal", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Mousse", nullptr));
        btDulce->setText(QCoreApplication::translate("MainWindow", "Seleccionar", nullptr));
        btFrutal->setText(QCoreApplication::translate("MainWindow", "Seleccionar", nullptr));
        btMousse->setText(QCoreApplication::translate("MainWindow", "Seleccionar", nullptr));
        btConfirmar->setText(QCoreApplication::translate("MainWindow", "Confirmar compra", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

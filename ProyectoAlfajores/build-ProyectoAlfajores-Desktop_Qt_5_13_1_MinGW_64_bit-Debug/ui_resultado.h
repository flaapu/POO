/********************************************************************************
** Form generated from reading UI file 'resultado.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULTADO_H
#define UI_RESULTADO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_resultado
{
public:
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *MostrarNombre;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLabel *MostrarCaja;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLabel *MostrarSabor;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_8;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLabel *MostrarSubtotal;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QLabel *MostrarRecargo;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_8;
    QLabel *MostrarIVA;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QLabel *MostrarTotal;

    void setupUi(QDialog *resultado)
    {
        if (resultado->objectName().isEmpty())
            resultado->setObjectName(QString::fromUtf8("resultado"));
        resultado->resize(817, 549);
        label = new QLabel(resultado);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 50, 511, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("coffee+tea demo"));
        font.setPointSize(36);
        label->setFont(font);
        widget = new QWidget(resultado);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 170, 601, 41));
        QFont font1;
        font1.setPointSize(14);
        widget->setFont(font1);
        horizontalLayout_4 = new QHBoxLayout(widget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Lovehearts XYZ"));
        font2.setPointSize(14);
        label_2->setFont(font2);
        label_2->setTextFormat(Qt::AutoText);

        horizontalLayout->addWidget(label_2, 0, Qt::AlignLeft);

        MostrarNombre = new QLabel(widget);
        MostrarNombre->setObjectName(QString::fromUtf8("MostrarNombre"));
        MostrarNombre->setFont(font2);
        MostrarNombre->setTextFormat(Qt::AutoText);

        horizontalLayout->addWidget(MostrarNombre);


        horizontalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font2);
        label_3->setTextFormat(Qt::AutoText);

        horizontalLayout_2->addWidget(label_3);

        MostrarCaja = new QLabel(widget);
        MostrarCaja->setObjectName(QString::fromUtf8("MostrarCaja"));
        MostrarCaja->setFont(font2);
        MostrarCaja->setTextFormat(Qt::AutoText);

        horizontalLayout_2->addWidget(MostrarCaja);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font2);
        label_4->setTextFormat(Qt::AutoText);

        horizontalLayout_3->addWidget(label_4);

        MostrarSabor = new QLabel(widget);
        MostrarSabor->setObjectName(QString::fromUtf8("MostrarSabor"));
        MostrarSabor->setMaximumSize(QSize(106, 16777215));
        MostrarSabor->setFont(font2);
        MostrarSabor->setTextFormat(Qt::AutoText);

        horizontalLayout_3->addWidget(MostrarSabor);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        widget1 = new QWidget(resultado);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(70, 220, 631, 51));
        QFont font3;
        font3.setPointSize(16);
        widget1->setFont(font3);
        horizontalLayout_8 = new QHBoxLayout(widget1);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(widget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Lovehearts XYZ"));
        font4.setPointSize(16);
        label_5->setFont(font4);
        label_5->setTextFormat(Qt::AutoText);

        horizontalLayout_5->addWidget(label_5);

        MostrarSubtotal = new QLabel(widget1);
        MostrarSubtotal->setObjectName(QString::fromUtf8("MostrarSubtotal"));
        MostrarSubtotal->setFont(font4);
        MostrarSubtotal->setTextFormat(Qt::AutoText);

        horizontalLayout_5->addWidget(MostrarSubtotal);


        horizontalLayout_8->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(widget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font4);
        label_7->setTextFormat(Qt::AutoText);

        horizontalLayout_6->addWidget(label_7);

        MostrarRecargo = new QLabel(widget1);
        MostrarRecargo->setObjectName(QString::fromUtf8("MostrarRecargo"));
        MostrarRecargo->setFont(font4);
        MostrarRecargo->setTextFormat(Qt::AutoText);

        horizontalLayout_6->addWidget(MostrarRecargo);


        horizontalLayout_8->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_8 = new QLabel(widget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font4);
        label_8->setTextFormat(Qt::AutoText);

        horizontalLayout_7->addWidget(label_8);

        MostrarIVA = new QLabel(widget1);
        MostrarIVA->setObjectName(QString::fromUtf8("MostrarIVA"));
        MostrarIVA->setFont(font4);
        MostrarIVA->setTextFormat(Qt::AutoText);

        horizontalLayout_7->addWidget(MostrarIVA);


        horizontalLayout_8->addLayout(horizontalLayout_7);

        widget2 = new QWidget(resultado);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(290, 290, 201, 61));
        horizontalLayout_9 = new QHBoxLayout(widget2);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(widget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Lovehearts XYZ"));
        font5.setPointSize(20);
        label_6->setFont(font5);
        label_6->setTextFormat(Qt::AutoText);

        horizontalLayout_9->addWidget(label_6);

        MostrarTotal = new QLabel(widget2);
        MostrarTotal->setObjectName(QString::fromUtf8("MostrarTotal"));
        MostrarTotal->setFont(font5);
        MostrarTotal->setTextFormat(Qt::AutoText);

        horizontalLayout_9->addWidget(MostrarTotal);


        retranslateUi(resultado);

        QMetaObject::connectSlotsByName(resultado);
    } // setupUi

    void retranslateUi(QDialog *resultado)
    {
        resultado->setWindowTitle(QCoreApplication::translate("resultado", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("resultado", "RESUMEN DE LA COMPRA", nullptr));
        label_2->setText(QCoreApplication::translate("resultado", "Cliente: ", nullptr));
        MostrarNombre->setText(QString());
        label_3->setText(QCoreApplication::translate("resultado", "Tipo de caja:", nullptr));
        MostrarCaja->setText(QString());
        label_4->setText(QCoreApplication::translate("resultado", "Sabor: ", nullptr));
        MostrarSabor->setText(QString());
        label_5->setText(QCoreApplication::translate("resultado", "Subtotal: $", nullptr));
        MostrarSubtotal->setText(QString());
        label_7->setText(QCoreApplication::translate("resultado", "Recargo: $", nullptr));
        MostrarRecargo->setText(QString());
        label_8->setText(QCoreApplication::translate("resultado", "IVA 21%: $", nullptr));
        MostrarIVA->setText(QString());
        label_6->setText(QCoreApplication::translate("resultado", "Total: $", nullptr));
        MostrarTotal->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class resultado: public Ui_resultado {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULTADO_H

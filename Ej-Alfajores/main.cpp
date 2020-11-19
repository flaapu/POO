#include <iostream>
#include <cstring>
#include <string>
#include <string.h>
using namespace std;

/*
Una fábrica de alfajores que elabora los mismos de Dulce de Leche, Frutales o Mousse, y
los vende envasados en cajas de 6, 12 y 24 unidades.
Los precios unitarios de cada gusto se leen al inicio, y cada caja solo incluye un solo gusto.
Para la venta por cajas rigen los siguientes precios: la caja de 6 alfajores, se los cobra al
precio del alfajor que contiene por la cantidad de unidades, según el gusto, la caja de 12 tiene
un 10 % de descuento sobre el valor del alfajor que contiene, la caja de 24 tiene el 20 % de
descuento.
Si el cliente solicitó que se le prepare un paquete especial para regalo, se cobra $ 1.50 por el
servicio. Además a cada venta se le debe adicionar el IVA (21%).
Se conocen como datos de una venta: Cliente, gusto (“Dulce de Leche”, “Frutal” o “Mouse”),
tipo de caja (6, 12 o 24), y si es para regalo(V o F).
Informar según el siguiente esquema:
Cliente: xxxxxxxx Tipo de caja: xx Gusto: xxxxxxxxxxxxxx
SubTotal xxxx Recargo Regalo xxxx Iva 21% xxxx
Total xxxx
Obs: en el caso de no corresponder el recargo debe ir en 0 (cero).
 */
int main()
{

    float precio_dll, precio_frutales, precio_mousse, total, precio, subtotal;
    double iva, descuento;
    string nombre_cliente, sabor;
    char regalo;
    int cantidad_alfajores, tipo_alfajor;

    cout<<"Precio de los alfajores de dulce de leche: "<<endl;
    cin>>precio_dll;
    cout<<"Precio de los alfajores frutales: "<<endl;
    cin>>precio_frutales;
    cout<<"Precio de los alfajores de mousse: "<<endl;
    cin>>precio_mousse;
    cout<<"####################################################################"<<endl;
    cout<<"Ingrese el nombre del cliente: "<<endl;
    //getline(cin, nombre_cliente);
    cin>>nombre_cliente;
    cout<<"####################################################################"<<endl;
    cout<<"Que sabor va a querer su majestad?: "<<endl;
    cout<<"1. Dulce de leche"<<endl;
    cout<<"2. Frutal"<<endl;
    cout<<"3. Mousse"<<endl;
    cout<<"Ingrese solo el digito, no se mamon"<<endl;
    cin>>tipo_alfajor;

    if (tipo_alfajor == 1)
    {
        precio = precio_dll;
        sabor = "Dulce de leche";
    }
    else if (tipo_alfajor == 2)
    {
        precio = precio_frutales;
        sabor = "Frutal";
    }
    else if (tipo_alfajor == 3)
    {
        precio = precio_mousse;
        sabor = "Mousse";
    }
    cout<<"####################################################################"<<endl;
    cout<<endl;
    cout<<"El cliente va a querer 6, 12 o 24 unidades? Dale papito que no tengo todo el dia: "<<endl;
    cin>>cantidad_alfajores;

    switch(cantidad_alfajores){
    case 6:
        subtotal = precio*6;
        break;
    case 12: descuento =  precio*12*0.10;
        subtotal = precio*12 - descuento;
        break;
    case 24: descuento = precio*24*0.20;
        subtotal = precio*24 - descuento;
        break;
    }
    cout<<endl;
    cout<<"####################################################################"<<endl;
    cout<<endl;
    cout<<" De casualidad le pregunto al cliente si lo quiere para regalo? "<<endl;
    cout<<" Ah se le olvido! preguntele.."<<endl;
    cout<<"Entonces... Lo quiere para regalo? "<<endl;
    cout<<"Ingrese 'V' o 'F', por favor."<<endl;
    //cin.get(regalo);
    cin>>regalo;
    cout<<endl;

    float recargo = 0;
    if(regalo == 'V')
    {
        recargo = 1.50;
        total = subtotal + 1.50;
    }
    else {
        total = subtotal;
    }

    iva = total * 0.21;

    cout<<"####################################################################"<<endl;
    cout<<"####################################################################"<<endl;
    cout<<"####################################################################"<<endl;
    cout<<endl;
    cout<<"Cliente: "<<nombre_cliente<<" Tipo de caja: "<<cantidad_alfajores<<" Gusto: "<<sabor<<endl;
    cout<<"Subtotal $"<<subtotal<<" Recargo Regalo $"<<recargo<<" Iva 21% $"<<iva<<endl;
    cout<<"Total $"<<total<<endl;
    cout<<endl;
    cout<<"####################################################################"<<endl;
    cout<<"####################################################################"<<endl;
    cout<<"####################################################################"<<endl;
    cout<<"GRACIAS POR SU COMPRA."<<endl;
    return 0;

}


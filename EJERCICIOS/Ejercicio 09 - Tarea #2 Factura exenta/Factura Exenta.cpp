#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    // Datos de entrada

    double subtotal = 0;
    double total = 0;
    double impuesto = 0.15;
    int descuento = 0;
    double calculoDescuento = 0;
    double calculoImpuesto = 0;
    char estaExenta = 0;

    cout << " Ingrese el subtotal de la factura: ";
    cin  >> subtotal;

    cout << " Ingrese el descuento (0, 10 15, 20): ";
    cin  >> descuento;
    
    cout << " Es una factura excenta? Escriba S si lo es, de lo contrario escriba N: ";
    cin  >> estaExenta; 

    // Proceso
    calculoDescuento = ( subtotal * descuento ) / 100;

    if ( estaExenta == 'S' || estaExenta == 's') {
       calculoImpuesto = 0;
    } else {
       calculoImpuesto = ( subtotal - calculoDescuento ) * 0.15;
    }
    
    total = subtotal - calculoDescuento + calculoImpuesto;

    // Salida
    cout << endl;
    cout << " Total a pagar es: " << total;

    return 0;
}

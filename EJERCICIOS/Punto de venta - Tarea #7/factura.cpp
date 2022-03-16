#include <iostream>
#include "factura.h"

using namespace std;

double subtotal = 0;
double impuesto = 0, total = 0;
string listaProductos;

void agregarProducto (string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + "\n";
    subtotal = subtotal + ( cantidad * precio);
    impuesto = (subtotal * 0.15) ;
    total = (subtotal + impuesto);
}

void imprimirFactura()
{
    system ("cls");
    cout << " ******* " << endl;
    cout << " FACTURA " << endl;
    cout << " ******* " << endl;

    cout << " Productos: " << endl;
    cout << listaProductos;

    cout << endl;
    cout << " Subtotal:      L. " << subtotal << endl;
    cout << " ISV del 15%:   L. " << impuesto << endl;
    cout << " Total a pagar: L. " << total << endl;

    cout << endl;
    system ("pause"); 
}

#include <iostream>

using namespace std;

double subtotal;
string listaProductos;

void agregarProducto (string descripcion, int cantidad, double precio)
{
    listaProductos = listaProductos + descripcion + "\n";
    subtotal = subtotal + ( cantidad * precio);
}

void imprimirFactura()
{
    system ("cls");
    cout << " ******* " << endl;
    cout << " FACTURA " << endl;
    cout << " ******* " << endl;
    cout << endl;

    cout << " Productos: " << endl;
    cout << listaProductos;

    cout << endl;
    cout << " Subtotal " << subtotal;
    cout << endl;
    cout << endl;
    system ("pause");
}

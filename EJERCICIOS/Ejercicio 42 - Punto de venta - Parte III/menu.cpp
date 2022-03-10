#include <iostream>

using namespace std;

extern void productos (int opcion);

void menu ()
{
    int opcion = 0;

    while ( true )
    {
        system ("cls");
        cout << "******";
        cout << " MENU ";
        cout << "******";
        cout << endl;
        cout << endl;
        cout << endl;

        cout << " 1. Bebidas Calientes" << endl;
        cout << " 2. Bebidas Frias " << endl;
        cout << " 3. Reposteria " << endl;
        cout << " 5. Imprimir Factura " << endl;
        cout << " 0. Salir " << endl;

        cout << " \n Opcion: ";
        cin >> opcion;

        if ( opcion == 0)
        {
            break;
        }

        productos (opcion);
    }
}
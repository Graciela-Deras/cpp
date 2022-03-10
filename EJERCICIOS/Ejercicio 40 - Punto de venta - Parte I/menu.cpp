#include <iostream>

using namespace std;

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

        cout << " 1. Bebidas Calientes" << endl;
        cout << " 2. Bebidas Frias " << endl;
        cout << " 3. Reposteria " << endl;
        cout << " 4. Salir " << endl;

        cin >> opcion;

        if ( opcion == 0){
            break;
        }
    }
}
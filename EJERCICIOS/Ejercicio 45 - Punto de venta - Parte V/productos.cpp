#include <iostream>

using namespace std;

extern void agregarProducto (string descripcion, int cantidad, double precio);
void productos ( int opcion)
{
    int opcionProducto = 0;
    system ("cls");
    switch (opcion)
    {
    case 1:
    {
        cout << " BEBIDAS CALIENTES " << endl;
        cout << " ***************** " << endl;
        cout << " 1 - Capuccino " << endl;
        cout << " 2 - Expresso " << endl;
        
        cout << endl;
        cout << " Ingrese una opcion: ";
        cin  >> opcionProducto;

        switch (opcionProducto)
        {
        case 1:
            agregarProducto ( " 1 Capuccino - L. 40.00 ", 1, 40);
            break;

        case 2:
            agregarProducto ( " 1 Expresso - L. 30.00 ", 1, 30);
            break;
        
        default:
            {
                cout << " Opción no valida ";
                return;
                break;
            }

        }

        cout << endl; 
        cout << " Producto agregado " << endl << endl;
        system ("pause");
        
        break;
    }
    case 2:
    {
        cout << " BEBIDAS FRIAS " << endl;
        cout << " ************* " << endl;
        system ( "pause");
        break;
    }
    case 3:
    {
        cout << " BEBIDAS REPOSTERIA " << endl;
        cout << " ****************** " << endl;
        system ( "pause");
        break;
    }

    default:
        break;
    }
}
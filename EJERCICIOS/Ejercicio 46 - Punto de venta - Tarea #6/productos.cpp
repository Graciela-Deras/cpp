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
                agregarProducto ( " 1 Capuccino -  L. 40.00 ", 1, 40);
                break;
            
            case 2:
                agregarProducto ( " 1 Expresso  - L. 30.00 ", 1, 30);
                break;
            
            default:
            {
                cout << " Opcion no valida ";
                system ("pause");
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
        cout << " 1 - Jugo naturales " << endl;
        cout << " 2 - Granitas " << endl;
        cout << " 3 - Mochaccino supreme " << endl;
        
        cout << endl;
        cout << " Ingrese una opcion: ";
        cin  >> opcionProducto;
        switch (opcionProducto)
        {
            case 1:
                agregarProducto (" 1 Jugo natural - L. 15.00 ", 1, 15);
                break;
            
            case 2:
                agregarProducto (" 1 Granitas  -  L. 50.00 ", 1, 50);
                break;
                
            case 3:  
                agregarProducto (" 1 Mocachino Supreme - L. 60.00 ", 1, 60);
                break;
            
            default:
                {
                    cout << " Opcion no valida ";
                    system ("pause");
                    return;
                    break;
                }
            }
        cout << endl; 
        cout << " Producto agregado " << endl << endl;
        system ("pause");
        break;
    }
    case 3:
    {
        cout << " BEBIDAS REPOSTERIA " << endl;
        cout << " ****************** " << endl;
        cout << " 1 - Pastel de chocolate " << endl;
        cout << " 2 - Semitas caseras " << endl;
        cout << " 3 - Cheesecake " << endl;
        
        cout << endl;
        cout << " Ingrese una opcion: ";
        cin  >> opcionProducto;

        switch (opcionProducto)
        {
            case 1:
                agregarProducto (" 1 Pastel de Chocolate - L. 40.00 ", 1, 40);
            break;
            
            case 2:
                agregarProducto (" 1 Semitas Caseras - L. 30.00 ", 1, 30);
            break;
            
            case 3: 
                agregarProducto (" 1 Cheesecake - L. 35.00 ", 1, 35);
            
            default:
            {
                cout << " Opcion no valida ";
                system ("pause");
                return;
                break;
            }
        }

        cout << endl; 
        cout << " Producto agregado " << endl << endl;
        system ("pause");
        break;
    }
    
    default:
        {
            cout << " Opcion no valida " << endl;
            
            system ("pause");
            break;
        }
    }
}
#include <iostream>

using namespace std;

string nombreCompleto ( string nombre, string apellido)
{
    return nombre + " " + apellido;
}

int main(int argc, char const *argv[])
{
    string primerNombre = " ";
    string primerApellido = " "; 

    cout << " Ingrese su primer nombre: ";
    cin  >> primerNombre;
    cout << " Ingrese su primer apellido: ";
    cin  >> primerApellido;

    cout << " \n Nombre Completo: " << nombreCompleto ( primerNombre, primerApellido);
    
    return 0;
}

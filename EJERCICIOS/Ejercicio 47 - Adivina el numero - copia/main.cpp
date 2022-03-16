#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int numeroSecreto = 0;
    int miNumero = 0;

    //Inicializando el numero random

    srand(time(NULL));

    //Generar un numero entre 1 y 10
    numeroSecreto = rand() % 10 + 1;

    int intento = 1;

    while ( numeroSecreto != miNumero )
    {
        cout << "\nAdivina el numero (1 a 10): ";
        cin >> miNumero;

        if ( numeroSecreto < miNumero)
        {
            cout << ( "El numero secreto puede ser menor") << endl;

        }
        if ( numeroSecreto > miNumero)
        {
            cout << "El numero puede ser mayor" << endl;
        }

    if  ( intento > 3)
            {
                cout << "perdiste";
                break;
            }   
    }

    cout << endl;
    cout << "Numero secreto: " << numeroSecreto << endl;
    cout << "ADIVINASTE";
    return 0;
}

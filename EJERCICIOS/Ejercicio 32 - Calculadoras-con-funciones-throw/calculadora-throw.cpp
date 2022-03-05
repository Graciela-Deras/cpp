#include <iostream>

using namespace std;

int suma ( int a, int b)
{
    return a + b;
}
int calculadora ( int a, int b, char operador)
{
    if ( operador == '+'){
        return suma ( a, b);
    }

    throw " El operador no existe ";
}

int main(int argc, char const *argv[])
{
    int n1 = 0;
    int n2 = 0;
    char operador = 0;
    int resultado = 0;

    cout << " Ingrese a: ";
    cin >> n1;
    cout << " Ingrese b: ";
    cin >> n2;
    cout << " Ingrese el operador ( +, -, *, / ): ";
    cin >> operador; 

    cout << endl;

    try
    {
        resultado = calculadora ( n1, n2, operador);
        cout << " \n El resultado de " << n1 << " " << operador << " " << n2 << " es: ";
        cout << resultado; 
    }
    catch(const char* error)
    {
        cout << error;
    }
    
    return 0;
}

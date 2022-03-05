#include <iostream>

using namespace std;

int sumar ( int a, int b)
{
    return a + b;
}
int restar ( int a, int b)
{
    return a - b;
}
int multiplicar ( int a, int b)
{
    return a * b;
}
int dividir ( int a, int b)
{
    if ( b == 0){
        throw " No se puede dividir entre 0 ";
    }
    
    return a / b;
}

int calculadora ( int a, int b, char operador)
{
    switch ( operador )
    {
    case '+':
        return sumar( a, b );
        break;
    case '-':
        return restar( a, b );
        break;
    case '*':
        return multiplicar( a, b );
        break;
    case '/':
        return dividir( a, b );
        break;

    default:
        break;
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

#include <iostream>
using namespace std;


int suma ( int a, int b){
    return a + b;
}

int resta ( int a, int b){
    return a - b;
}
int main(int argc, char const *argv[])
{
    system ("cls");

    int numero1 = 0;
    int numero2 = 0;

    cout << " Ingrese el valor de a: ";
    cin >> numero1;
    cout << " Ingrese el valor de b: ";
    cin >> numero2;

    cout << " \n El resultado de la suma es: " << suma (numero1, numero2);
    cout << " \n El resultado de la resta es: " << resta ( numero1, numero2);
    cout << endl;

    return 0;
}

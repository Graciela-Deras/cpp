#include <iostream>
#include <math.h>

using namespace std;

float raizCuadrada ( float numero )
{
    return sqrt (numero); 
}

int main(int argc, char const *argv[])

{
    float n1 = 0;                                                                 
    
    cout << " \n CALCULO PARA ENCONTRAR LA RAIZ CUADRADA DE UN NUMERO " <<endl;
    cout << " ==================================================== ";
    cout << " \n Digite el valor del numero que desea calcular : ";
    cin  >> n1; 
    
    cout << " \n La raiz cuadrada de " << n1 << " es: ";             
    cout << raizCuadrada (n1) << endl;
    cout << endl;

    return 0;
}


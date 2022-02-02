#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{
	//Declaración de las variables
	int a = 0;
	int b = 0; 
	float suma = 0, resta = 0, multiplicacion = 0, division = 0;
	
	cout << "    CALCULADORA  " << endl;
	cout << " Ingrese el valor de a: " ;
	cin  >> a;
	cout << " Ingrese el valor de b: "; 
	cin  >> b;
	
	//Proceso de datos
	suma = a + b;
	resta = a - b;
	multiplicacion = a * b;
	division = a / b;
	
	//Salida de datos
	cout << "\n La suma de a + b es: " << suma << endl;
	cout << " La resta de a - b es: " << resta << endl;
	cout << " La multiplicacion de a * b es: " << multiplicacion << endl;
	cout << " La division de a / b es: " << division << endl;

	return 0;
}
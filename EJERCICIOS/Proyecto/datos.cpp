#include <iostream>
#include "datos.h"
#include "calculos.h"

using namespace std;

void datos ()
{
    int salir = 1, edad = 0, persona = 0;
    string = nombre;
	float ninos = 0, jovenes = 0, adultos = 0, terceraEdad = 0, totalPersonas = 0;
	
	while ( salir == 1 )
	{
		system("cls");
		persona++;                                                                     
		cout << " CENSO DE EDADES DE LA POBLACION EN LA ZONA DE VILLANUEVA" << endl;
		cout << " Persona No. " << persona << endl;
        cout << " Ingrese su nombre: ";
        cin >> nombre;
		cout << " Ingrese su edad: ";
		cin >> edad;                                                                    // Entrada de datos de las edades
		
		if ( edad <= 12 )
			ninos++;                                                                    // Contador: ninos = ninos + 1
			
			if (( edad >= 13 ) && ( edad <= 21 ))
				jovenes++;                                                             // Contador: jovenes = jovenes + 1 
				
				if (( edad >= 22 ) && ( edad <= 59 ))
					adultos++;                                                         // Contador: adultos = adultos + 1
					
					if ( edad >= 60 )
						terceraEdad++;  

    cout << " \n Desea continuar el censo con otra persona? " << endl;
	cout << " Responda 1 si su respuesta es Si, de lo contrario ingrese otro numero: ";
	cin >> salir;
	}    
}

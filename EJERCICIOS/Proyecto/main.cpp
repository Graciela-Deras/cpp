#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int persona = 0, salir = 1;
    string nombre;
    float ninos = 0, jovenes = 0, adultos = 0, terceraEdad = 0, totalPersonas = 0;
    float porcentajeNinos = 0, porcentajeJovenes = 0, porcentajeAdultos = 0, porcentajeTerceraEdad = 0;

    string nombres [persona];
    int edad[10];
    string datos[1][2]=
    {
        { " NOMBRES ", " EDADES "}
    };

    while ( salir == 1)
    {

	persona++;   
    system ("cls");
	cout << "********************************************************" << endl;                                                                 
	cout << "CENSO DE EDADES DE LA POBLACION EN LA ZONA DE VILLANUEVA" << endl;
	cout << "********************************************************" << endl; 
    cout << "Ingrese los datos solicitados acontinuacion: " << endl;
    cout << "Persona No. " << persona << endl;

    for (int i = 0; i < 1; i++)
    {
        cout << "Nombre: ";
        cin >> nombres [i]; 

        cout << "Edad: ";
        cin >> edad [i];
            
        if ( edad [i] <= 12 )
			ninos++;                                                                    
			
			if (( edad [i] >= 13 ) && ( edad [i] <= 21 ))
				jovenes++;                                                           
				
				if (( edad [i] >= 22 ) && ( edad [i] <= 59 ))
					adultos++;                                                         
					
					if ( edad [i] >= 60 )
						terceraEdad++;  
    
    }
    
    cout << endl;
    cout << "Desea continuar el censo con otra persona?" << endl;
    cout << "Presione 1 para continuar, de lo contrario ingrese el numero 0: ";
    cin >> salir;
    cout << endl;

    }
    
    system("cls");
    cout << "TABLA DE DATOS OBTENIDOS" << endl;
    cout << "========================" << endl;
    
    for (int a = 0; a < 1; a++)
    {
        for (int b = 0; b < 2; b++)
        {
            cout << datos [a][b] << " "; 
        }
        cout << endl;
    }
    
    for (int i = 0; i < persona; i++ )
    {
        cout <<nombres[i]<<"  "<<edad[i]<<endl;
        system ("pause");
    }

        
	totalPersonas = (ninos + adultos + jovenes + terceraEdad);     

	porcentajeNinos = ninos / totalPersonas * 100;
	porcentajeJovenes = jovenes / totalPersonas * 100;
	porcentajeAdultos = adultos / totalPersonas * 100;
	porcentajeTerceraEdad = terceraEdad / totalPersonas * 100;
    
	cout << " RESUMEN DE DATOS RESULTANTES DEL CENSO ";
    cout << " ************************* ";
	cout << endl;
    cout << " \n El total de personas encuestadas  es: " << totalPersonas;
	cout << " \n El porcentaje de ninos en la zona es: " << porcentajeNinos << " % " << endl;
	cout << " \n El porcentaje de personas jovenes en la zona es " << porcentajeJovenes << " % " << endl;
	cout << " \n El porcentaje de personas adultos en la zona es del: " << porcentajeAdultos << " % " << endl;
	cout << " \n El porcentaje de personas de la tercera en la zona es: " << porcentajeTerceraEdad << " % " << endl;
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int persona = 0, cantidad = 0;
    float ninos = 0, jovenes = 0, adultos = 0, terceraEdad = 0;
    float porcentajeNinos = 0, porcentajeJovenes = 0, porcentajeAdultos = 0, porcentajeTerceraEdad = 0;  

    system ("cls");
	cout << "********************************************************" << endl;                                                                 
	cout << "CENSO DE EDADES DE LA POBLACION EN LA ZONA DE VILLANUEVA" << endl;
	cout << "********************************************************" << endl; 
    cout << endl;

    cout << "Digite la cantidad de personas a censar: ";
    cin >> cantidad;
    cout << endl;
    
    string datos[1][3]=
    {
        { " NOMBRES ", " No.IDENTIDAD ", " EDADES "}
    };

    string nombres [cantidad];
    string identidad [cantidad];
    int edad[cantidad];

    for (int i = 0; i < cantidad; i++)
    {
        persona++; 
        system ("cls");
        cout << "Persona No. " << persona << endl;
        cout << "Ingrese los datos solicitados a continuacion: " << endl;
        cout << "==============================================" << endl;
        cout << "NOMBRE: ";
        cin >> nombres [i]; 
        cout << "NUMERO DE IDENTIDAD (separado unicamente con guiones): ";
        cin >> identidad[i];
        cout << "EDAD: ";
        cin >> edad [i];
        cout << endl;
            
        if ( edad [i] <= 12 )
			ninos++;                                                                    
			
			if (( edad [i] >= 13 ) && ( edad [i] <= 21 ))
				jovenes++;                                                           
				
				if (( edad [i] >= 22 ) && ( edad [i] <= 59 ))
					adultos++;                                                         
					
					if ( edad [i] >= 60 )
						terceraEdad++;  
    }
    
    system ("cls");
    cout << "  TABLA DE DATOS OBTENIDOS  " << endl;
    cout << " ========================" << endl;

    for (int a = 0; a < 1; a++)
    {
        for (int b = 0; b < 3; b++)
        {
            cout << datos [a][b] << " "; 
        }
    }

    cout << endl;

    for (int a = 0; a < cantidad ; a++ )
    {
        cout << nombres[a] << "    " << identidad [a] << "     " << edad [a] << endl;
        
    }
    cout << endl;
    system("pause"); 
         
	porcentajeNinos = ninos / persona * 100;
	porcentajeJovenes = jovenes / persona * 100;
	porcentajeAdultos = adultos / persona * 100;
	porcentajeTerceraEdad = terceraEdad / persona * 100;
    
    system ("cls");
    cout << " --------------------------------------------------- " << endl;
	cout << " TABLA DE PORCENTAJES DE DATOS RESULTANTES DEL CENSO " << endl;
    cout << " --------------------------------------------------- " << endl;
    cout << " Total de personas encuestadas: " << persona << endl;
	cout << " Porcentaje de ninos en la zona: " << porcentajeNinos << " % " << endl;
	cout << " Porcentaje de personas jovenes en la zona: " << porcentajeJovenes << " % " << endl;
	cout << " Porcentaje de personas adultas en la zona: " << porcentajeAdultos << " % " << endl;
	cout << " Porcentaje de personas de la tercera en la zona: " << porcentajeTerceraEdad << " % " << endl;
    cout << endl;

    return 0;
}


#include <iostream>
#include <math.h>
#include "calculos.h"

using namespace std;

float ninos, jovenes, adultos, terceraEdad, totalPersonas;
float porcentajeNinos = 0, porcentajeJovenes = 0, porcentajeAdultos = 0, porcentajeTerceraEdad = 0;

void porcentaje ()
{   
	totalPersonas = (ninos + adultos + jovenes + terceraEdad);     

	porcentajeNinos = ninos / totalPersonas * 100;
	porcentajeJovenes = jovenes / totalPersonas * 100;
	porcentajeAdultos = adultos / totalPersonas * 100;
	porcentajeTerceraEdad = terceraEdad / totalPersonas * 100;
	
	cout << endl;
    cout << " \n El total de personas encuestadas  es: " << totalPersonas;
	cout << " \n El porcentaje de ninos en la zona es del: " << porcentajeNinos << " % " << endl;
	cout << " \n El porcentaje de personas jovenes en la zona es del: " << porcentajeJovenes << " % " << endl;
	cout << " \n El porcentaje de personas adultos en la zona es del: " << porcentajeAdultos << " % " << endl;
	cout << " \n El porcentaje de personas mayores en la zona es del: " << porcentajeTerceraEdad << " % " << endl;
}
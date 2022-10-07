#include "SistemaInscripcionAsignatura.h"
#include <sstream>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;


void SistemaInscripcionAsignatura::lecturaArchivo()
{

	// Operacion que lee el archivo calificaciones.txt
	ifstream archivo("calificaciones.txt");

	// Linea vacia donde se almacenan las lineas del archivo
	string linea = "";

	// Variables usadas para resolver el problema
	int contador = 0;

	float peor = 99999, mejor = -1;

	string nombre_mejor, rut_mejor, nombre_peor, rut_peor;

	float* promedios = new float[100];

	// Ciclo que se detiene una vez no haya mas lineas
	// en el archivo
	while (getline(archivo, linea))
	{
		// Variables en donde se guardan los datos
		string nombre, rut, nota_1_string, nota_2_string, nota_3_string;
		float nota_1, nota_2, nota_3;

		// Funcion que obtiene la linea y se encarga de su lectura
		stringstream lector_linea(linea);

		// Operaciones que permiten la manipulacion del lector
		// Leen la linea y asignan un dato a una variable hasta
		// cierto limite designado por un caracter (,)
		getline(lector_linea, nombre, ',');
		getline(lector_linea, rut, ',');
		getline(lector_linea, nota_1_string, ',');
		getline(lector_linea, nota_2_string, ',');
		getline(lector_linea, nota_3_string, ',');

		// Ocupar la libreria <string> para la operacion stof
		// y asi tener las notas en formato float
		nota_1 = stof(nota_1_string);
		nota_2 = stof(nota_2_string);
		nota_3 = stof(nota_3_string);

		// Calculo de un promedio
		float promedio = (nota_1 + nota_2 + nota_3) / 3;

		// Busqueda de un mejor y peor
		if (promedio < peor)
		{
			peor = promedio;
			nombre_peor = nombre;
			rut_peor = rut;
		}

		if (promedio > mejor)
		{
			mejor = promedio;
			nombre_mejor = nombre;
			rut_mejor = rut;
		}

		// Agregacion al arreglo
		promedios[contador] = promedio;
		contador++;
	}

	archivo.close();

	// Ordenamiento

	int aux;

	for (int i = 0; i < contador - 1; i++)
	{
		for (int j = i; j < contador; j++)
		{
			if (*(promedios + i) < *(promedios + j))
			{
				aux = *(promedios + i);
				*(promedios + i) = *(promedios + j);
				*(promedios + j) = aux;
			}
		}
	}

	// Despliegue

	cout << "El alumno con mejor nota es " << nombre_mejor << " con RUT " << rut_mejor << " y con promedio " << promedios[0];

	cout << "\nEl alumno con peor nota es " << nombre_peor << " con RUT " << rut_peor << " y con promedio " << promedios[contador - 1];


	// Escritura de archivo

	// Operacion que indica el archivo de salida
	ofstream archivo_salida("notas.txt");

	// Escritura en el archivo
	for (int i = 0; i < contador; i++)
	{
		archivo_salida << *(promedios + i) << '\n';
	}
	archivo_salida.close();

}

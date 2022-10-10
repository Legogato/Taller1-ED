#include "NodoMatriz.h"

NodoMatriz::NodoMatriz(Asignatura* asignatura, int row, int col)
{

	NodoMatriz* up = nullptr;
	NodoMatriz* left = nullptr;

}

string Asignatura::getNombre()
{
	return this->nombre;
}

void Asignatura::setNombre(string nombre)
{
	this->nombre = nombre;
}
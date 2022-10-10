#pragma once
#include "NodoMatriz.h"
using namespace std;
class MatrizHorario
{
private:

	/// <summary>
	/// filas matriz 
	/// </summary>
	NodoMatriz* aRow;
	/// <summary>
	/// columnas matriz
	/// </summary>
	NodoMatriz* aCol;
	/// <summary>
	/// cantidad de columnas
	/// </summary>
	int cols;
	/// <summary>
	/// cantidad de filas
	/// </summary>
	int rows;
public:
	/// <summary>
	/// Constructor de la clase
	/// </summary>
	/// <param name="cols"></param>
	/// <param name="rows"></param>
	MatrizHorario(int cols, int rows);
	/// <summary>
	/// Elimina una asignatura
	/// </summary>
	/// <param name="asignatura"></param>
	/// <returns></returns>
	bool eliminarAsignatura(Asignatura* asignatura);
	/// <summary>
	/// Agrega una asignatura
	/// </summary>
	/// <param name="asignatura"></param>
	/// <returns></returns>
	bool agregarAsignatura(Asignatura* asignatura);
};


#pragma once
#include <string>
#include "Asignatura.h"
using namespace std;
class NodoMatriz

{
private:

	/// <summary>
	/// Asignatura almacenada en el nodo
	/// </summary>

	Asignatura* asignatura;

	/// <summary>
	/// Fila
	/// </summary>

	int row;

	/// <summary>
	/// Columna
	/// </summary>

	int col;

	/// <summary>
	/// Nodo de arriba
	/// </summary>

	NodoMatriz* up;

	/// <summary>
	/// Nodo de la izquierda
	/// </summary>

	NodoMatriz* left;

public:

	/// <summary>
	/// Constructor
	/// </summary>
	/// <param name="asignatura"></param>
	/// <param name="row"></param>
	/// <param name="col"></param>

	NodoMatriz(Asignatura* asignatura, int row, int col);

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>

	Asignatura getAsignatura();
	void setAsignatura(Asignatura asignatura);

	int getRow();
	void setRow(int row);

	int getCol();
	void setCol(int col);

	NodoMatriz getUp();
	void setUp(NodoMatriz up);

	NodoMatriz getLeft();
	void setLeft(NodoMatriz left);

};
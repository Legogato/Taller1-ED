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
	/// Obtiene la asignatura del nodo
	/// </summary>
	/// <returns></returns>

	Asignatura getAsignatura();

	/// <summary>
	/// Setea la asignatura del nodo
	/// </summary>
	/// <param name="asignatura"></param>

	void setAsignatura(Asignatura asignatura);

	/// <summary>
	/// Obtiene la fila
	/// </summary>
	/// <returns></returns>

	int getRow();

	/// <summary>
	/// Setea la fila
	/// </summary>
	/// <param name="row"></param>

	void setRow(int row);

	/// <summary>
	/// Obtiene la columna
	/// </summary>
	/// <returns></returns>

	int getCol();

	/// <summary>
	/// Setea la columna
	/// </summary>
	/// <param name="col"></param>

	void setCol(int col);

	/// <summary>
	/// Obtiene el nodo de arriba
	/// </summary>
	/// <returns></returns>

	NodoMatriz getUp();

	/// <summary>
	/// Setea el nodo de arriba
	/// </summary>
	/// <param name="up"></param>

	void setUp(NodoMatriz up);

	/// <summary>
	/// Obtiene le nodo de la izquierda
	/// </summary>
	/// <param name="left"></param>

	NodoMatriz getLeft();

	/// <summary>
	/// Setea el nodo de la izquierda
	/// </summary>
	/// <param name="left"></param>

	void setLeft(NodoMatriz left);

};
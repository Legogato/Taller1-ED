#include "MatrizHorario.h"
#include "NodoMatriz.h"

MatrizHorario::MatrizHorario(int cols, int rows)
{
	this->cols = cols;
	this->rows = rows;
	this->aRow = new NodoMatriz(nullptr,rows,cols);
	this->aCol = new NodoMatriz(nullptr, rows, cols);
}

bool MatrizHorario::eliminarAsignatura(Asignatura* asignatura)
{
	return false;
}

bool MatrizHorario::agregarAsignatura(Asignatura* asignatura)
{
	return false;
}

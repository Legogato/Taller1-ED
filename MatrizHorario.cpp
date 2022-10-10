#include "MatrizHorario.h"
#include "NodoMatriz.h"

MatrizHorario::MatrizHorario(int cols, int rows)
{
	this->cols = cols;
	this->rows = rows;
	this->aRow = new NodoMatriz(rows);
	this->aCol = new NodoMatriz(cols);
}

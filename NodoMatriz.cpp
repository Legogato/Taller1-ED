#include "NodoMatriz.h"

NodoMatriz::NodoMatriz(Asignatura* asignatura, int row, int col)
{

	NodoMatriz* up = nullptr;
	NodoMatriz* left = nullptr;

}

Asignatura NodoMatriz::getAsignatura()
{
	return this->asignatura;
}

void NodoMatriz::setAsignatura(Asignatura asignatura)
{
	this->asignatura = asignatura;
}

int NodoMatriz::getRow()
{
	return this->row;
}

void NodoMatriz::setRow(int row)
{
	this->row = row;
}

int NodoMatriz::getCol()
{
	return this->col;
}

void NodoMatriz::setCol(int col)
{
	this->col = col;
}

NodoMatriz NodoMatriz::getUp()
{
	return this->up;
}

void NodoMatriz::setUp(NodoMatriz up)
{
	this->up = up;
}

NodoMatriz NodoMatriz::getLeft()
{
	return this->left;
}

void NodoMatriz::setLeft(NodoMatriz left)
{
	this->left = left;
}
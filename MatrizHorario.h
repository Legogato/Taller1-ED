#pragma once
#include "NodoMatriz.h"
using namespace std;
class MatrizHorario
{
private:
	NodoMatriz* aRow;
	NodoMatriz* aCol;
	int cols;
	int rows;
public:
	MatrizHorario(int cols, int rows);
};


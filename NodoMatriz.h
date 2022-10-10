#pragma once
#include <string>
#include "Asignatura.h"
using namespace std;
class NodoMatriz

{
private:
	Asignatura* asignatura;
	int row;
	int col;
	NodoMatriz* up;
	NodoMatriz* left;
public:
	NodoMatriz(Asignatura* asignatura, int row, int col);



};


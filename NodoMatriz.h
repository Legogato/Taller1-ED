#pragma once
#include <string>
using namespace std;
class NodoMatriz

{
private:
	int data;
	int row;
	int col;
	NodoMatriz* up;
	NodoMatriz* left;
public:
	NodoMatriz(int data, int row, int col);



};


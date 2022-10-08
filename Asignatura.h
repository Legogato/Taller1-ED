#pragma once
#include <string>
using namespace std;
class Asignatura
{
/// <summary>
/// hola
/// </summary>
private:
	string nombre;
	int NRC;
	int creditos;
	string* bloques = new string[5];
	string* dias = new string[6];

public:
	Asignatura(string nombre, int NRC, int creditos, string bloques, string dias);
	string getNombre();
	void setNombre(string nombre);

	int getNRC();
	void setNRC(int NRC);

	int getCreditos();
	void setCreditos(int creditos);

	string* getBloques();
	void setBloques(string* bloques);

	string* getDias();
	void setDias(string* dias);
};


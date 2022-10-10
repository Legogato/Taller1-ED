#pragma once
#include <string>
using namespace std;
class Asignatura
{

private:

	string nombre;
	int NRC;
	int creditos;
	string* bloques = new string[5];
	string* dias = new string[6];

public:

	/// <summary>
	/// Constructor
	/// </summary>
	/// <param name="nombre"></param>
	/// <param name="NRC"></param>
	/// <param name="creditos"></param>
	/// <param name="bloques"></param>
	/// <param name="dias"></param>

	Asignatura(string nombre, int NRC, int creditos, string bloques, string dias);

	/// <summary>
	/// 
	/// </summary>
	/// <returns></returns>

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


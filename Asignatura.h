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
	/// Obtiene el nombre de la asignatura
	/// </summary>
	/// <returns></returns>

	string getNombre();

	/// <summary>
	/// Setea el nombre
	/// </summary>
	/// <param name="nombre"></param>

	void setNombre(string nombre);

	/// <summary>
	/// Obtiene el NRC
	/// </summary>
	/// <returns></returns>

	int getNRC();

	/// <summary>
	/// Setea el NRC
	/// </summary>
	/// <param name="NRC"></param>

	void setNRC(int NRC);

	/// <summary>
	/// Obtiene los creditos
	/// </summary>
	/// <returns></returns>

	int getCreditos();

	/// <summary>
	/// Setea los creditos
	/// </summary>
	/// <param name="creditos"></param>

	void setCreditos(int creditos);

	/// <summary>
	/// Obtiene la lista de bloques
	/// </summary>
	/// <returns></returns>

	string* getBloques();

	/// <summary>
	/// Setea la lista de bloques
	/// </summary>
	/// <param name="bloques"></param>

	void setBloques(string* bloques);

	/// <summary>
	/// Obtiene la lista de dias
	/// </summary>
	/// <returns></returns>

	string* getDias();

	/// <summary>
	/// Setea la lista de dias
	/// </summary>
	/// <param name="dias"></param>

	void setDias(string* dias);

};


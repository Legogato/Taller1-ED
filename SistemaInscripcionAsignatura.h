#pragma once
#include <string>
class SistemaInscripcionAsignatura
{
public:
	/// <summary>
	/// Lee el archivo correspondiente
	/// </summary>
	void lecturaArchivo();
	void desplegarMenuInicial();
	void desplegarCatalogoAsignatura();
	void desplegarNombreAscendente();
	void desplegarNombreDescendente();
	void desplegarAsignaturasSinChoque();
	void desplegarParalelosAsignaturasInscritas();
	bool inscribirAsignatura();
	bool eliminarAsignatura();
	void verHorario();
	void salir();



};


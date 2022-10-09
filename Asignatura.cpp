#include "Asignatura.h"

Asignatura::Asignatura(string nombre, int NRC, int creditos, string bloques, string dias)
{
}

string Asignatura::getNombre()
{
	return this->nombre;
}

void Asignatura::setNombre(string nombre)
{
	this->nombre = nombre;
}

int Asignatura::getNRC()
{
	return 0;
}

void Asignatura::setNRC(int NRC)
{
}

int Asignatura::getCreditos()
{
	return 0;
}

void Asignatura::setCreditos(int creditos)
{
}

string* Asignatura::getBloques()
{
	return nullptr;
}

void Asignatura::setBloques(string* bloques)
{
}

string* Asignatura::getDias()
{
	return nullptr;
}

void Asignatura::setDias(string* dias)
{
}

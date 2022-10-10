#include "Asignatura.h"

Asignatura::Asignatura(string nombre, int NRC, int creditos, string bloques, string dias)
{

	this->nombre = nombre;
	this->NRC = nrc;
	this->creditos = creditos;
	this->bloques = bloques;
	this->dias = dias;

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
	return this->NRC;
}

void Asignatura::setNRC(int NRC)
{
	this->NRC = NRC;
}

int Asignatura::getCreditos()
{
	return this->creditos;
}

void Asignatura::setCreditos(int creditos)
{
	this->creditos = creditos;
}

string* Asignatura::getBloques()
{
	return this->bloques;
}

void Asignatura::setBloques(string* bloques)
{
	this->bloques = bloques;
}

string* Asignatura::getDias()
{
	return this->dias;
}

void Asignatura::setDias(string* dias)
{
	this->dias = dias;
}

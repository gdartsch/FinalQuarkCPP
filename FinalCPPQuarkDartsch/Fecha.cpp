#include "Fecha.h"

namespace Modelo
{
	Fecha::Fecha(int dia, int mes, int anio)
	{
		this->dia = dia;
		this->mes = mes;
		this->anio = anio;
	}

	Fecha::~Fecha()
	{

	}

	string Fecha::getFecha()
	{
		return (string)"Fecha: " + to_string(dia) + (string)"/" + to_string(mes) + (string)"/" + to_string(anio);
	}
}

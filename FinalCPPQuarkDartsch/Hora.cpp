#include "Hora.h"

namespace Modelo 
{
	Hora::Hora(int hora, int minuto, int segundo)
	{
		this->hora = hora;
		this->minuto = minuto;
		this->segundo = segundo;
	}

	Hora::~Hora()
	{

	}

	string Hora::getHora()
	{
		return (string)"Hora: " + to_string(hora) + (string)":" + to_string(minuto) + (string)":" + to_string(segundo);
	}
}
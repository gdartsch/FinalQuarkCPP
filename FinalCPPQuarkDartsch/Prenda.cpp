#include "Prenda.h"

namespace Modelo
{
	Prenda::Prenda(float precio) 
	{
		this->precio = precio;
	}

	Prenda::~Prenda()
	{

	}

	float Prenda::getPrecio()
	{
		return precio;
	}
}
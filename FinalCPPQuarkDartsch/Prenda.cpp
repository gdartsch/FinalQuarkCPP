#include "Prenda.h"

namespace Modelo
{
	Prenda::Prenda(float precioUnitario, Calidad calidad, int cantidadUnidadesEnStock)
	{
		this->precioUnitario = precioUnitario;
		this->calidad = calidad;
		this->cantidadUnidadesEnStock = cantidadUnidadesEnStock;
	}

	Prenda::~Prenda()
	{

	}

	float Prenda::getPrecio()
	{
		return precioUnitario;
	}

	Prenda::Calidad Prenda::getCalidad()
	{
		return calidad;
	}
}
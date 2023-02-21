#include "Prenda.h"
#include <string>
using namespace std;

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

	string Prenda::getCalidad()
	{
		return calidad == Calidad::premium ? "premium" : "standard";
	}

	void Prenda::setPrecio(float nuevoPrecio)
	{
		this->precioUnitario = nuevoPrecio;
	}

	int Prenda::getStock()
	{
		return cantidadUnidadesEnStock;
	}
}
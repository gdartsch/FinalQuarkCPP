#include "Pantalon.h"
#include <string>

using namespace std;

namespace Modelo
{
	Pantalon::Pantalon(float precioUnitario, Calidad calidad, int cantidadUnidadesEnStock, Tipo tipo) 
		: Prenda(precioUnitario, calidad, cantidadUnidadesEnStock)
	{
		this->precioUnitario = precioUnitario;
		this->calidad = calidad;
		this->cantidadUnidadesEnStock = cantidadUnidadesEnStock;
		this->tipo = tipo;
		this->precioUnitario = tipo == Pantalon::Tipo::comun ? precioUnitario : precioUnitario - (precioUnitario * 0.12f);
		this->precioUnitario = calidad == Prenda::Calidad::standard ? precioUnitario : precioUnitario * 1.3f;
	}

	Pantalon::~Pantalon()
	{

	}

	float Pantalon:: getPrecio()
	{
		return precioUnitario;
	}

	void Pantalon::setPrecio(float nuevoPrecio)
	{
		this->precioUnitario = nuevoPrecio;
		this->precioUnitario = tipo == Pantalon::Tipo::comun ? precioUnitario : precioUnitario - (precioUnitario * 0.12f);
		this->precioUnitario = calidad == Prenda::Calidad::standard ? precioUnitario : precioUnitario * 1.3f;
	}

	string Pantalon::getTipo()
	{
		return tipo == Tipo::chupin ? "chupin" : "comun";
	}
}
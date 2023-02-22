#include "Camisa.h"
#include <string>

using namespace std;

namespace Modelo
{
	Camisa::Camisa(float precioUnitario, Calidad calidad, int cantidadUnidadesEnStock, Manga manga, Cuello cuello)
		: Prenda(precioUnitario, calidad, cantidadUnidadesEnStock)
	{
		this->precioUnitario = precioUnitario;
		this->calidad = calidad;
		this->cantidadUnidadesEnStock = cantidadUnidadesEnStock;
		this->manga = manga;
		this->cuello = cuello;
		this->precioUnitario = manga == Camisa::Manga::larga ? precioUnitario : precioUnitario - (precioUnitario * 0.1f);
		this->precioUnitario = cuello == Camisa::Cuello::comun ? precioUnitario : precioUnitario * 1.03f;
		this->precioUnitario = calidad == Prenda::Calidad::standard ? precioUnitario : precioUnitario * 1.3f;
	}

	Camisa::~Camisa()
	{

	}

	float Camisa::getPrecio()
	{
		return precioUnitario;
	}

	void Camisa::setPrecio(float nuevoPrecio)
	{
		this->precioUnitario = nuevoPrecio;
		this->precioUnitario = manga == Camisa::Manga::larga ? precioUnitario : precioUnitario - (precioUnitario * 0.1f);
		this->precioUnitario = cuello == Camisa::Cuello::comun ? precioUnitario : precioUnitario * 1.03f;
		this->precioUnitario = calidad == Prenda::Calidad::standard ? precioUnitario : precioUnitario * 1.3f;
	}

	string Camisa::getManga ()
	{
		return manga == Manga::corta ? "corta" : "larga";
	}

	string Camisa::getCuello()
	{
		return cuello == Cuello::comun ? "comun" : "mao";
	}
}

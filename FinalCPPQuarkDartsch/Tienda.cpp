#include "Tienda.h"

namespace Modelo
{
	Tienda::Tienda(string nombre, string direccion)
	{
		this->nombre = nombre;
		this->direccion = direccion;
	}

	Tienda::~Tienda() 
	{

	}

	string Tienda::getNombre()
	{
		return nombre;
	}

	string Tienda::getDireccion()
	{
		return direccion;
	}

	vector<Prenda> Tienda::getPrendas()
	{
		return prendas;
	}

	void Tienda::addPrenda(Prenda* prenda) 
	{
		prendas.push_back(*prenda);
	}
}
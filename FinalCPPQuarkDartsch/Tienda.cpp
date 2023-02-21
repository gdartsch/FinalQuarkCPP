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

	void Tienda::addPrenda(shared_ptr <Prenda> prenda)
	{
		prendas.push_back(*prenda);
	}

	vector<Camisa> Tienda::getCamisas()
	{
		return camisas;
	}

	vector<Pantalon> Tienda::getPantalones()
	{
		return pantalones;
	}

	void Tienda::addCamisa(shared_ptr <Camisa> camisa)
	{
		camisas.push_back(*camisa);
	}

	void Tienda::addPantalon(shared_ptr <Pantalon> pantalon)
	{
		pantalones.push_back(*pantalon);
	}
}
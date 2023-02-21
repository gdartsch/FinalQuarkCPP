#include "Vendedor.h"

namespace Modelo
{
	Vendedor::Vendedor(string nombre, string apellido, int codigoDeVendedor)
	{
		this->nombre = nombre;
		this->apellido = apellido;
		this->codigoDeVendedor = codigoDeVendedor;
	}

	Vendedor::~Vendedor() 
	{

	}

	string Vendedor::getNombre()
	{
		return nombre;
	}

	string Vendedor::getApellido()
	{
		return apellido;
	}

	int Vendedor::getCodigoVendedor()
	{
		return codigoDeVendedor;
	}

	vector<Cotizacion> Vendedor::getCotizaciones()
	{
		return cotizaciones;
	}

	void Vendedor::createCotizacion(int numeroDeIdentificacion,
		Fecha* fechaCotizacion, Hora* horaCotizacion,
		Prenda* prendaCotizada, int unidadesCotizadas)
	{
		Cotizacion *nuevaCotizacion = new Cotizacion(
												numeroDeIdentificacion, 
												fechaCotizacion, 
												horaCotizacion,
												codigoDeVendedor,
												prendaCotizada,
												unidadesCotizadas);

		cotizaciones.push_back(*nuevaCotizacion);
	}
}
#include "Vendedor.h"

namespace Modelo
{
	Vendedor::Vendedor(string nombre, string apellido, int codigoDeVendedor, shared_ptr<Tienda> tienda)
	{
		this->nombre = nombre;
		this->apellido = apellido;
		this->codigoDeVendedor = codigoDeVendedor;
		this->tienda = tienda;
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

	void Vendedor::createCotizacionPantalon(int numeroDeIdentificacion,
		string fechaCotizacion,
		shared_ptr<Pantalon> prendaCotizada, int unidadesCotizadas)
	{
		shared_ptr<Cotizacion> nuevaCotizacion = make_shared<Cotizacion>(
			numeroDeIdentificacion, 
			prendaCotizada,
			unidadesCotizadas,
			fechaCotizacion);

		cotizaciones.push_back(*nuevaCotizacion);
	}

	void Vendedor::createCotizacionCamisa(int numeroDeIdentificacion,
		string fechaCotizacion,
		shared_ptr<Camisa> prendaCotizada, int unidadesCotizadas)
	{
		shared_ptr<Cotizacion> nuevaCotizacion = make_shared<Cotizacion>(
			numeroDeIdentificacion,
			prendaCotizada,
			unidadesCotizadas,
			fechaCotizacion);

		cotizaciones.push_back(*nuevaCotizacion);
	}

	shared_ptr<Tienda> Vendedor::getTienda()
	{
		return tienda;
	}
}
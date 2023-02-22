#include "Cotizacion.h"

namespace Modelo
{
	Cotizacion::Cotizacion(int codigoDeVendedor,
		shared_ptr<Pantalon> pantalonCotizado, int unidadesCotizadas, string fechaCotizacion)
	{
		numeroDeIdentificacion++;
		this->numIdentificacion = numeroDeIdentificacion;
		this->fechaCotizacion = fechaCotizacion;
		this->codigoDeVendedor = codigoDeVendedor;
		this->pantalonCotizado = pantalonCotizado;
		this->unidadesCotizadas = unidadesCotizadas;
		this->resultadoCalculoCotizacion = 0.0f;
		this->tipoDeItem = "Pantalon";
	}

	Cotizacion::Cotizacion(int codigoDeVendedor,
		shared_ptr<Camisa> camisaCotizada, int unidadesCotizadas, string fechaCotizacion)
	{
		numeroDeIdentificacion++;
		this->numIdentificacion = numeroDeIdentificacion;
		this->fechaCotizacion = fechaCotizacion;
		this->codigoDeVendedor = codigoDeVendedor;
		this->camisaCotizada = camisaCotizada;
		this->unidadesCotizadas = unidadesCotizadas;
		this->resultadoCalculoCotizacion = 0.0f;
		this->tipoDeItem = "Camisa";
	}

	Cotizacion::~Cotizacion()
	{

	}

	int Cotizacion::getNumeroDeIdentificacion()
	{
		return numIdentificacion;
	}

	string Cotizacion::getFechaCotizacion()
	{
		return fechaCotizacion;
	}

	int Cotizacion::getCodigoDeVendedor()
	{
		return codigoDeVendedor;
	}

	int Cotizacion::getUnidadesCotizadas()
	{
		return unidadesCotizadas;
	}

	float Cotizacion::getResultadoCalculoCotizacionPantalones()
	{
		return this->pantalonCotizado->getPrecio() * unidadesCotizadas;
	}

	float Cotizacion::getResultadoCalculoCotizacionCamisas()
	{
		return this->camisaCotizada->getPrecio() * unidadesCotizadas;
	}

	shared_ptr<Pantalon> Cotizacion::getPantalonCotizado()
	{
		return pantalonCotizado;
	}

	shared_ptr<Camisa> Cotizacion::getCamisaCotizada() 
	{
		return camisaCotizada;
	}

	string Cotizacion::getTipoDeItem()
	{
		return tipoDeItem;
	}
}
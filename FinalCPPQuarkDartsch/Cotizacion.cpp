#include "Cotizacion.h"

namespace Modelo
{
	Cotizacion::Cotizacion(int numeroDeIdentificacion, 
		Fecha* fechaCotizacion, Hora* horaCotizacion, int codigoDeVendedor,
		Prenda* prendaCotizada, int unidadesCotizadas)
	{
		this->numeroDeIdentificacion = numeroDeIdentificacion;
		this->fechaCotizacion = fechaCotizacion;
		this->horaCotizacion = horaCotizacion;
		this->codigoDeVendedor = codigoDeVendedor;
		this->prendaCotizada = prendaCotizada;
		this->unidadesCotizadas = unidadesCotizadas;
		this->resultadoCalculoCotizacion = 0.0f;
	}

	Cotizacion::~Cotizacion()
	{

	}

	int Cotizacion::getNumeroDeIdentificacion()
	{
		return numeroDeIdentificacion;
	}

	Fecha Cotizacion::getFechaCotizacion()
	{
		return *fechaCotizacion;
	}

	Hora Cotizacion::getHoraCotizacion()
	{
		return *horaCotizacion;
	}

	int Cotizacion::getCodigoDeVendedor()
	{
		return codigoDeVendedor;
	}

	Prenda Cotizacion::getPrendaCotizada()
	{
		return *prendaCotizada;
	}

	int Cotizacion::getUnidadesCotizadas()
	{
		return unidadesCotizadas;
	}

	float Cotizacion::getResultadoCalculoCotizacion()
	{
		return this->prendaCotizada->getPrecio() * unidadesCotizadas;
	}
}
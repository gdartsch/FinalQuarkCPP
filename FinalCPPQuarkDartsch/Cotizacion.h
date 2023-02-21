#pragma once

#include <string>
#include <vector>
#include "Fecha.h"
#include "Hora.h"
#include "Prenda.h"

using namespace std;

namespace Modelo
{
	class Fecha;
	class Hora;
	class Prenda;

	class Cotizacion
	{
	private:
		int numeroDeIdentificacion;
		Fecha* fechaCotizacion;
		Hora* horaCotizacion;
		int codigoDeVendedor;
		Prenda* prendaCotizada;
		int unidadesCotizadas;
		float resultadoCalculoCotizacion;
	public:
		Cotizacion(int, Fecha*, Hora*, int, Prenda*, int);
		virtual ~Cotizacion();
		int getNumeroDeIdentificacion();
		Fecha getFechaCotizacion();
		Hora getHoraCotizacion();
		int getCodigoDeVendedor();
		Prenda getPrendaCotizada();
		int getUnidadesCotizadas();
		float getResultadoCalculoCotizacion();
	};
}


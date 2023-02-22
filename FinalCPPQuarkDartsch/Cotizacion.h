#pragma once

#include <string>
#include <vector>
#include <memory>
#include "Prenda.h"
#include "Pantalon.h"
#include "Camisa.h"

using namespace std;

static int numeroDeIdentificacion = 000;

namespace Modelo
{
	class Prenda;
	class Camisa;
	class Pantalon;

	class Cotizacion
	{
	private:
		int codigoDeVendedor;
		int numIdentificacion;
		shared_ptr<Pantalon> pantalonCotizado;
		shared_ptr<Camisa> camisaCotizada;
		int unidadesCotizadas;
		float resultadoCalculoCotizacion;
		string fechaCotizacion;
		string tipoDeItem;
	public:
		
		Cotizacion(int, shared_ptr<Pantalon>, int, string);
		Cotizacion(int, shared_ptr<Camisa>, int, string);
		virtual ~Cotizacion();
		int getNumeroDeIdentificacion();
		string getFechaCotizacion();
		int getCodigoDeVendedor();
		int getUnidadesCotizadas();
		shared_ptr<Pantalon> getPantalonCotizado();
		shared_ptr<Camisa> getCamisaCotizada();
		float getResultadoCalculoCotizacionPantalones();
		float getResultadoCalculoCotizacionCamisas();
		string getTipoDeItem();
	};
}


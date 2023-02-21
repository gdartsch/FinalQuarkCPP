#pragma once

#include "Vendedor.h"
#include "Tienda.h"
//#include "Cotizacion.h"

namespace Presentador
{
	class Modelo::Vendedor;
	class Modelo::Tienda;
	//class Cotizacion;

	class Presentador
	{
	private:
		shared_ptr<Modelo::Vendedor> vendedor;
		shared_ptr<Modelo::Tienda> tienda;
	public:
		Presentador();
		~Presentador();
		void setup();
		void cotizarCamisa();
		void cotizarPantalon();
		void mostrarCotizaciones();
		void mostrarDebug();
		bool validarStockPantalones(int, Modelo::Prenda::Calidad, Modelo::Pantalon::Tipo);
		bool validarStockCamisas(int, Modelo::Prenda::Calidad, Modelo::Camisa::Cuello, Modelo::Camisa::Manga);
	};
}


#pragma once

#include <string>
#include <vector>
#include <memory>
#include "Cotizacion.h"
#include "Prenda.h"
#include "Tienda.h"

using namespace std;

namespace Modelo
{
	class Cotizacion;
	class Fecha;
	class Hora;
	class Prenda;
	class Tienda;

	class Vendedor
	{
	private:
		 string nombre;
		 string apellido;
		 int codigoDeVendedor;
		 vector<Cotizacion> cotizaciones;
		 shared_ptr<Tienda> tienda;
	public:
		Vendedor(string, string, int, shared_ptr<Tienda>);
		virtual ~Vendedor();
		string getNombre();
		string getApellido();
		int getCodigoVendedor();
		vector<Cotizacion> getCotizaciones();
		void createCotizacionPantalon(int, string, shared_ptr<Pantalon>, int);
		void createCotizacionCamisa(int, string, shared_ptr<Camisa>, int);
		shared_ptr<Tienda> getTienda();
	};
}



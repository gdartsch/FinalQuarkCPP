#pragma once

#include <string>
#include <vector>
#include "Cotizacion.h"
#include "Hora.h"
#include "Fecha.h"
#include "Prenda.h"

using namespace std;

namespace Modelo
{
	class Cotizacion;
	class Fecha;
	class Hora;
	class Prenda;

	class Vendedor
	{
	private:
		 string nombre;
		 string apellido;
		 int codigoDeVendedor;
		 vector<Cotizacion> cotizaciones;
	public:
		Vendedor(string, string, int);
		virtual ~Vendedor();
		string getNombre();
		string getApellido();
		int getCodigoVendedor();
		vector<Cotizacion> getCotizaciones();
		void createCotizacion(int, Fecha*, Hora*, Prenda*, int);
	};
}



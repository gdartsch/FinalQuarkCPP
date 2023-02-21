#pragma once

#include <string>
#include <vector>
#include "Vendedor.h"
#include "Prenda.h"

using namespace std;

namespace Modelo
{
	class Prenda;

	class Tienda
	{
	private:
		string nombre;
		string direccion;
		vector<Prenda> prendas;
	public:
		Tienda(string, string);
		virtual ~Tienda();
		string getNombre();
		string getDireccion();
		vector<Prenda> getPrendas();
		void addPrenda(Prenda*);
	};
}



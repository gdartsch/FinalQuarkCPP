#pragma once

#include <string>
#include <vector>
#include "Vendedor.h"
#include "Prenda.h"
#include "Camisa.h"
#include "Pantalon.h"

using namespace std;

namespace Modelo
{
	class Prenda;
	class Pantalon;
	class Camisa;

	class Tienda
	{
	private:
		string nombre;
		string direccion;
		vector<Prenda> prendas;
		vector<Camisa> camisas;
		vector<Pantalon> pantalones;
	public:
		Tienda(string, string);
		virtual ~Tienda();
		string getNombre();
		string getDireccion();
		vector<Prenda> getPrendas();
		vector<Camisa> getCamisas();
		vector<Pantalon> getPantalones();
		void addPrenda(shared_ptr <Prenda>);
		void addCamisa(shared_ptr <Camisa>);
		void addPantalon(shared_ptr <Pantalon>);
	};
}



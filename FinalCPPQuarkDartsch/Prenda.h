#pragma once

#include <string>

using namespace std;

namespace Modelo
{
	class Prenda
	{
	protected:
		float precioUnitario;
		int cantidadUnidadesEnStock;
	public:
		enum class Calidad { standard, premium } calidad;
		Prenda(float, Calidad, int);
		virtual ~Prenda();
		virtual float getPrecio();
		string getCalidad();
		virtual void setPrecio(float);
		int getStock();
	};
}


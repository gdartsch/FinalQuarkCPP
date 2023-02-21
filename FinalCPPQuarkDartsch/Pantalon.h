#pragma once
#include "Prenda.h"

namespace Modelo
{
	class Pantalon :
		public Prenda
	{
	public:
		enum class Tipo { comun, chupin } tipo;
		Pantalon(float, Calidad, int, Tipo);
		virtual ~Pantalon();
		float getPrecio() override;
		void setPrecio(float) override;
		string getTipo();
	};
}



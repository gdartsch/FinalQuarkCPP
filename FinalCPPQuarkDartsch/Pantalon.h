#pragma once
#include "Prenda.h"

namespace Modelo
{
	class Pantalon :
		public Prenda
	{
	private:
		enum class Tipo { comun, chupin } tipo;
	public:
		Pantalon(float, Calidad, int, Tipo);
		virtual ~Pantalon();
		float getPrecio() override;
	};
}



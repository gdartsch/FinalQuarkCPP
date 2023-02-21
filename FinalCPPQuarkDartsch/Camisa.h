#pragma once
#include "Prenda.h"

namespace Modelo
{
	class Camisa :
		public Prenda
	{
	private:
		enum class Manga { corta, larga } manga;
		enum class Cuello { comun, mao } cuello;
	public:
		Camisa(float, Calidad, int, Manga, Cuello);
		virtual ~Camisa();
		float getPrecio() override;
	};
}



#pragma once
#include "Prenda.h"

namespace Modelo
{
	class Camisa :
		public Prenda
	{	
	public:
		enum class Manga { corta, larga } manga;
		enum class Cuello { comun, mao } cuello;
		Camisa(float, Calidad, int, Manga, Cuello);
		virtual ~Camisa();
		float getPrecio() override;
		void setPrecio(float) override;
		string getManga();
		string getCuello();
	};
}



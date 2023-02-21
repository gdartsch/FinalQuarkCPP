#pragma once

namespace Modelo
{
	class Prenda
	{
	protected:
		float precioUnitario;
		enum class Calidad {standard, premium} calidad;
		int cantidadUnidadesEnStock;
	public:
		Prenda(float, Calidad, int);
		virtual ~Prenda();
		float getPrecio();
		Calidad getCalidad();
	};
}


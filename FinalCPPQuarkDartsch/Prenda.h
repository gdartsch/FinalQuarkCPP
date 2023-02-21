#pragma once

namespace Modelo
{
	class Prenda
	{
	protected:
		float precio;
	public:
		Prenda(float);
		virtual ~Prenda();
		float getPrecio();
	};
}


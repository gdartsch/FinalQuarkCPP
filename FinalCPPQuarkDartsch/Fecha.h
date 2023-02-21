#pragma once

#include <string>

using namespace std;

namespace Modelo
{
	class Fecha
	{
	private:
		int dia;
		int mes;
		int anio;
	public:
		Fecha(int, int, int);
		virtual ~Fecha();
		string getFecha();
	};
}



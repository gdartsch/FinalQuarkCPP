#pragma once

#include <string>

using namespace std;

namespace Modelo 
{
	class Hora
	{
	private:
		int hora;
		int minuto;
		int segundo;
	public:
		Hora(int, int, int);
		virtual ~Hora();
		string getHora();
	};
}



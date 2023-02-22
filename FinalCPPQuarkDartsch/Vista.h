#pragma once

#include <memory>
#include <iostream>
#include "Presentador.h"

using namespace std;

class Presentador;

class Vista
{
private: 
	shared_ptr<Presentador> presentador;
public:
	Vista();
	~Vista();
	void init(shared_ptr<Presentador>);
	void pantallaPrincipal();
	void mostrarHistorialCotizaciones();
	void procesoDeCotizacion();
};


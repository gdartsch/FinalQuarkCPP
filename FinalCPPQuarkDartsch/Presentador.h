#pragma once

#include "Vendedor.h"
#include "Tienda.h"
#include <memory>

class Modelo::Vendedor;
class Modelo::Tienda;
class Vista;

class Presentador
{
private:
	shared_ptr<Modelo::Vendedor> vendedor;
	shared_ptr<Modelo::Tienda> tienda;
	shared_ptr<Vista> vista;
public:
	Presentador();
	~Presentador();
	void setup();
	void cotizarCamisa();
	void cotizarPantalon();
	void mostrarCotizaciones();
	void mostrarDebug();
	int validarStockPantalones(Modelo::Prenda::Calidad, Modelo::Pantalon::Tipo);
	int validarStockCamisas(Modelo::Prenda::Calidad, Modelo::Camisa::Cuello, Modelo::Camisa::Manga);
	shared_ptr<Modelo::Vendedor> getVendedor();
	void setVista(shared_ptr<Vista>);
};


#include "Presentador.h"
#include <memory>
#include "Camisa.h"
#include "Pantalon.h"
#include <iostream>

using namespace std;

namespace Presentador
{
	Presentador::Presentador()
	{
		tienda = make_shared<Modelo::Tienda>("Tienda de Ropa The Pantalones", "Gerli 344");
		vendedor = make_shared<Modelo::Vendedor>("Juan", "Vendez", 21315, tienda);
	}

	Presentador::~Presentador()
	{

	}

	void Presentador::setup()
	{
		shared_ptr <Modelo::Camisa> camisaCortaMaoStandard = 
			make_shared<Modelo::Camisa>(
				0.0f, 
				Modelo::Prenda::Calidad::standard, 
				100, 
				Modelo::Camisa::Manga::corta,
				Modelo::Camisa::Cuello::mao);

		shared_ptr <Modelo::Camisa> camisaCortaMaoPremium =
			make_shared<Modelo::Camisa>(
				0.0f,
				Modelo::Prenda::Calidad::premium,
				100,
				Modelo::Camisa::Manga::corta,
				Modelo::Camisa::Cuello::mao);

		shared_ptr <Modelo::Camisa> camisaCortaComunStandard =
			make_shared<Modelo::Camisa>(
				0.0f,
				Modelo::Prenda::Calidad::standard,
				150,
				Modelo::Camisa::Manga::corta,
				Modelo::Camisa::Cuello::comun);

		shared_ptr <Modelo::Camisa> camisaCortaComunPremium =
			make_shared<Modelo::Camisa>(
				0.0f,
				Modelo::Prenda::Calidad::premium,
				150,
				Modelo::Camisa::Manga::corta,
				Modelo::Camisa::Cuello::comun);

		shared_ptr <Modelo::Camisa> camisaLargaMaoStandard =
			make_shared<Modelo::Camisa>(
				0.0f,
				Modelo::Prenda::Calidad::standard,
				75,
				Modelo::Camisa::Manga::larga,
				Modelo::Camisa::Cuello::mao);

		shared_ptr <Modelo::Camisa> camisaLargaMaoPremium =
			make_shared<Modelo::Camisa>(
				0.0f,
				Modelo::Prenda::Calidad::premium,
				75,
				Modelo::Camisa::Manga::larga,
				Modelo::Camisa::Cuello::mao);

		shared_ptr <Modelo::Camisa> camisaLargaComunStandard =
			make_shared<Modelo::Camisa>(
				0.0f,
				Modelo::Prenda::Calidad::standard,
				175,
				Modelo::Camisa::Manga::larga,
				Modelo::Camisa::Cuello::comun);

		shared_ptr <Modelo::Camisa> camisaLargaComunPremium =
			make_shared<Modelo::Camisa>(
				0.0f,
				Modelo::Prenda::Calidad::premium,
				175,
				Modelo::Camisa::Manga::larga,
				Modelo::Camisa::Cuello::comun);

		shared_ptr <Modelo::Pantalon> pantalonChupinStandard =
			make_shared<Modelo::Pantalon>(
				0.0f,
				Modelo::Prenda::Calidad::standard,
				750,
				Modelo::Pantalon::Tipo::chupin);

		shared_ptr <Modelo::Pantalon> pantalonChupinPremium =
			make_shared<Modelo::Pantalon>(
				0.0f,
				Modelo::Prenda::Calidad::premium,
				750,
				Modelo::Pantalon::Tipo::chupin);

		shared_ptr <Modelo::Pantalon> pantalonComunStandard =
			make_shared<Modelo::Pantalon>(
				0.0f,
				Modelo::Prenda::Calidad::standard,
				250,
				Modelo::Pantalon::Tipo::comun);

		shared_ptr <Modelo::Pantalon> pantalonComunPremium =
			make_shared<Modelo::Pantalon>(
				0.0f,
				Modelo::Prenda::Calidad::premium,
				250,
				Modelo::Pantalon::Tipo::comun);

		vendedor.get()->getTienda().get()->addCamisa(camisaCortaMaoStandard);
		vendedor.get()->getTienda().get()->addCamisa(camisaCortaMaoPremium);
		vendedor.get()->getTienda().get()->addCamisa(camisaCortaComunStandard);
		vendedor.get()->getTienda().get()->addCamisa(camisaCortaComunPremium);
		vendedor.get()->getTienda().get()->addCamisa(camisaLargaMaoStandard);
		vendedor.get()->getTienda().get()->addCamisa(camisaLargaMaoPremium);
		vendedor.get()->getTienda().get()->addCamisa(camisaLargaComunStandard);
		vendedor.get()->getTienda().get()->addCamisa(camisaLargaComunPremium);
		vendedor.get()->getTienda().get()->addPantalon(pantalonChupinStandard);
		vendedor.get()->getTienda().get()->addPantalon(pantalonChupinPremium);
		vendedor.get()->getTienda().get()->addPantalon(pantalonComunStandard);
		vendedor.get()->getTienda().get()->addPantalon(pantalonComunPremium);		
	}

	void Presentador::cotizarCamisa()
	{

	}

	void Presentador::cotizarPantalon()
	{

	}

	void Presentador::mostrarCotizaciones()
	{
		system("cls");

		cout << "COTIZADOR EXPRESS - HISTORIAL DE COTIZACIONES" << endl
			<< "--------------------------------------------" << endl
			<< "Presiona 3 para volver al menú principal" << endl
			<< "--------------------------------------------" << endl;

		for (auto item : vendedor.get()->getCotizaciones())
		{
			cout << "Número de identificación: " << item.getNumeroDeIdentificacion() << endl
				<< "Fecha y hora de la cotización: " << item.getFechaCotizacion().getFecha()
				<< item.getHoraCotizacion().getHora() << endl
				<< "Prenda cotizada: " << item.getPrendaCotizada().getCalidad() << endl //cambiar por los detalles que corresponden
				<< "Precio unitario: " << item.getPrendaCotizada().getPrecio() << endl
				<< "Cantidad de unidades cotizadas: " << item.getUnidadesCotizadas() << endl
				<< "Precio final: " << item.getPrendaCotizada().getPrecio() * item.getUnidadesCotizadas() << endl
				<< endl << endl;
		}

		cout << "--------------------------------------------" << endl
			<< "Presiona 3 para volver al menú principal" << endl
			<< "--------------------------------------------" << endl;
	}

	void Presentador::mostrarDebug()
	{
		for (auto item : vendedor.get()->getTienda().get()->getCamisas())
		{
			cout << "Camisas cuello " << item.getCuello() 
				<< " con manga " << item.getManga() 
				<< " de calidad " << item.getCalidad() 
				<< " sotck: " << item.getStock() << endl;
		}

		for (auto item : vendedor.get()->getTienda().get()->getPantalones())
		{
			cout << "Pantalones tipo " << item.getTipo()
				<< " de calidad " << item.getCalidad()
				<< " sotck: " << item.getStock() << endl;
		}
	}

	bool Presentador::validarStockPantalones(int stockADeducir, Modelo::Prenda::Calidad calidad, Modelo::Pantalon::Tipo tipo)
	{
		for (auto item : vendedor.get()->getTienda().get()->getPantalones())
		{
			if (item.calidad != calidad) continue;
			if (item.tipo != tipo) continue;
			if (item.getStock() >= stockADeducir)
				return true;
		}
		return false;
	}

	bool Presentador::validarStockCamisas(int stockADeducir, Modelo::Prenda::Calidad calidad, Modelo::Camisa::Cuello cuello, Modelo::Camisa::Manga manga)
	{
		for (auto item : vendedor.get()->getTienda().get()->getCamisas())
		{
			if (item.calidad != calidad) continue;
			if (item.cuello != cuello) continue;
			if (item.manga != manga) continue;
			if (item.getStock() >= stockADeducir)
				return true;
		}
		return false;
	}
}
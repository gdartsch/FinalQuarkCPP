#pragma warning(disable : 4996)

#include <iostream>
#include <chrono>
#include <ctime>
#include "Presentador.h"
#include "Vista.h"

using namespace std;

Presentador::Presentador()
{
	tienda = make_shared<Modelo::Tienda>("Tienda de Ropa The Pantalones", "Gerli 344");
	vendedor = make_shared<Modelo::Vendedor>("Juan", "Vendez", 21315, tienda);
}

Presentador::~Presentador()
{

}

void Presentador::setVista(shared_ptr<Vista> vista)
{
	this->vista = vista;
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

void Presentador::procesoCotizacion()
{
	bool error = false;
	string input;

	string tipo;
	Modelo::Camisa::Manga _manga = Modelo::Camisa::Manga::corta;
	Modelo::Camisa::Cuello _cuello = Modelo::Camisa::Cuello::comun;
	Modelo::Pantalon::Tipo _tipo = Modelo::Pantalon::Tipo::comun;
	Modelo::Prenda::Calidad _calidad = Modelo::Prenda::Calidad::standard;
	double _precioUnitario;
	int _cantidad;

	do
	{
		do
		{
			system("cls");

			if (error)
			{
				cout << "ERROR: SELECCIONE UNA OPCIÓN VÁLIDA" << endl
					<< "--------------------------------------------" << endl;
			}

			cout << "COTIZADOR EXPRESS - COTIZAR" << endl
				<< "--------------------------------------------" << endl
				<< "Presiona 3 para volver al menú principal" << endl
				<< "--------------------------------------------" << endl;

			cout << "PASO 1: Selecciona la prenda a cotizar" << endl << endl
				<< "1) Camisa" << endl << endl
				<< "2) Pantalón" << endl << endl;

			cout << "--------------------------------------------" << endl
				<< "Presiona 3 para volver al menú principal" << endl
				<< "--------------------------------------------" << endl;

			cin >> input;

			if (input == "1") {

				tipo = "Camisa";
				input = "";
				error = false;

				do
				{
					system("cls");

					if (error)
					{
						cout << "ERROR: SELECCIONE UNA OPCIÓN VÁLIDA" << endl
							<< "--------------------------------------------" << endl;
					}

					cout << "COTIZADOR EXPRESS - COTIZAR" << endl
						<< "--------------------------------------------" << endl
						<< "Presiona 3 para volver al menú principal" << endl
						<< "--------------------------------------------" << endl;

					cout << "PASO 2.a: La camisa a cotizar, ¿Es manga corta?" << endl << endl
						<< "1) Sí" << endl << endl
						<< "2) No" << endl << endl;

					cout << "--------------------------------------------" << endl
						<< "Presiona 3 para volver al menú principal" << endl
						<< "--------------------------------------------" << endl;

					cin >> input;

					if (input == "1")
					{
						_manga = Modelo::Camisa::Manga::corta;
						error = false;
					}
					else if (input == "2")
					{
						_manga = Modelo::Camisa::Manga::larga;
						error = false;
					}
					else if (input == "3")
					{
						vista.get()->pantallaPrincipal();
						return;
					}
					else
						error = true;

					if (!error)
					{
						input = "";
						break;
					}					

				} while (true);

				do
				{
					system("cls");

					if (error)
					{
						cout << "ERROR: SELECCIONE UNA OPCIÓN VÁLIDA" << endl
							<< "--------------------------------------------" << endl;
					}

					cout << "COTIZADOR EXPRESS - COTIZAR" << endl
						<< "--------------------------------------------" << endl
						<< "Presiona 3 para volver al menú principal" << endl
						<< "--------------------------------------------" << endl;

					cout << "PASO 2.b: La camisa a cotizar, ¿Es cuello Mao?" << endl << endl
						<< "1) Sí" << endl << endl
						<< "2) No" << endl << endl;

					cout << "--------------------------------------------" << endl
						<< "Presiona 3 para volver al menú principal" << endl
						<< "--------------------------------------------" << endl;

					cin >> input;

					if (input == "1")
					{
						_cuello = Modelo::Camisa::Cuello::mao;
					}
					else if (input == "2")
					{
						_cuello = Modelo::Camisa::Cuello::comun;
					}
					else if (input == "3")
					{
						vista.get()->pantallaPrincipal();
						return;
					}
					else
						error = true;

					if (!error)
					{
						input = "";
						error = false;
						break;
					}

				} while (true);
			}
			else if (input == "2")
			{
				tipo = "Pantalon";
				input = "";
				error = false;

				do
				{
					system("cls");

					if (error)
					{
						cout << "ERROR: SELECCIONE UNA OPCIÓN VÁLIDA" << endl
							<< "--------------------------------------------" << endl;
					}

					cout << "COTIZADOR EXPRESS - COTIZAR" << endl
						<< "--------------------------------------------" << endl
						<< "Presiona 3 para volver al menú principal" << endl
						<< "--------------------------------------------" << endl;

					cout << "PASO 2: El pantalón a cotizar, ¿Es chupín?" << endl << endl
						<< "1) Sí" << endl << endl
						<< "2) No" << endl << endl;

					cout << "--------------------------------------------" << endl
						<< "Presiona 3 para volver al menú principal" << endl
						<< "--------------------------------------------" << endl;

					cin >> input;

					if (input == "1")
					{
						_tipo = Modelo::Pantalon::Tipo::chupin;
						error = false;
					}
					else if (input == "2")
					{
						_tipo = Modelo::Pantalon::Tipo::comun;
						error = false;
					}
					else if (input == "3")
					{
						vista.get()->pantallaPrincipal();
						return;
					}
					else
						error = true;

					if (!error)
					{
						input = "";
						break;
					}

				} while (true);
			}
			else if (input == "3")
			{
				vista.get()->pantallaPrincipal();
				return;
			}
			else
				error = true;

			if (!error)
			{
				input = "";
				break;
			}

		} while (true);

		error = false;

		do
		{
			system("cls");

			if (error)
			{
				cout << "ERROR: SELECCIONE UNA OPCIÓN VÁLIDA" << endl
					<< "--------------------------------------------" << endl;
			}

			cout << "COTIZADOR EXPRESS - COTIZAR" << endl
				<< "--------------------------------------------" << endl
				<< "Presiona 3 para volver al menú principal" << endl
				<< "--------------------------------------------" << endl;

			cout << "PASO 3: Seleccione la cantidad de la prenda" << endl << endl
				<< "1) Standard" << endl << endl
				<< "2) Premium" << endl << endl;

			cout << "--------------------------------------------" << endl
				<< "Presiona 3 para volver al menú principal" << endl
				<< "--------------------------------------------" << endl;

			cin >> input;

			if (input == "1")
			{
				_calidad = Modelo::Prenda::Calidad::standard;
				error = false;
			}
			else if (input == "2")
			{
				_calidad = Modelo::Prenda::Calidad::premium;
				error = false;
			}
			else if (input == "3")
			{
				vista.get()->pantallaPrincipal();
				return;
			}
			else
				error = true;

			if (!error)
			{
				input = "";
				break;
			}

		} while (true);

		error = false;

		do
		{
			system("cls");

			if (error)
			{
				cout << "ERROR: SELECCIONE UNA OPCIÓN VÁLIDA" << endl
					<< "--------------------------------------------" << endl;
			}

			try
			{
				cout << "COTIZADOR EXPRESS - COTIZAR" << endl
					<< "--------------------------------------------" << endl;

				cout << "PASO 4: Ingrese el precio unitario de la prenda" << endl << endl;

				cout << "--------------------------------------------" << endl;

				cin >> input;

				_precioUnitario = stof(input);

				input = "";
				error = false;
				break;
			}
			catch (const std::exception&)
			{
				error = true;
			}

			if (!error)
			{
				input = "";
				break;
			}

		} while (true);
			
		error = false;

		do
		{
			system("cls");

			if (error)
			{
				cout << "ERROR: SELECCIONE UNA OPCIÓN VÁLIDA" << endl
					<< "--------------------------------------------" << endl;
			}

			try
			{
				int cantidadDisponible = tipo == "Pantalon" ?
					validarStockPantalones(_calidad, _tipo) :
					validarStockCamisas(_calidad, _cuello, _manga);

				cout << "COTIZADOR EXPRESS - COTIZAR" << endl
					<< "--------------------------------------------" << endl
					<< "INFORMACIÓN:" << endl
					<< "EXISTE " 
					<< cantidadDisponible
					<< " CANTIDAD DE UNIDADES EN STOCK DE LA PRENDA SELECCIONADA" << endl << endl;

				cout << "PASO 5: Ingrese la cantidad de unidades a cotizar" << endl << endl;

				cout << "--------------------------------------------" << endl;

				cin >> input;

				int cantidadTemp = stoi(input);

				if (cantidadDisponible >= cantidadTemp)
				{
					_cantidad = cantidadTemp;
					error = false;
					break;
				}	
				else
				{
					error = true;
				}			
			}
			catch (const std::exception&)
			{
				error = true;
			}

			if (!error)
			{
				input = "";
				break;
			}

		} while (true);

		if (input == "3") 
		{
			vista.get()->pantallaPrincipal();
			return;
		}
			
		time_t current_dt = time(0);

		char* fechaYhora = ctime(&current_dt);

		if (tipo == "Pantalon")
		{
			shared_ptr<Modelo::Pantalon> newPantalon = make_shared<Modelo::Pantalon>(_precioUnitario, _calidad, _cantidad, _tipo);
			newPantalon.get()->setPrecio(_precioUnitario);
			vendedor.get()->createCotizacionPantalon(vendedor.get()->getCodigoVendedor(), fechaYhora, newPantalon, _cantidad);
		}
		else
		{
			shared_ptr<Modelo::Camisa> newCamisa = make_shared<Modelo::Camisa>(_precioUnitario, _calidad, _cantidad, _manga, _cuello);
			newCamisa.get()->setPrecio(_precioUnitario);
			vendedor.get()->createCotizacionCamisa(vendedor.get()->getCodigoVendedor(), fechaYhora, newCamisa, _cantidad);
		}

		if (!error)
		{
			input = "";
			break;
		}

	} while (true);

	vista.get()->pantallaPrincipal();
}

void Presentador::cotizarPantalon()
{

}

void Presentador::mostrarCotizaciones()
{
	string output;
	for (auto item : vendedor.get()->getCotizaciones())
	{
		string detalles;
		float precio;

		if (item.getTipoDeItem() == "Camisa")
		{
			string tipoCuello = item.getCamisaCotizada().get()->getCuello() == "comun" ? "Cuello Común - " : "Cuello Mao - ";
			string tipoManga = item.getCamisaCotizada().get()->getManga() == "corta" ? "Manga corta - " : "Cuello larga - ";
			string calidad = item.getCamisaCotizada().get()->getCalidad() == "premium" ? "Premium" : "Standard";
			detalles = "Camisa - " + tipoCuello + tipoManga + calidad;
			precio = item.getCamisaCotizada().get()->getPrecio();
		}
		else
		{
			string tipoPantalon = item.getPantalonCotizado().get()->getTipo() == "comun" ? "Común - " : "Chupín - ";
			string calidad = item.getPantalonCotizado().get()->getCalidad() == "premium" ? "Premium" : "Standard";
			detalles = "Pantalón - " + tipoPantalon + calidad;
			precio = item.getPantalonCotizado().get()->getPrecio();
		}

		cout << "Número de identificación: " << item.getNumeroDeIdentificacion() << endl
			<< "Fecha y hora de la cotización: " << item.getFechaCotizacion() << endl
			<< "Código del vendedor: " << vendedor.get()->getCodigoVendedor() << endl
			<< "Prenda cotizada: "
			<< detalles
			<< endl
			<< "Precio unitario: " << precio << endl
			<< "Cantidad de unidades cotizadas: " << item.getUnidadesCotizadas() << endl
			<< "Precio final: " << precio * item.getUnidadesCotizadas() << endl
			<< endl << endl;
	}
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

int Presentador::validarStockPantalones(Modelo::Prenda::Calidad calidad, Modelo::Pantalon::Tipo tipo)
{
	int cantidad = 0;
	for (auto item : vendedor.get()->getTienda().get()->getPantalones())
	{
		if (item.calidad != calidad) continue;
		if (item.tipo != tipo) continue;
		cantidad += item.getStock();
	}
	return cantidad;
}

int Presentador::validarStockCamisas(Modelo::Prenda::Calidad calidad, Modelo::Camisa::Cuello cuello, Modelo::Camisa::Manga manga)
{
	int cantidad = 0;
	for (auto item : vendedor.get()->getTienda().get()->getCamisas())
	{
		if (item.calidad != calidad) continue;
		if (item.cuello != cuello) continue;
		if (item.manga != manga) continue;
			
		cantidad += item.getStock();
	}
	return cantidad;
}

shared_ptr<Modelo::Vendedor> Presentador::getVendedor()
{
	return vendedor;
}
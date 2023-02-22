#include "Vista.h"

Vista::Vista()
{
		
}

Vista::~Vista()
{

}

void Vista::init(shared_ptr<Presentador> presentador)
{
	this->presentador = presentador;
	this->presentador.get()->setup();
	pantallaPrincipal();
}

void Vista::pantallaPrincipal()
{
	bool error = false;
	string input;

	do
	{
		system("cls");

		if (error)
		{
			cout << "ERROR: SELECCIONE UNA OPCIÓN VÁLIDA" << endl
				<< "--------------------------------------------" << endl;
		}

		cout << "COTIZADOR EXPRESS - MENÚ PRINCIPAL" << endl
			<< "--------------------------------------------" << endl
			<< presentador.get()->getVendedor().get()->getTienda().get()->getNombre() << " | "
			<< presentador.get()->getVendedor().get()->getTienda().get()->getDireccion() << endl
			<< "--------------------------------------------" << endl
			<< presentador.get()->getVendedor().get()->getNombre() << " " << presentador.get()->getVendedor().get()->getApellido() << " | "
			<< presentador.get()->getVendedor().get()->getCodigoVendedor() << endl
			<< "--------------------------------------------" << endl << endl
			<< "SELECCIONE UNA OPCIÓN DEL MENU:" << endl << endl
			<< "1) Historial de Cotizaciones" << endl << endl
			<< "2) Realizar cotización" << endl << endl
			<< "3) Salir" << endl;

		cin >> input;

		if (input == "1" || input == "2" || input == "3")
			break;
		else
			error = true;

	} while (true);

	if (input == "1")
		mostrarHistorialCotizaciones();
	else if (input == "2")
	{
		procesoDeCotizacion();
	}	
}

void Vista::mostrarHistorialCotizaciones()
{
	bool error = false;
	string input;

	do
	{
		system("cls");

		if (error)
		{
			cout << "ERROR: SELECCIONE UNA OPCIÓN VÁLIDA" << endl
				<< "--------------------------------------------" << endl;
		}

		cout << "COTIZADOR EXPRESS - HISTORIAL DE COTIZACIONES" << endl
			<< "--------------------------------------------" << endl
			<< "Presiona 3 para volver al menú principal" << endl
			<< "--------------------------------------------" << endl;

		presentador.get()->mostrarCotizaciones();

		cout << "--------------------------------------------" << endl
			<< "Presiona 3 para volver al menú principal" << endl
			<< "--------------------------------------------" << endl;

		cin >> input;

		if (input == "3")
			break;
		else
			error = true;

	} while (true);

	pantallaPrincipal();
}

void Vista::procesoDeCotizacion()
{
	presentador.get()->procesoCotizacion();
}
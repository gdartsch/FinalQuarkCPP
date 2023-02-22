#include <iostream>
#include "Presentador.h"
#include "Vista.h"


int main()
{
    shared_ptr<Vista> vista = make_shared<Vista>();
    shared_ptr<Presentador> presentador = make_shared<Presentador>();
    presentador.get()->setVista(vista);
    vista.get()->init(presentador);
}

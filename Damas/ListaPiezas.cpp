#include "ListaPiezas.h"



ListaPiezas::ListaPiezas() {
	primero = actual = NULL;
}




void ListaPiezas::agregar(Ficha*f) {

	primero = new NodoPiezas(f, primero);

}



bool ListaPiezas::Eliminar(Ficha*f) {


	return true;

}

ListaPiezas::~ListaPiezas()
{
}

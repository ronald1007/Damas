#pragma once
#include"NodoPiezas.h"
class ListaPiezas {
private:
	NodoPiezas*primero;
	NodoPiezas*actual;

public:
	ListaPiezas();
	void agregar(Ficha*);
	bool Eliminar(Ficha*);

	~ListaPiezas();
};

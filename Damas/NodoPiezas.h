#pragma once
#include"Ficha.h"
class NodoPiezas {

	Ficha*Contenido;

	NodoPiezas*sig;
public:
	NodoPiezas(Ficha*, NodoPiezas*);
	Ficha* getContenido();
	NodoPiezas* getSigNodo();
	void setContenido(Ficha*);
	void setSigNdo(NodoPiezas*);

	~NodoPiezas();
};



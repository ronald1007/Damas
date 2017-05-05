#pragma once
#include"nodoJugador.h"




class ListaJugador {

private:
	NodoJugador*primero;
	NodoJugador*actual;
public:
	ListaJugador();
	void agregarJugador(Jugador*);

	~ListaJugador();





};


#pragma once
#include"Jugador.h"

class NodoJugador {

private:
	Jugador*dato;
	NodoJugador*siguienteNdo;

public:
	NodoJugador(NodoJugador*, Jugador*);
	Jugador* getDato();
	NodoJugador* getSiguiente();
	void setDato(Jugador*);
	void setSiguiente(NodoJugador*);

	~NodoJugador();
};

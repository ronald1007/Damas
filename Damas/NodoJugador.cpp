#include"nodoJugador.h"


NodoJugador::NodoJugador(NodoJugador* s, Jugador*d) {

	this->dato = d;
	this->siguienteNdo = s;

}

Jugador * NodoJugador::getDato() {
	return this->dato;
}

NodoJugador * NodoJugador::getSiguiente() {
	return this->siguienteNdo;
}

void  NodoJugador::setDato(Jugador * d) {
	this->dato = d;
}

void  NodoJugador::setSiguiente(NodoJugador * s) {
	this->siguienteNdo = s;
}



NodoJugador::~NodoJugador()
{
}
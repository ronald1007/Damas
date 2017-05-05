#include"ListaJugador.h"




ListaJugador::ListaJugador() {

	primero = actual = NULL;

}
void ListaJugador::agregarJugador(Jugador*a) {


	primero = new NodoJugador(primero, a);
}


ListaJugador::~ListaJugador()
{
}
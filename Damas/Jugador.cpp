#include "Jugador.h"



Jugador::Jugador(string n, string c) {
	nombre = n;
	color = c;
	listPiezas = new ListaPiezas();
}



string Jugador::getNombre() { 
	
	return nombre; 

}
string Jugador::getColor() { 
	
	
	return color; 

}
void Jugador::setNombre(string a) { 
	
	nombre = a; 

}

void Jugador::setColor(string a) { 
	
	color = a; 


}


void Jugador::agregarFicha(Ficha*f) { 
	
	listPiezas->agregar(f); 


}
bool Jugador::elimarFicha(Ficha*f) {
	
	
	return listPiezas->Eliminar(f); 


}



Jugador::~Jugador()
{
}
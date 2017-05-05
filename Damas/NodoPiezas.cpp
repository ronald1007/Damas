#include "NodoPiezas.h"



NodoPiezas::NodoPiezas(Ficha*f, NodoPiezas* s) {
	Contenido = f;
	sig = s;


}

Ficha*NodoPiezas::getContenido() { 
	return Contenido; 

}

NodoPiezas* NodoPiezas::getSigNodo() {
	
	return sig; 

}
void NodoPiezas::setContenido(Ficha* f) { 
	
	Contenido = f; 

}
void NodoPiezas::setSigNdo(NodoPiezas* s) { 
	
	sig = s; 

}

NodoPiezas::~NodoPiezas()
{
}
#include "FichaRey.h"



FichaRey::FichaRey(string a, string b, char c, int c1, int c2) :Ficha(a, b, c, c1, c2)
{
}




bool  FichaRey::movida(int a, int b) {

	return true;
}

string FichaRey::getColor() {

	return getcolor();
}



string FichaRey::getNombre() {

	return getnombre();

}

char  FichaRey::getCaracterRepresante() {

	return getCaracterRepresantes();
}


int  FichaRey::getCoord1() { 
	
	return getCoord11();

}

int  FichaRey::getCoord2() {
	
	return getCoord22(); 

}

void  FichaRey::setCaracterRepresante(char d) {
	
	setCaracterRepresante1(d);

}


FichaRey::~FichaRey()
{
}

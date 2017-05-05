#include "Ficha.h"



Ficha::Ficha(string a, string b, char c, int c1, int c2)
{

	nombre = a;
	color = b;
	caracterRepresentante = c;
	coord1 = c1;
	coord2 = c2;

}



string Ficha::getcolor() { return color;

}


string Ficha::getnombre() { 
	
	return nombre;

}
char Ficha::getCaracterRepresantes() {
	
	return caracterRepresentante; 

}
int Ficha::getCoord11() {
	
	return coord1;

}
int Ficha::getCoord22() {
	
	
	return coord2; 


}
void  Ficha::setCaracterRepresante1(char d) { 
	
	caracterRepresentante = d; 



}
void Ficha::setCord1(int a) { 
	
	coord1 = a; 

}
void Ficha::setCord2(int a) { 
	
	
	coord2 = a; 


}
void Ficha::setColor(string a) {
	
	
	color = a; 

}

bool Ficha::movida(int a, int b) {

	return true;
}

Ficha::~Ficha()
{
}
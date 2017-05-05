#include "FichaNormal.h"



FichaNormal::FichaNormal(string a, string b, char c, int c1, int c2) :Ficha(a, b, c, c1, c2)
{
}


FichaNormal::~FichaNormal()
{
}




bool  FichaNormal::movida(int a, int b) {

	int tempx = b - this->coord1;
	int tempy = a - this->coord2;

	if (abs(tempx) == abs(tempy))
		return true;
	else
		return false;

}

string FichaNormal::getcolor() {

	return color;
}

char FichaNormal::getCaracterRepresante() {

	return caracterRepresentante;
}

int FichaNormal::getCoord1() { 
	
	return coord1; 

}
int FichaNormal::getCoord2() { 
	
	return coord2; 

}

void FichaNormal::setCaracterRepresante(char d) {
	
	caracterRepresentante = d;

}


void FichaNormal::setCord11(int a) {
	
	coord1 = a;

}
void FichaNormal::setCord22(int a) { 
	
	coord2 = a; 

}


void  FichaNormal::setCol(string a) { 
	
	color = a; 


}
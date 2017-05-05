#pragma once
#pragma once
#include"ListaPiezas.h"
#include<sstream>
#include<iostream>


using namespace std;
class Jugador {

private:
	string nombre;
	string color;
	ListaPiezas* listPiezas;

public:
	Jugador(string, string);
	string getNombre();
	string getColor();
	void setNombre(string);
	void setColor(string);
	void agregarFicha(Ficha*);
	bool elimarFicha(Ficha*);




	~Jugador();
};

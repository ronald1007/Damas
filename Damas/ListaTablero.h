#pragma once
#include<conio.h>
#include"Windows.h"
#include<sstream>
#include"FichaNormal.h"
#include"Nodo.h"
#include"ListaPiezas.h"

using namespace std;

class ListaTablero {
private:
	Nodo* primero;

public:
	ListaTablero(void);
	void enlazarNodosPrimerCol(Nodo*, Ficha*);
	void enlazarNodosSigCol(Nodo*, Nodo*, Ficha*);
	void insertarElementosPrimerCol(Ficha*);
	void insertarElementoSigCol(Nodo*, Ficha*);
	void CrearTablero();
	void  imprimirListaTbalero();

};


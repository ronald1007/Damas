#pragma once
#include <iostream>
#include"Ficha.h"
using namespace std;

class Nodo {
private:
	Ficha* contenido;
	Nodo *up;
	Nodo *topRight;
	Nodo *next;
	Nodo *bottomRight;
	Nodo *down;
	Nodo *bottomLeft;
	Nodo *prev;
	Nodo *topLeft;
	bool estado;



public:

	Nodo(Nodo*, Nodo*, Nodo*, Nodo*, Nodo*, Nodo*, Nodo*, Nodo*, Ficha*);
	void setUp(Nodo*);
	void setTopRight(Nodo*);
	void setNext(Nodo*);
	void setBottomRight(Nodo*);
	void setDown(Nodo*);
	void setBottomLeft(Nodo*);
	void setPrev(Nodo*);
	void setTopLeft(Nodo*);
	void setContenido(Ficha*);

	Nodo* getUp();
	Nodo* getTopRight();
	Nodo* getNext();
	Nodo* getBottomRight();
	Nodo* getDown();
	Nodo* getBottomLeft();
	Nodo* getPrev();
	Nodo* getTopLeft();
	Ficha* getContenido();

	~Nodo(void);
};


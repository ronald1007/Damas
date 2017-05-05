#include "Nodo.h"


Nodo::Nodo(Nodo* arriba, Nodo* superiorDerecha, Nodo* siguiente,
	Nodo* inferiorDerecha, Nodo* abajo, Nodo* inferiorIzquierda,
	Nodo* anterior, Nodo* superiorIzquierda, Ficha* elemento) {

	contenido = elemento;
	up = arriba;
	topRight = superiorDerecha;
	next = siguiente;
	bottomRight = inferiorDerecha;
	down = abajo;
	bottomLeft = inferiorIzquierda;
	prev = anterior;
	topLeft = superiorIzquierda;
}

void Nodo::setUp(Nodo* arriba) {
	up = arriba;
}


void Nodo::setTopRight(Nodo* superiorDerecho) {
	topRight = superiorDerecho;
}


void Nodo::setNext(Nodo* siguiente) {
	next = siguiente;
}


void Nodo::setBottomRight(Nodo* inferiorDerecho) {
	bottomRight = inferiorDerecho;
}


void Nodo::setDown(Nodo* abajo) {
	down = abajo;
}


void Nodo::setBottomLeft(Nodo* inferiorIzquierdo) {
	bottomLeft = inferiorIzquierdo;
}


void Nodo::setPrev(Nodo* anterior) {
	prev = anterior;
}


void Nodo::setTopLeft(Nodo* superiorIzquierdo) {
	topLeft = superiorIzquierdo;
}


void Nodo::setContenido(Ficha* elemento) {
	contenido = elemento;
}


Nodo*  Nodo::getUp() {
	return this->up;
}


Nodo*  Nodo::getTopRight() {
	return this->topRight;
}


Nodo* Nodo::getNext() {
	return this->next;
}


Nodo*  Nodo::getBottomRight() {
	return this->bottomRight;
}


Nodo*  Nodo::getDown() {
	return this->down;
}

Nodo*  Nodo::getBottomLeft() {
	return this->bottomLeft;
}


Nodo*  Nodo::getPrev() {
	return this->prev;
}


Nodo*  Nodo::getTopLeft() {
	return this->topLeft;
}

Ficha* Nodo::getContenido() {
	return contenido;
}









Nodo::~Nodo(void)
{
}

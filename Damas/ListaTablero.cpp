#include "ListaTablero.h"


ListaTablero::ListaTablero(void)
{
	primero = NULL;
	CrearTablero();
}

void ListaTablero::enlazarNodosPrimerCol(Nodo*actual, Ficha*f) {
	Nodo* nuevo;

	nuevo = new Nodo(actual, NULL, NULL, NULL, actual->getDown(), NULL, NULL, NULL, f);
	if (actual->getDown() != NULL)
		actual->getDown()->setUp(nuevo);
	actual->setDown(nuevo);


}


void ListaTablero::enlazarNodosSigCol(Nodo* actualColumThis, Nodo* actualColumPrev, Ficha*f) {
	Nodo* nuevo;
	//int aux=actualColumThis->getElemento();
	nuevo = new Nodo(actualColumThis, NULL, NULL, NULL, actualColumThis->getDown(), actualColumPrev->getDown()->getDown(), actualColumPrev->getDown(), actualColumPrev, f);
	if (actualColumThis->getDown() != NULL)
		actualColumThis->getDown()->setUp(nuevo);
	actualColumThis->setDown(nuevo);
	actualColumPrev->setBottomRight(nuevo);
	actualColumPrev->getDown()->setNext(nuevo);
	actualColumPrev->getDown()->setBottomRight(nuevo->getDown());
	if (actualColumPrev->getDown()->getDown() != NULL) {
		actualColumPrev->getDown()->getDown()->setTopRight(nuevo);

	}
}


void ListaTablero::insertarElementosPrimerCol(Ficha*f) {

	Nodo*actual = primero;

	//if(f->getcolor=="blanca") lo preguntaria en crear matriz.
	if (primero == NULL) {
		primero = new Nodo(primero, primero, primero, primero, primero, primero, primero, primero, f);
	}

	else {
		while (actual->getDown() != NULL)
			actual = actual->getDown();
		if (actual->getDown() != NULL)

			enlazarNodosPrimerCol(actual, f);

		else
			if (actual->getDown() == NULL)
				enlazarNodosPrimerCol(actual, f);



	}



}






void ListaTablero::insertarElementoSigCol(Nodo*pprevio, Ficha*f) {
	Nodo* actualPrev = pprevio;
	Nodo* primerothis = pprevio->getNext();
	Nodo* actual = primerothis;
	if (primerothis == NULL) {
		primerothis = new Nodo(primerothis, primerothis, primerothis, primerothis, primerothis, pprevio->getDown(), pprevio, primerothis, f);
		pprevio->setNext(primerothis);
		pprevio->getDown()->setTopRight(primerothis);

	}
	else {
		while (actual->getDown() != NULL) {
			actualPrev = actualPrev->getDown();
			actual = actual->getDown();
		}

		if (actual->getDown() != NULL)
			enlazarNodosSigCol(actual, actualPrev, f);

		else
			if (actual->getDown() == NULL)
				enlazarNodosSigCol(actual, actualPrev, f);





	}
}








void ListaTablero::CrearTablero() {

	Nodo* primeroa = NULL;
	Nodo* primerob = NULL;
	Nodo* primeroc = NULL;
	//Nodo* primeroO = NULL;
	Nodo* primerof = NULL;
	Nodo* primerog = NULL;
	Nodo* primeror = NULL;


	FichaNormal* f = new FichaNormal("normal", "gris", ' ', 0, 0);

	//0
	FichaNormal* f1 = new FichaNormal("normal", "negra", 'X', 1, 0);
	FichaNormal* f2 = new FichaNormal("normal", "blanca", 'x', 5, 0);
	FichaNormal* f3 = new FichaNormal("normal", "blanca", 'x', 7, 0);

	//1
	FichaNormal* f4 = new FichaNormal("normal", "negra", 'X', 0, 1);
	FichaNormal* f5 = new FichaNormal("normal", "negra", 'X', 2, 1);
	FichaNormal* f6 = new FichaNormal("normal", "blanca", 'x', 6, 1);

	//2
	FichaNormal* f7 = new FichaNormal("normal", "negra", 'X', 1, 2);
	FichaNormal* f8 = new FichaNormal("normal", "blanca", 'x', 5, 2);
	FichaNormal* f9 = new FichaNormal("normal", "blanca", 'x', 7, 2);

	//3
	FichaNormal* f10 = new FichaNormal("normal", "negra", 'X', 0, 3);
	FichaNormal* f11 = new FichaNormal("normal", "negra", 'X', 2, 3);
	FichaNormal* f12 = new FichaNormal("normal", "blanca", 'x', 6, 3);


	//4
	FichaNormal* f13 = new FichaNormal("normal", "negra", 'X', 1, 4);
	FichaNormal* f14 = new FichaNormal("normal", "blanca", 'x', 5, 4);
	FichaNormal* f15 = new FichaNormal("normal", "blanca", 'x', 7, 4);

	//5
	FichaNormal* f16 = new FichaNormal("normal", "negra", 'X', 0, 5);
	FichaNormal* f17 = new FichaNormal("normal", "negra", 'X', 2, 5);
	FichaNormal* f18 = new FichaNormal("normal", "blanca", 'x', 6, 5);

	//6
	FichaNormal* f19 = new FichaNormal("normal", "negra", 'X', 1, 6);
	FichaNormal* f20 = new FichaNormal("normal", "blanca", 'x', 5, 6);
	FichaNormal* f21 = new FichaNormal("normal", "blanca", 'x', 7, 6);

	//7
	FichaNormal* f22 = new FichaNormal("normal", "negra", 'X', 0, 7);
	FichaNormal* f23 = new FichaNormal("normal", "negra", 'X', 2, 7);
	FichaNormal* f24 = new FichaNormal("normal", "blanca", 'x', 6, 7);
	//Genera numeros para la columna a
	int temp = 0;
	for (int i = 0;i <= 7;i++, temp++) {
		if (temp == 1 || temp == 5 || temp == 7) {
			if (temp == 1)insertarElementosPrimerCol(f1);
			if (temp == 5)insertarElementosPrimerCol(f2);
			if (temp == 7)insertarElementosPrimerCol(f3);

		}
		else
		{
			insertarElementosPrimerCol(f);
		}


	}

	//Genera numeros para la columna b i

	temp = 0;
	for (int i = 0;i <= 7;i++, temp++) {
		if (temp == 0 || temp == 2 || temp == 6) {
			if (temp == 0)insertarElementoSigCol(primero, f4);
			if (temp == 2)insertarElementoSigCol(primero, f5);
			if (temp == 6) insertarElementoSigCol(primero, f6);

		}
		else {

			insertarElementoSigCol(primero, f);
		}
	}



	//Genera numeros para la columna c n

	primeroa = primero->getNext();
	temp = 0;
	for (int i = 0;i <= 7;i++, temp++) {
		if (temp == 1 || temp == 5 || temp == 7) {
			if (temp == 1)insertarElementoSigCol(primeroa, f7);
			if (temp == 5)insertarElementoSigCol(primeroa, f8);
			if (temp == 7)insertarElementoSigCol(primeroa, f9);
		}
		else {
			insertarElementoSigCol(primeroa, f);
		}

	}

	//Genera numeros para la columna d g
	primerob = primeroa->getNext();
	temp = 0;
	for (int i = 0;i <= 7;i++, temp++) {
		if (temp == 0 || temp == 2 || temp == 6) {
			if (temp == 0)insertarElementoSigCol(primerob, f10);
			if (temp == 2)insertarElementoSigCol(primerob, f11);
			if (temp == 6)insertarElementoSigCol(primerob, f12);
		}
		else {
			insertarElementoSigCol(primerob, f);

		}

	}


	//Genera numeros para la columna e o
	primeroc = primerob->getNext();
	temp = 0;
	for (int i = 0;i <= 7;i++, temp++) {
		if (temp == 1 || temp == 5 || temp == 7) {
			if (temp == 1)insertarElementoSigCol(primeroc, f13);
			if (temp == 5)insertarElementoSigCol(primeroc, f14);
			if (temp == 7)insertarElementoSigCol(primeroc, f15);
		}
		else {
			insertarElementoSigCol(primeroc, f);

		}

	}


	//Genera numeros para la columna f
	primerof = primeroc->getNext();
	temp = 0;
	for (int i = 0;i <= 7;i++, temp++) {
		if (temp == 0 || temp == 2 || temp == 6) {
			if (temp == 0)insertarElementoSigCol(primerof, f16);
			if (temp == 2)insertarElementoSigCol(primerof, f17);
			if (temp == 6)insertarElementoSigCol(primerof, f18);
		}
		else {
			insertarElementoSigCol(primerof, f);

		}

	}


	//Genera numeros para la columna g
	primerog = primerof->getNext();
	temp = 0;
	for (int i = 0;i <= 7;i++, temp++) {
		if (temp == 1 || temp == 5 || temp == 7) {
			if (temp == 1)insertarElementoSigCol(primerog, f19);
			if (temp == 5)insertarElementoSigCol(primerog, f20);
			if (temp == 7)insertarElementoSigCol(primerog, f21);
		}
		else {
			insertarElementoSigCol(primerog, f);

		}

	}


	primeror = primerog->getNext();
	temp = 0;
	for (int i = 0;i <= 7;i++, temp++) {
		if (temp == 0 || temp == 2 || temp == 6) {
			if (temp == 0)insertarElementoSigCol(primeror, f22);
			if (temp == 2)insertarElementoSigCol(primeror, f23);
			if (temp == 6)insertarElementoSigCol(primeror, f24);
		}
		else {
			insertarElementoSigCol(primeror, f);

		}

	}
}






void  ListaTablero::imprimirListaTbalero() {
	int cont = 8;
	stringstream s;
	system("color 9e");
	Nodo* primeroa = primero->getDown();
	Nodo* primerob = primeroa->getDown();
	Nodo* primeroG = primerob->getDown();
	Nodo* primeroO = primeroG->getDown();
	Nodo* primeroO1 = primeroO->getDown();
	Nodo* primeroO2 = primeroO1->getDown();
	Nodo* primero3 = primeroO2->getDown();

	Nodo* actualB = primero;
	Nodo* actuala = primeroa;
	Nodo* actualb = primerob;
	Nodo* actualG = primeroG;
	Nodo* actualO = primeroO;
	Nodo* actualO1 = primeroO1;
	Nodo* actualO2 = primeroO2;
	Nodo*temp;
	Nodo* actualO3 = primero3;
	cout << endl;
	texColor(0);
	cout << "\t" << " a  " << " b  " << " c  " << " d  " << " e  " << " f  " << " g  " << " h  " << endl;
	cout << "\t";
	for (int i = 0;i<8;i++)
		for (int j = 0;j < 8;j++) {
			texColor(0);
			cout << "+---";
			if (j == 7) {
				cout << "+" << endl;
				cout << "     " << cont << "\t";
				for (int x = 0;x < 8;x++) {
					if ((actualB != NULL)) {
						texColor(0);
						cout << "| ";
						if (actualB->getContenido()->getcolor() == "negra") {
							texColor(0);
							cout << actualB->getContenido()->getCaracterRepresantes() << " ";
						}
						else {
							if (actualB->getContenido()->getcolor() == "blanca")
								texColor(14);
							cout << actualB->getContenido()->getCaracterRepresantes() << " ";

						}

						actualB = actualB->getNext();

					}
					else {
						if ((actuala != NULL)) {
							texColor(0);
							cout << "| ";
							if (actuala->getContenido()->getcolor() == "negra") {
								texColor(0);
								cout << actuala->getContenido()->getCaracterRepresantes() << " ";
							}
							else {
								if (actuala->getContenido()->getcolor() == "blanca")
									texColor(14);
								cout << actuala->getContenido()->getCaracterRepresantes() << " ";

							}
							actuala = actuala->getNext();
						}
						else {

							if ((actualb != NULL)) {
								texColor(0);
								cout << "| ";
								if (actualb->getContenido()->getcolor() == "negra") {
									texColor(0);
									cout << actualb->getContenido()->getCaracterRepresantes() << " ";
								}
								else {
									if (actualb->getContenido()->getcolor() == "blanca")
										texColor(14);
									cout << actualb->getContenido()->getCaracterRepresantes() << " ";

								}
								actualb = actualb->getNext();
							}
							else {
								if ((actualG != NULL)) {
									texColor(0);
									cout << "| ";
									if (actualG->getContenido()->getcolor() == "negra") {
										texColor(0);
										cout << actualG->getContenido()->getCaracterRepresantes() << " ";
									}
									else {
										if (actualG->getContenido()->getcolor() == "blanca")
											texColor(14);
										cout << actualG->getContenido()->getCaracterRepresantes() << " ";

									}
									actualG = actualG->getNext();
								}
								else {
									if ((actualO != NULL)) {
										texColor(0);
										cout << "| ";
										if (actualO->getContenido()->getcolor() == "negra") {
											texColor(0);
											cout << actualO->getContenido()->getCaracterRepresantes() << " ";
										}
										else {
											if (actualO->getContenido()->getcolor() == "blanca")
												texColor(14);
											cout << actualO->getContenido()->getCaracterRepresantes() << " ";

										}
										actualO = actualO->getNext();
									}
									else {
										if ((actualO1 != NULL)) {
											texColor(0);
											cout << "| ";
											if (actualO1->getContenido()->getcolor() == "negra") {
												texColor(0);
												cout << actualO1->getContenido()->getCaracterRepresantes() << " ";
											}
											else {
												if (actualO1->getContenido()->getcolor() == "blanca")
													texColor(14);
												cout << actualO1->getContenido()->getCaracterRepresantes() << " ";

											}

											actualO1 = actualO1->getNext();
										}
										else {
											if ((actualO2 != NULL)) {
												texColor(0);
												cout << "| ";
												if (actualO2->getContenido()->getcolor() == "negra") {
													texColor(0);
													cout << actualO2->getContenido()->getCaracterRepresantes() << " ";
												}
												else {
													if (actualO2->getContenido()->getcolor() == "blanca")
														texColor(14);
													cout << actualO2->getContenido()->getCaracterRepresantes() << " ";

												}
												actualO2 = actualO2->getNext();
											}
											else {
												if ((actualO3 != NULL)) {

													texColor(0);
													cout << "| ";
													if (actualO3->getContenido()->getcolor() == "negra") {
														texColor(0);
														cout << actualO3->getContenido()->getCaracterRepresantes() << " ";
													}
													else {
														if (actualO3->getContenido()->getcolor() == "blanca")
															texColor(14);
														cout << actualO3->getContenido()->getCaracterRepresantes() << " ";

													}
													actualO3 = actualO3->getNext();
												}


											}

										}

									}


								}


							}


						}
					}
					if (x == 7) {
						texColor(0);
						cout << "|" << "  " << cont-- << endl;
						cout << "\t";
						if (i == 7) {
							cout << "+---+---+---+---+---+---+---+---+" << endl;
							cout << "\t  a   b   c   d   e   f   g   h" << endl;
						}
					}
				}
			}
		}

}

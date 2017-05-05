#pragma once
#include"Ficha.h"

class FichaRey : virtual public Ficha
{

public:
	FichaRey(string a, string b, char c, int, int);
	//virtual string toString() const;
	virtual bool movida(int, int);
	string getColor();
	string getNombre();
	char getCaracterRepresante();
	int getCoord1();
	int getCoord2();
	void setCaracterRepresante(char);


	~FichaRey();
};



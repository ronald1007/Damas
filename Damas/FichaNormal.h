#pragma once
#include<string>
#include"Ficha.h"
using namespace std;


class FichaNormal :virtual public Ficha {
public:
	FichaNormal(string, string, char, int, int);
	//virtual string toString() const;
	virtual bool movida(int, int);
	string getcolor();
	string getNombre();
	char getCaracterRepresante();
	int getCoord1();
	int getCoord2();
	void setCaracterRepresante(char);
	void setCord11(int);
	void setCord22(int);
	void setCol(string);
	~FichaNormal();
};

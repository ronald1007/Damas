#pragma once
#include<string>


using namespace std;
class Ficha {
protected:
	string nombre;
	string color;
	char caracterRepresentante;
	int coord1;
	int coord2;

public:
	//Ficha();
	Ficha(string, string, char, int, int);
	//virtual string toString() const;
	virtual bool movida(int, int);
	string getcolor();
	string getnombre();
	char getCaracterRepresantes();
	int getCoord11();
	int getCoord22();
	void setCaracterRepresante1(char);
	void setCord1(int);
	void setCord2(int);
	void setColor(string);



	~Ficha();
};

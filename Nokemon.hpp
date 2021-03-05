#ifndef NOKEMON_HPP
#define NOKEMON_HPP
#include<string>
#include<vector>
#include<iostream>
#include"Ataque.hpp"
using namespace std;
class Nokemon {
protected:
	int defensa;
	int ataque;
	vector<Ataque*> ataques;
	int saludActual;
	int saludMaxima;
	int nivel;
	string nombre;
public:
	Nokemon();
	Nokemon(int, int, vector<Ataque*>, int, int, int, string);
	~Nokemon();
	int getDefensa();
	int getAtaque();
	vector<Ataque*> getAtaques();
	int getSaludActual();
	int getSaludMaxima();
	int getNivel();
	string getNombre();
	void setDefensa(int);
	void setAtaque(int);
	void agregarAtaques(vector<Ataque*>);
	void setSaludActual(int);
	void setSaludMaxima(double);
	void setNivel(int);
	void setNombre(string);
	virtual void InicializarAtaque() = 0;
};
#endif
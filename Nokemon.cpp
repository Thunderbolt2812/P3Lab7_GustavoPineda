#include "Nokemon.hpp"

Nokemon::Nokemon(){
	
}

Nokemon::Nokemon(int defensa, int ataque, vector<Ataque*> ataques, int saludActual, int saludMaxima ,int nivel ,string nombre){
	this->defensa = defensa;
	this->ataque = ataque;
	this->ataques = ataques;
	this->saludActual = saludActual;
	this->saludMaxima = saludMaxima;
	this->nivel = nivel;
	this->nombre = nombre;
	nivel = 5+(rand()%10);
}
Nokemon::~Nokemon(){
	
}
int Nokemon::getDefensa()
{
    return defensa;
}

void Nokemon::setNombre(string nombre)
{
    this->nombre = nombre;
}

int Nokemon::getAtaque()
{
    return ataque;
}

void Nokemon::setAtaque(int ataque)
{
    this->ataque = ataque;
}

vector<Ataque*> Nokemon::getAtaques()
{
    return ataques;
}

int Nokemon::getSaludActual()
{
    return saludActual;
}

void Nokemon::setSaludActual(int saludActual)
{
    this->saludActual = saludActual;
}

int Nokemon::getSaludMaxima()
{
    return saludMaxima;
}

string Nokemon::getNombre()
{
    return nombre;
}
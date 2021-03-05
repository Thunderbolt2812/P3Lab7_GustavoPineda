#ifndef NOKEMONHIERBA_HPP
#define NOKEMONHIERBA_HPP
#include<string>
#include<iostream>
#include"Nokemon.hpp"
using namespace std;
class NokemonHierba: public Nokemon {
	public:
		NokemonHierba(int defensa, int ataque, vector<Ataque*> ataques, int saludActual, int saludMaxima ,string nombre);
		virtual void InicializarAtaque();
};
#endif
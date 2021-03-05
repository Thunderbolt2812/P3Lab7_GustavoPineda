#ifndef NOKEMONHIELO_HPP
#define NOKEMONHIELO_HPP
#include<string>
#include<iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>
#include"Nokemon.hpp"
#include "Ataque.hpp"
using namespace std;
class NokemonHielo: public Nokemon {
	public:
		NokemonHielo(int defensa, int ataque, vector<Ataque*> ataques, int saludActual, int saludMaxima ,string nombre);
		virtual void InicializarAtaque();
};
#endif
#ifndef NOKEMONFUEGO_HPP
#define NOKEMONFUEGO_HPP
#include<string>
#include<iostream>
#include <stdlib.h>
#include <stdio.h>
#include <ctime>
#include"Nokemon.hpp"
#include"Ataque.hpp"
using namespace std;
class NokemonFuego: public Nokemon {
	public:
		NokemonFuego(int defensa, int ataque, vector<Ataque*> ataques, int saludActual, int saludMaxima ,string nombre);
		virtual void InicializarAtaque();
};
#endif
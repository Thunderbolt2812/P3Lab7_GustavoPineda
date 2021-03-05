#ifndef ANAFREMON_HPP
#define ANAFREMON_HPP
#include<string>
#include<iostream>
#include<vector>
#include"NokemonFuego.hpp"
#include "Ataque.hpp"
using namespace std;
class Anafremon: public NokemonFuego {
	public:
		Anafremon(string nombre);
		vector<Ataque*> getAtaques();
};
#endif
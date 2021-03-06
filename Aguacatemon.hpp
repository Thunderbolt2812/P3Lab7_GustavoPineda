#ifndef AGUACATEMON_HPP
#define AGUACATEMON_HPP
#include<string>
#include<vector>
#include<iostream>
#include"NokemonHierba.hpp"
#include "Ataque.hpp"
using namespace std;
class Aguacatemon: public NokemonHierba {
	public:
		Aguacatemon(string nombre) ;
		vector<Ataque*> getAtaques();
};
#endif
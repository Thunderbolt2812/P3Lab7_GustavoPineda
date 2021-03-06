#ifndef CHARAMUSCOMON_HPP
#define CHARAMUSCOMON_HPP
#include<string>
#include<vector>
#include<iostream>
#include"NokemonHielo.hpp"
#include"Ataque.hpp"
using namespace std;
class Charamuscomon: public NokemonHielo{
	public:
		Charamuscomon(string nombre);
		vector<Ataque*> getAtaques();
};
#endif
#ifndef SIMULADORBATALLA_HPP
#define SIMULADORBATALLA_HPP
#include<string>
#include<iostream>
#include"NokemonFuego.hpp"
#include "Ataque.hpp"
using namespace std;
class SimuladorBatalla {
	public:
		SimuladorBatalla();
		Nokemon* simular(Nokemon*,Nokemon*);
};
#endif
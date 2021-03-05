#include "Aguacatemon.hpp"

Aguacatemon::Aguacatemon(string nombre):NokemonHierba(49,49,ataques,45,45,nombre){
	
}
vector<Ataque*> Aguacatemon::getAtaques(){
    return ataques;
}
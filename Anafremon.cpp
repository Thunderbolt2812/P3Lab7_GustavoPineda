#include "Anafremon.hpp"

Anafremon::Anafremon(string nombre):NokemonFuego(43,52,ataques,39,39,nombre){
	
}
vector<Ataque*> Anafremon::getAtaques(){
    return ataques;
}
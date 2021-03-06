#include"Charamuscomon.hpp"

Charamuscomon::Charamuscomon(string nombre):NokemonHielo(65,48,ataques,44,44,nombre){}
vector<Ataque*> Charamuscomon::getAtaques(){
    return ataques;
}
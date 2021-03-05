#include <stdlib.h>
#include <ctime>
#include "NokemonHierba.hpp"
NokemonHierba::NokemonHierba(int defensa, int ataque, vector<Ataque*> ataques, int saludActual, int saludMaxima ,string nombre):Nokemon(defensa,ataque,ataques,saludActual,saludMaxima ,nivel,nombre){	
}
void NokemonHierba::InicializarAtaque(){
	srand((unsigned)time(0));
	int random = 0+(rand()%6);
	switch(random){
		case 1:{
			ataques.push_back(new Ataque("420","Hierba",10));
			break;
		}
		case 2:{
			ataques.push_back(new Ataque("Razor Leaf","Hierba",15));
			break;
		}
		case 3:{
			ataques.push_back(new Ataque("Leafage","Hierba",20));
			break;
		}
		case 4:{
			ataques.push_back(new Ataque("Vine Whip","Hierba",25));
			break;
		}
		case 5:{
			ataques.push_back(new Ataque("Sunny Day","Hierba",30));
			break;
		}
		case 6:{
			ataques.push_back(new Ataque("Terranova","Hierba",40));
			break;
		}
	}
}
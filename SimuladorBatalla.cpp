#include "SimuladorBatalla.hpp"

SimuladorBatalla::SimuladorBatalla(){
	
}
Nokemon* SimuladorBatalla::simular(Nokemon* a, Nokemon* b){
	int cont = 1;
	Nokemon* ganador;
	while(a->getSaludActual()>0&&b->getSaludActual()>0){
		cout<<"Turno "<<(cont)<<endl;
		vector<Ataque*> moves = a->getAtaques();
		int randoma = 0+(rand()%moves.size());
		Ataque* a1 = moves.at(randoma);
		doubl dano1 = ((((2*a->getNivel()/5)+2)*a1->getPoder()*(a->getAtaque()/a->getDefensa()))/50)+2;
		b->setSaludActual(dano1);
		
		vector<Ataque*> moves2 = b->getAtaques();
		int randomb = 0+(rand()%moves2.size());
		Ataque* b1 = moves2.at(randomb);
		doubl dano2 = ((((2*b->getNivel()/5)+2)*b1->getPoder()*(b->getAtaque()/b->getDefensa()))/50)+2;
		a->setSaludActual(dano2);
		cont++;
	}
	if(a->getSaludActual()<=0){
		ganador = b;
	}else if(b->getSaludActual()<=0){
		ganador = a
	}
	return ganador;
}
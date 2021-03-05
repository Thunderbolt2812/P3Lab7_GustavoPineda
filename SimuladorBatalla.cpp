#include "SimuladorBatalla.hpp"

SimuladorBatalla::SimuladorBatalla(){
	
}
Nokemon* SimuladorBatalla::simular(Nokemon* a, Nokemon* b){
	int cont = 1;
	Nokemon* ganador;
	while(a->getSaludActual()>0&&b->getSaludActual()>0){
		cout<<"Turno "<<(cont)<<endl;
		doubl dano1 = 
	}
	if(a->getSaludActual()<=0){
		ganador = b;
	}else if(b->getSaludActual()<=0){
		ganador = a
	}
	return ganador;
}
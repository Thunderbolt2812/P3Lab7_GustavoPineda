#include "NokemonHielo.hpp"
NokemonHielo::NokemonHielo(int defensa, int ataque, vector<Ataque*> ataques, int saludActual, int saludMaxima ,string nombre):Nokemon(defensa,ataque,ataques,saludActual,saludMaxima ,nivel,nombre){
	InicializarAtaque();	
}
void NokemonHielo::InicializarAtaque(){
	if(ataques.size()!=6){
		if(ataques.size()<1){
			for(int i = 0;i<2;i++){
				srand((unsigned)time(0));
				int random = 0+(rand()%6);
				switch(random){
					case 1:{
						ataques.push_back(new Ataque("Congelar","Hielo",10));
						break;
					}
					case 2:{
						ataques.push_back(new Ataque("Agua Helada","Hielo",15));
						break;
					}
					case 3:{
						ataques.push_back(new Ataque("Alaska","Hielo",20));
						break;
					}
					case 4:{
						ataques.push_back(new Ataque("5°C","Hielo",25));
						break;
					}
					case 5:{
						ataques.push_back(new Ataque("Ice Shards","Hielo",30));
						break;
					}
					case 6:{
						ataques.push_back(new Ataque("Blizzard","Hielo",40));
						break;
					}
				}
			}
		}else{
			srand((unsigned)time(0));
			int random = 0+(rand()%6);
			switch(random){
				case 1:{
					ataques.push_back(new Ataque("Congelar","Hielo",10));
					break;
				}
				case 2:{
					ataques.push_back(new Ataque("Agua Helada","Hielo",15));
					break;
				}
				case 3:{
					ataques.push_back(new Ataque("Alaska","Hielo",20));
					break;
				}
				case 4:{
					ataques.push_back(new Ataque("5°C","Hielo",25));
					break;
				}
				case 5:{
					ataques.push_back(new Ataque("Ice Shards","Hielo",30));
					break;
				}
				case 6:{
					ataques.push_back(new Ataque("Blizzard","Hielo",40));
					break;
				}
			}
		}
	}else{
		cout<<"El nokemon ya tiene un maximo de 6 ataques."<<endl;
	}
}
#include "NokemonFuego.hpp"

NokemonFuego::NokemonFuego(int defensa, int ataque, vector<Ataque*> ataques, int saludActual, int saludMaxima ,string nombre):Nokemon(defensa,ataque,ataques,saludActual,saludMaxima ,nivel,nombre){
	InicializarAtaque();
}

void NokemonFuego::InicializarAtaque(){
	srand((unsigned)time(0));
	if(ataques.size()!=6){
		if(ataques.size()<1){
			for(int i = 0;i<2;i++){
				int random = 0+(rand()%6);
				switch(random){
					case 1:{
						ataques.push_back(new Ataque("Inferno","Fuego",10));
						break;
					}
					case 2:{
						ataques.push_back(new Ataque("Tortilla Caliente","Fuego",15));
						break;
					}
					case 3:{
						ataques.push_back(new Ataque("Aceite con Agua","Fuego",20));
						break;
					}
					case 4:{
						ataques.push_back(new Ataque("Explosion","Fuego",25));
						break;
					}
					case 5:{
						ataques.push_back(new Ataque("Calentador","Fuego",30));
						break;
					}
					case 6:{
						ataques.push_back(new Ataque("Lava","Fuego",40));
						break;
					}
				}
			}
		}else{
			int random = 0+(rand()%6);
			switch(random){
				case 1:{
					ataques.push_back(new Ataque("Inferno","Fuego",10));
					break;
				}
				case 2:{
					ataques.push_back(new Ataque("Tortilla Caliente","Fuego",15));
					break;
				}
				case 3:{
					ataques.push_back(new Ataque("Aceite con Agua","Fuego",20));
					break;
				}
				case 4:{
					ataques.push_back(new Ataque("Explosion","Fuego",25));
					break;
				}
				case 5:{
					ataques.push_back(new Ataque("Calentador","Fuego",30));
					break;
				}
				case 6:{
					ataques.push_back(new Ataque("Lava","Fuego",40));
					break;
				}
			}
		}
	}else{
		cout<<"El nokemon ya tiene un maximo de 6 ataques."<<endl;
	}
}

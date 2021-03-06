#include <iostream>
#include "SimuladorBatalla.hpp"
#include "Anafremon.hpp"
#include "Charamuscomon.hpp"
#include "Aguacatemon.hpp"
#include "Ataque.hpp"
#include "NokemonFuego.hpp"
#include "NokemonHielo.hpp"
#include "NokemonHierba.hpp"
//No se que ondas con esta cosa, no se cual es el erorr porfa teneme compasion hahahahaha
int main(int argc, char** argv) {
	int opcion = 0;
	while(opcion!=2){
		cout<<"Ingrese opcion"<<endl;
		cout<<"1) Simular batalla"<<endl;
		cout<<"2) Salir Corriendo"<<endl;
		cout<<"opcion: ";
		cin>>opcion;
		switch(opcion){
			case 1:{
				bool elegir = false;
				bool eligio = false;
				string nombre;
				cout<<"Ingrese el nombre de su nokemon: ";
				cin>>nombre;
				Nokemon* e;
				Nokemon* c;
				cout<<endl;
				int opcion2 = 0;
				while(opcion2!=4){
					if(!eligio){
						cout<<"Ingrese opcion de que especie de nokemon quiere"<<endl;
						cout<<"1) Anafremon"<<endl;
						cout<<"2) Aguacatemon"<<endl;
						cout<<"3) Charamuscomon"<<endl;
						cout<<"4) Salir"<<endl;
						cout<<"Opcion: ";
						cin>>opcion2;
						switch(opcion2){
							case 1:{
								Anafremon* an = new Anafremon(nombre);	
								eligio = true;
								break;
							}
							case 2:{
								Aguacatemon* ag = new Aguacatemon(nombre);	
								e = ag;
								eligio = true; 
								break;
							}
							case 3:{
								Charamuscomon* ch = new Charamuscomon(nombre);	
								e = ch;
								eligio = true; 
								break;
							}
						}
						elegir = true;	
					}else{
						opcion2 = 4;
					}	
				}
				if(elegir){
					int random = 1+(rand()%3);
					switch(random){
						case 1:{
							Anafremon* an1 = new Anafremon("Anafremon");	
							c = an1;
							break;
						}
						case 2:{
							Aguacatemon* ag1 = new Aguacatemon("Aguacatemon");	
							c = ag1;
							break;
						}
						case 3:{
							Charamuscomon* ch = new Charamuscomon("Charamuscomon");	
							c = ch;
						}
					}
					cout<<"Nokemon elegido: "<<e->getNombre()<<endl;
					cout<<"Defensa: "<<e->getDefensa()<<endl;
					cout<<"Ataque: "<<e->getAtaque()<<endl;
					cout<<"Salud Maxima: "<<e->getSaludMaxima()<<endl;
					cout<<"Lista de ataques: "<<endl;
					vector<Ataque*> lista = e->getAtaques();
					for(int i = 0; i<lista.size();i++){
						Ataque* a = lista.at(i);
						cout<<(i+1)<<") Nombre: "<<a->getNombre()<<" Tipo: "<<a->getTipo()<<" Poder: "<<a->getPoder()<<endl;
					}
					cout<<endl;
					cout<<"Contrincante: "<<c->getNombre()<<endl;
					cout<<"Defensa: "<<c->getDefensa()<<endl;
					cout<<"Ataque: "<<c->getAtaque()<<endl;
					cout<<"Salud Maxima: "<<c->getSaludMaxima()<<endl;
					cout<<"Lista de ataques: "<<endl;
					vector<Ataque*> lista1 = c->getAtaques();
					for(int i = 0; i<lista1.size();i++){
						Ataque* a = lista1.at(i);
						cout<<(i+1)<<") Nombre: "<<a->getNombre()<<" Tipo: "<<a->getTipo()<<" Poder: "<<a->getPoder()<<endl;
					}
					cout<<endl;
					cout<<"Comenzando Batalla"<<endl<<endl;
					SimuladorBatalla* s = new SimuladorBatalla();
					s->simular(e,c);
					delete e;
					delete c;
				}
				break;
			}
		}
	}
	return 0;
}
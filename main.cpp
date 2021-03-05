#include <iostream>
#include "SimuladorBatalla.hpp"
#include "Anafremon.hpp"
#include "Charamuscomon.hpp"
#include "Aguacatemon.hpp"
#include "Ataque.hpp"
#include "NokemonFuego.hpp"
#include "NokemonHielo.hpp"
#include "NokemonHierba.hpp"

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
				Anafremon* an = new Anafremon(nombre);
				Aguacatemon* ag = new Aguacatemon(nombre);
				Charamuscomon* ch = new Charamuscomon(nombre);
				Anafremon* an1 = new Anafremon("Anafremon");
				Aguacatemon* ag1 = new Aguacatemon("Aguacatemon");
				Charamuscomon* ch1 = new Charamuscomon("Charamuscomon");
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
								e = an;
								eligio = true;
								break;
							}
							case 2:{
								e = ag;
								eligio = true; 
								break;
							}
							case 3:{
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
							c = an;
							break;
						}
						case 2:{
							c = ag;
							break;
						}
						case 3:{
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
					delete an;
					delete an1;
					delete ag;
					delete ag1;
					delete ch;
					delete ch1;
				}
				break;
			}
		}
	}
	return 0;
}
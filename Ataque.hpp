#ifndef ATAQUE_HPP
#define ATAQUE_HPP
#include<string>
#include<vector>
#include<iostream>
using namespace std;
class Ataque {
private:
	string nombre;
	string tipo;
	int poder;
public:
	Ataque();
	Ataque(string,string,int);
    string getNombre();
    void setNombre(string nombre);
    string getTipo();
    void setTipo(string tipo);
    int getPoder();
    void setPoder(int poder);
};
#endif
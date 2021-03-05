#include"Ataque.hpp"
Ataque::Ataque(){
	
}
Ataque::Ataque(string nombre,string tipo,int poder){
	this->nombre = nombre;
	this->tipo = tipo;
	this->poder = poder;
}
string Ataque::getNombre() const
{
    return nombre;
}

void Ataque::setNombre(string nombre)
{
    this->nombre = nombre;
}

string Ataque::getTipo() const
{
    return tipo;
}

void Ataque::setTipo(string tipo)
{
    this->tipo = tipo;
}

int Ataque::getPoder() const
{
    return poder;
}

void Ataque::setPoder(int poder)
{
    this->poder = poder;
}
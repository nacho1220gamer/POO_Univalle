#include "comida.h"
#include <iostream>
#include <string>

Comida::Comida(string auxNombre, int auxSaturacion){
	nombre=auxNombre;
	saturacionComida=auxSaturacion;
}

string Comida::getNombre(){
	return nombre;
}

int Comida::getSaturacion(){
	return saturacionComida;
}
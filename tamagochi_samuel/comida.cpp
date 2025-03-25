/* 
 * @file comida.cpp
 * @brief Un programa que emula el comportamiento de la comida de una mascota
 *
 * @details 
 * -El programa crea objetos de tipo Comida que se relacionan con la Mascota
 * 
 * @author [Ignacio Henao, Juan Camilo Ramos, Samuel Saldaña, Juan Manuel Muñoz ]
 * 
 * @mail [ignacio.henao@correounivalle.edu.co, juan.ramos.hoyos@correounivalle.edu.co , 
 * saldana.samuel@correounivalle.edu.co, juan.munoz.delgado@correounivalle.edu.co ]
 * 
 * @date 2025-03-20
 * 
 * @version 1.0
 * 
 * @comentario:
 * Se usa la libreria string.
 * Se incluye comida.h que es la estructura de la clase
 * Se definieron las funciones de la clase Comida
*/

#include "comida.h"
#include <iostream>
#include <string>

Comida::Comida(string auxNombre, int auxSaturacion){ //constructor (require de dos atributos)
	nombre=auxNombre; //atributos inicializados al crear objetos de esta clase
	saturacionComida=auxSaturacion; //atributos inicializados al crear objetos de esta clase
}
//getters
string Comida::getNombre(){
	return nombre;
}

int Comida::getSaturacion(){
	return saturacionComida;
}
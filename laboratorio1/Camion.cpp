/* 
 * @file Camion.cpp
 * @brief Un programa que emula un comportamiento de un camión de trasteos.
 *
 * @details 
 * -El programa crea objetos de tipo Camion a los cuales los carga con objetos para realizar
 * una mudanza y comprueba que pueda cargalos en los camiones.
 * -Define una función que permite cargar un objeto al camión, en caso tal de que se supere la capacidad
 * máxima no podra subir el objeto al camión.
 * -Define una función que retorna el peso total cargado.
 * -Define una función que retorna la placa del camión.
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
 * Se definieron las funciones de la clase camion y su constructor.
 * 
*/

#include "Camion.h"
#include <string>
using namespace std;

Camion::Camion(string laPlaca, int laCapacidadMaxima)
{
  placa = laPlaca; 
  capacidadMaxima = laCapacidadMaxima; 
  pesoTotalCargado = 0; 
}

// Función que permite cargar un objeto al camión si no ha superado la capacidad máxima.
bool Camion::cargarUnObjeto(int pesoDelObjeto) 
{
  if(pesoTotalCargado + pesoDelObjeto <= capacidadMaxima) 
  {
    pesoTotalCargado = pesoTotalCargado + pesoDelObjeto;
    return true;
  }
  else 
  { 
    return false;
  }
}

// Función que retorna el peso total cargado por el camión.
int Camion::hacerMudanza() 
{ 
  return pesoTotalCargado; 
} 

// Función que retorna la placa del camión.
string Camion::getPlaca() 
{ 
  return placa; 
}
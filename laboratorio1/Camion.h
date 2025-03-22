/*
    Clase: Camion
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle
    
    Información CRC:

    Clase: Camion

    Responsabilidades:
      - Abstraer el comportamiento de un camión de una empresa de mudanza.
      - El cliente puede modificar su información

    Colaboradores:
      - Ninguno

    Autor: [Ignacio Henao, Juan Camilo Ramos, Samuel Saldaña, Juan Manuel Muñoz ]
    Correo: [ignacio.henao@correounivalle.edu.co, juan.ramos.hoyos@correounivalle.edu.co ,     saldana.samuel@correounivalle.edu.co, juan.munoz.delgado@correounivalle.edu.co ]
    Fecha: Marzo 2025
*/

#ifndef _CAMION_H_
#define _CAMION_H_
#include <string>
using namespace std;

class Camion
{
  private:
    string placa;
    int capacidadMaxima;
    int pesoTotalCargado;
  public:
    Camion(string laPlaca, int laCapacidadMaxima);
    bool cargarUnObjeto(int pesoDelObjeto); // true = se pudo hacer; false = no se pudo
    int hacerMudanza(); // Retorna la carga que transportó
    string getPlaca(); // Retorna la placa del camión
};

#endif
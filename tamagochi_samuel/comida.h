/*
    Clase: Comida
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle

    Información CRC:
    
    Clase: Comida

    Responsabilidades:
        - Abstraer el comportamiento de comida para una mascota
    
    Colaboradores:
        - Mascota

    Autor: [Ignacio Henao, Juan Camilo Ramos, Samuel Saldaña, Juan Manuel Muñoz ]
    Correo: [ignacio.henao@correounivalle.edu.co, juan.ramos.hoyos@correounivalle.edu.co, saldana.samuel@correounivalle.edu.co, juan.munoz.delgado@correounivalle.edu.co ]
    Fecha: Marzo 2025
    Contribuidor: Victor Bucheli

*/

#ifndef _COMIDA_H_
#define _COMIDA_H_
#include <string>
using namespace std;

class Comida{
    private:
        string nombre;
        int saturacionComida;
    public:
        Comida(string auxNombre, int auxSaturacion);   //declaracion del constructor
        //getters
        string getNombre();
        int getSaturacion();
};

#endif // _COMIDA_H_
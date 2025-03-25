/*
    Clase: Mascota
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle

    Información CRC:
    
    Clase: Mascota

    Responsabilidades:
        - Abstraer el comportamiento de un mascota tamagochi y sus necesidades
        - la Mascota puede saludar
        - La Mascota puede dar la pata
        - La Mascota puede dormir
        - La Mascota puede jugar
    
    Colaboradores:
        - Comida

    Autor: [Ignacio Henao, Juan Camilo Ramos, Samuel Saldaña, Juan Manuel Muñoz ]
    Correo: [ignacio.henao@correounivalle.edu.co, juan.ramos.hoyos@correounivalle.edu.co, saldana.samuel@correounivalle.edu.co, juan.munoz.delgado@correounivalle.edu.co ]
    Fecha: Marzo 2025
    Contribuidor: Victor Bucheli

*/

#include <string>
using namespace std;
class Mascota{
    private:
        string nombre;
        string tipo;
        int comer;
    public:
        Mascota(string nombre);  //declaracion del constructor
        //setters
        void setNombre(string nombre);
        void setTipo(string);
        void setComer(int);
        //Getters
        string getNombre();
        string getTipo();
        int getComer();
        //funciones
        void siComio();
        void darLapata();
        void Saludar();
        void dormir();
        void jugar();
};
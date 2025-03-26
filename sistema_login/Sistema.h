/*
    Clase: Sistema
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle

    Información CRC:
    
    Clase: Sistema

    Responsabilidades:
        - Acceder al modulo de administrador.
        - Acceder al modulo de registro.

    Colaboradores:
        - SistemaLogin


    Autor: [Ignacio Henao, Juan Camilo Ramos, Samuel Saldaña, Juan Manuel Muñoz ]
    Correo: [ignacio.henao@correounivalle.edu.co, juan.ramos.hoyos@correounivalle.edu.co, saldana.samuel@correounivalle.edu.co, juan.munoz.delgado@correounivalle.edu.co ]
    Fecha: Marzo 2025

    comentario:
    se usan las siguientes librerías:
    - <string>: Para manejar strings.
    se investigó sus funcionalidades en: https://learn.microsoft.com/es-es/cpp/standard-library/string?view=msvc-170
    - Se importo la clase "SistemaLogin.h"

*/

#ifndef _SISTEMA_H_
#define _SISTEMA_H_
#include "SistemaLogin.h"
#include <string>

using  namespace std;

class Sistema {
    private:
        string nom_sistema;
    public:
        Sistema(string nombre_sistema);
        void accesoAdministrador(SistemaLogin sistema_login, string nombre_usuario, string contraseña);
        void accesoModuloRegistro(SistemaLogin sistema_login);
};

#endif // _SISTEMA_H_

/*
    Clase: SistemaLogin
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle

    Información CRC:
    
    Clase: SistemaLogin

    Responsabilidades:
        - Abstraer el comportamiento de un Sistema de Login y sus opciones
        - El usuario puede iniciar sesión.
        - El usuario puede cambiar su contraseña.
        - El usuario puede olvidar su contraseña y cambiarla.
        - El usuario puede cerrar su sesión.
    
    Colaboradores:
        - Sistema

    Autor: [Ignacio Henao, Juan Camilo Ramos, Samuel Saldaña, Juan Manuel Muñoz]
    Correo: [ignacio.henao@correounivalle.edu.co, juan.ramos.hoyos@correounivalle.edu.co , saldana.samuel@correounivalle.edu.co, juan.munoz.delgado@correounivalle.edu.co]
    Fecha: Marzo 2025
    Contribuidor: Victor Bucheli

*/
#ifndef _SISTEMALOGIN_H_
#define _SISTEMALOGIN_H_
#include <string>
#include <vector>

using  namespace std;

class SistemaLogin {
    private:
        string nom_usuario;
        string contraseña_hash;
        bool en_sesion;
        // Para proteger la seguridad de la contraseña del usuario
        string hash_contraseña(string contraseña);
    public:
        // Funciones personalizadas
        SistemaLogin(string nom_usuario, string contraseña);
        bool iniciar_sesion(string usuario, string contraseña);
        bool cambiar_contraseña(string contraseña_actual, string nueva_contraseña);
        bool olvidar_contraseña(string nueva_contraseña);
        void cerrar_sesion();

        // Getters
        bool getSesion();
        string getUsuario(); //
        /* No es seguro hacer un get y set para contraseña, puesto que se
        necesita evitar que sea de facíl acceso */

        // Setters
        void setSesion(bool sesion);
        void setUsuario(string usuario);
};

#endif // _SISTEMALOGIN_H_
   

/*
    Clase: Banco
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle

    Información CRC:
    
    Clase: SistemaLogin

    Responsabilidades:
        - Abstraer el comportamiento de un Banco dentro de un banco su información y sus operaciones
        - El Banco puede crear clientes
        - El Banco puede crear cuentas
        - El Banco puede calcular el promedio del salod de las cuentas
        - El Banco puede imprimir los saldos
    
    Colaboradores:
        - Cuenta
        - Clientes


    Autor: Ignacio Henao 
    Correo: ignacio.henao@correounivalle.edu.co
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
        string hash_contraseña(string contraseña);
    public:
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
   
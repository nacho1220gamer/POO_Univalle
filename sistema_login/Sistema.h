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
        void accesoAdministrador(SistemaLogin sistema_login);
        void accesoModuloRegistro(SistemaLogin sistema_login);
};

#endif // _SISTEMA_H_
/*
    Proyecto: Banco
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle

    Descripción:
    Este proyecto busca desarrollar un proyecto completo en FPOO analisis, diseño e implementación
    programar un banco

    Autor: Ignacio Henao 
    Correo: ignacio.henao@correounivalle.edu.co
    Fecha: Marzo 2025
    Contribuidor: Victor Bucheli
*/

#include <iostream>
#include <vector>
#include <string>
#include "Sistema.h"
#include "SistemaLogin.h"
using namespace std;

Sistema::Sistema(string nombre_sistema)
{
    nom_sistema = nombre_sistema;
}
void Sistema::accesoAdministrador(SistemaLogin sistema_login) 
{
    if(sistema_login.getSesion()) 
    {
        cout << "Acceso a administrador concedido." << endl;
    } else 
    {
        cout << "Acceso a administrador restringido. Por favor iniciar sesión." << endl;
    }
}
void Sistema::accesoModuloRegistro(SistemaLogin sistema_login) 
{
    if(sistema_login.getSesion()) 
    {
        cout << "Acceso al modulo de registro concedido." << endl;
    } else 
    {
        cout << "Acceso al modulo de registro restringido. Por favor iniciar sesión." << endl;
    }
}
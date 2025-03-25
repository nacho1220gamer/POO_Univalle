
/*
    Proyecto: Banco
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle

    Descripción:
    Este proyecto busca desarrollar un proyecto completo en FPOO analisis, diseño e implementación
    programar un banco

    Autor: Victor Bucheli 
    Correo: victor.bucheli@correounivalle.edu.co
    Fecha: Marzo 2025
    Contribuidor: Victor Bucheli
*/
#include<iostream>
#include<vector>
#include "SistemaLogin.h"
#include "Sistema.h"
using namespace std;


int main(){
    SistemaLogin sistema_login("ignacioHenao", "nachohenao2007");
    Sistema sistema("Sistema");
    sistema_login.iniciar_sesion("ignacioHenao", "nachohenao2007");
    sistema_login.cambiar_contraseña("nachohenao2007", "nacho1234");
    sistema.accesoAdministrador(sistema_login);
    sistema_login.olvidar_contraseña("nachohenao2007");
    sistema_login.cerrar_sesion();
    sistema.accesoModuloRegistro(sistema_login);
}

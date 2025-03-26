/*
  *
  *  @file main.cpp
  * 
  *  @brief Sistema de gestión de accesos para módulos administrativos
  * 
  *  @details Implementa el control de acceso mediante:}
  *  - Instancia objetos de la clase Sistema.
  *  - Instancia objetos de la clase SistemaLogin.
  *
  *  @author [Ignacio Henao, Juan Camilo Ramos, Samuel Saldaña, Juan Manuel Muñoz]
  * 
  *  @mail [ignacio.henao@correounivalle.edu.co, juan.ramos.hoyos@correounivalle.edu.co , 
  *  saldana.samuel@correounivalle.edu.co, juan.munoz.delgado@correounivalle.edu.co]
  * 
  *  @date 2025-03-25
  * 
  *  @version 1.0*
  *  
  *  @comentario: Se utilizaron las librerías/archivos:
  *  - <string> para manipulación de cadenas de texto
  *  - "Sistema.h" y "SistemaLogin.h" para instanciar objetos
  *  - Se investigo en la pagina: https://en.cppreference.com/w/ sobre como usar las librerias
  *
*/
#include<iostream>
#include "SistemaLogin.h"
#include "Sistema.h"
using namespace std;


int main(){
    SistemaLogin sistema_login("ignacioHenao", "nachohenao2007");
    Sistema sistema("Sistema");
    sistema_login.iniciar_sesion("ignacioHenao", "nachohenao2007");
    sistema_login.cambiar_contraseña("nachohenao2007", "nacho1234");
    sistema.accesoAdministrador(sistema_login, "ignacioHenao", "nacho1234");
    sistema.accesoModuloRegistro(sistema_login);
    sistema_login.olvidar_contraseña("nachohenao2007");
    sistema_login.cerrar_sesion();
    sistema.accesoModuloRegistro(sistema_login);
}

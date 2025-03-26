/*
  *
  *  @file Sistema.cpp
  * 
  *  @brief Sistema de gestión de accesos para módulos administrativos
  * 
  *  @details Implementa el control de acceso mediante:
  *  - Verificación de estado de sesión
  *  - Validación de permisos para módulos específicos
  *  - Mensajes de acceso/concesión según autenticación
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
  *  - <vector> para manejo de estructuras de datos
  *  - <string> para manipulación de cadenas de texto
  *  - "Sistema.h" y "SistemaLogin.h" para la estructura principal
  *  - Los datos de autenticación se gestionan mediante el objeto SistemaLogin
  *  - Se investigo en la pagina: https://en.cppreference.com/w/ sobre como usar las librerias
  *
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
void Sistema::accesoAdministrador(SistemaLogin sistema_login, string nombre_usuario, string contraseña) 
{
    sistema_login.iniciar_sesion(nombre_usuario, contraseña);
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
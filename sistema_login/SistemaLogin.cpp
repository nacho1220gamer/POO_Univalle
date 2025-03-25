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
#include "SistemaLogin.h"
using namespace std;

SistemaLogin::SistemaLogin(string nombre_usuario, string contraseña)
{
    nom_usuario = nombre_usuario;
    contraseña_hash = hash_contraseña(contraseña);
    en_sesion = false;
}
string SistemaLogin::hash_contraseña(string contraseña) // Algoritmo de hash
{
    unsigned int hash = 0;
    for (char c : contraseña) {
        hash = (hash * 31) + static_cast<unsigned int>(c); 
    }
    return to_string(hash);
}
bool SistemaLogin::iniciar_sesion(string nombre_usuario, string contraseña) 
{
    if (nom_usuario == nombre_usuario) {
        contraseña = hash_contraseña(contraseña);
        if (contraseña == contraseña_hash) 
        {
            setSesion(true);
            cout << "Has iniciado sesión correctamente." << endl;
            return true;
        } else 
        {
            cout << "La contraseña no es correcta." << endl;
            return false;
        }
    } else {
        cout << "El usuario no existe en el sistema." << endl;
        return false;
    }
}
bool SistemaLogin::cambiar_contraseña(string contraseña_actual, string nueva_contraseña)
{
    contraseña_actual = hash_contraseña(contraseña_actual);
    if (contraseña_actual == contraseña_hash) {
        string hash_c = hash_contraseña(nueva_contraseña);
        contraseña_hash = hash_c;
        cout << "Contraseña modificada correctamente." << endl;
        return true;
    } else 
    {
        cout << "La contraseña actual no es correcta." << endl;
        return false;
    }
}
bool SistemaLogin::olvidar_contraseña(string nueva_contraseña) 
{
    string hash_c = hash_contraseña(nueva_contraseña);
    contraseña_hash = hash_c;
    cout << "Contraseña modificada correctamente." << endl;
    return true;
}
bool SistemaLogin::getSesion() 
{
    return en_sesion;
}
string SistemaLogin::getUsuario() {
    return nom_usuario;
}
void SistemaLogin::setSesion(bool sesion)
{
    en_sesion = sesion;
}
void SistemaLogin::setUsuario(string usuario)
{
    nom_usuario = usuario;
}
void SistemaLogin::cerrar_sesion() {
    bool sesion = getSesion();
    if (sesion == 1) {
        en_sesion = false;
    }
}
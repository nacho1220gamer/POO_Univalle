/*
 * @file SistemaLogin.cpp
 * @brief Implementación del sistema de autenticación de usuarios
 * 
 * @details Este sistema permite gestionar el inicio y cierre de sesión de un usuario mediante:
 * - Registro de usuario con almacenamiento de contraseña hasheada.
 * - Inicio de sesión con verificación de credenciales.
 * - Cambio y recuperación de contraseña.
 * - Gestión del estado de sesión (activo/inactivo).
 * 
 * @author [Ignacio Henao, Juan Camilo Ramos, Samuel Saldaña, Juan Manuel Muñoz]
 * @mail [ignacio.henao@correounivalle.edu.co, juan.ramos.hoyos@correounivalle.edu.co , saldana.samuel@correounivalle.edu.co, juan.munoz.delgado@correounivalle.edu.co]
 * @date 2025-03-25
 * @version 1.0
 *
 * @comentario: Se utilizaron las librerías/archivos:
 * - <iostream> para entrada y salida de datos
 * - <vector> para manejo de estructuras de datos (aunque no se usa en esta implementación)
 * - <string> para manipulación de cadenas de texto
 * - "SistemaLogin.h" para la declaración de la clase SistemaLogin
 * 
 * Se investigó en la página: https://en.cppreference.com/w/ sobre cómo usar las librerías estándar de C++
*/

#include <iostream>
#include <vector>
#include <string>
#include "SistemaLogin.h"

using namespace std;

// Constructor de la clase SistemaLogin
// Recibe un nombre de usuario y una contraseña, y almacena el usuario con la contraseña hasheada
SistemaLogin::SistemaLogin(string nombre_usuario, string contraseña)
{
    nom_usuario = nombre_usuario;
    contraseña_hash = hash_contraseña(contraseña); // Se almacena la contraseña en forma de hash
    en_sesion = false; // Inicialmente, el usuario no está en sesión
}

// Función para aplicar un hash simple a la contraseña
// Se usa un algoritmo básico de multiplicación y suma con una constante (31)
string SistemaLogin::hash_contraseña(string contraseña)
{
    unsigned int hash = 0;
    for (char c : contraseña) {
        hash = (hash * 31) + static_cast<unsigned int>(c); // Genera un número basado en los caracteres
    }
    return to_string(hash); // Convierte el número hash en una cadena y la devuelve
}

// Función para iniciar sesión
// Recibe el nombre de usuario y la contraseña, y verifica si coinciden con los datos almacenados
bool SistemaLogin::iniciar_sesion(string nombre_usuario, string contraseña) 
{
    if (nom_usuario == nombre_usuario) { // Verifica si el nombre de usuario coincide
        contraseña = hash_contraseña(contraseña); // Hashea la contraseña ingresada
        if (contraseña == contraseña_hash) // Compara el hash de la contraseña ingresada con la almacenada
        {
            setSesion(true); // Marca al usuario como en sesión
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

// Función para cambiar la contraseña
// Primero verifica que la contraseña actual sea correcta antes de cambiarla
bool SistemaLogin::cambiar_contraseña(string contraseña_actual, string nueva_contraseña)
{
    contraseña_actual = hash_contraseña(contraseña_actual); // Hashea la contraseña actual ingresada
    if (contraseña_actual == contraseña_hash) { // Si la contraseña ingresada coincide con la almacenada
        string hash_c = hash_contraseña(nueva_contraseña); // Hashea la nueva contraseña
        contraseña_hash = hash_c; // La guarda en el sistema
        cout << "Contraseña modificada correctamente." << endl;
        return true;
    } else 
    {
        cout << "La contraseña actual no es correcta." << endl;
        return false;
    }
}

// Función para restablecer la contraseña sin verificación
// (Útil en caso de olvidar la contraseña y necesitar un cambio directo)
bool SistemaLogin::olvidar_contraseña(string nueva_contraseña) 
{
    string hash_c = hash_contraseña(nueva_contraseña); // Hashea la nueva contraseña
    contraseña_hash = hash_c; // La almacena en el sistema
    cout << "Contraseña modificada correctamente." << endl;
    return true;
}

// Función para obtener el estado de sesión del usuario
bool SistemaLogin::getSesion() 
{
    return en_sesion;
}

// Función para obtener el nombre de usuario
string SistemaLogin::getUsuario() {
    return nom_usuario;
}

// Función para establecer el estado de sesión (activa o inactiva)
void SistemaLogin::setSesion(bool sesion)
{
    en_sesion = sesion;
}

// Función para cambiar el nombre de usuario
void SistemaLogin::setUsuario(string usuario)
{
    nom_usuario = usuario;
}

// Función para cerrar sesión
void SistemaLogin::cerrar_sesion() {
    bool sesion = getSesion(); // Obtiene el estado de sesión
    if (sesion == true) { // Si la sesión está activa
        en_sesion = false; // La cierra
    }
}
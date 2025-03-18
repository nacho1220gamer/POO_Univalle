/* 
 * @file ejercicio2.cpp
 *
 * @brief Un programa que almacena los datos personales de empleados.
 *
 * 
 *
 * @details El programa solicita al usuario las datos personales como: nombre, apellido, numero de documento, cargo en la 
 * empresa y su salario mensual y retorna un mensaje que resume la información ingresada por el usuario.
 *
 * @author [Ignacio Henao, Juan Camilo Ramos, Samuel Saladaña, Juan Manuel Muñoz]
 *
 * @mail [ignacio.henao@correounivalle.edu.co, juan.ramos.hoyos@correounivalle.edu.co , 
 * saldana.samuel@correounivalle.edu.co, juan.munoz.delgado@correounivalle.edu.co]
 *
 * @date 2025-03-05
 *
 * @version 1.0
 *
 *
 *
 * @comentario: El programa utiliza la librería iostream para manejar la entrada y salida de datos.
 * Se usa el espacio de nombres std; para permitir usar elementos de la biblioteca estándar de C++ como cout c in sin necesidad de 
 * prefijarlos con std::.
 * Se declararon las variables nombre, apellido, nit , cargo y salario de tipo string y se pidio al usuario ingresar sus 
 * datos correspondientes.
 * El programa muestra un resumen de la compra con el formato:[nombre][apellido], identificado/a con el numero de identidad
 * [nit], en el puesto de [cargo] recibe un pago mensual de [salario]
*/


#include <iostream>
using namespace std;

int main() {
    // Le pide al usuario su nombre
    string nombre;
    cout << "Nombre: ";
    cin >> nombre;

    // Le pide al usuario su apellido
    string apellido;
    cout << "Apellido: ";
    cin >> apellido;

    // Le pide al usuario su NIT
    string nit;
    cout << "NIT: ";
    cin >> nit;

    // Le pide al usuario su cargo
    string cargo;
    cout << "Cargo: ";
    cin >> cargo; 

    // Le pide al usuario su salario
    string salario;
    cout << "Salario: ";
    cin >> salario;   
    cout << endl;
    
    cout << nombre << " " << apellido << ", identificada con el numero de identidad " 
    << nit << ", en el puesto de " << cargo << " recibe un pago mensual de " << salario << endl;
}
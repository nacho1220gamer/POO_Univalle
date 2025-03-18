/* 
 * @file ejercicio3.cpp
 *
 * @brief Un programa que simula la compra de un producto en una tienda online.
 *
 * 
 *
 * @details El programa muestra un resumen de la compra, incluyendo el nombre del usuario, el nombre del producto, el 
 * precio y la garantía. Este programa es útil para registrar y mostrar detalles de transacciones de compra de manera clara 
 * y organizada. 
 *
 * @author [Ignacio Henao, Juan Camilo Ramos, Samuel Saldaña, Juan Manuel Muñoz]
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
 * Se usa el espacio de nombres std; para permitir usar elementos de la biblioteca estándar de C++ como cout c in sin 
 * necesidad de prefijarlos con std::.
 * Los datos son ingresados por el usuario atreves del comando cin, estos datos son de tipo string.
 * El programa muestra un resumen de la compra con el formato:[nombre_usuario] adquirió [nombre_producto] por el precio de  
 * [precio], con garantía de [garantía] años.
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Le pide al usuario el nombre del producto
    string nombre_producto;
    cout << "Nombre producto: ";
    getline(cin, nombre_producto);

    // Le pide al usuario el precio del producto
    string precio;
    cout << "Precio: ";
    cin >> precio;

    // Le pide al usuario la garantia del producto
    string garantia;
    cout << "Garantia (years): ";
    cin >> garantia;

    // Le pide al usuario su nombre completo
    string nombre_usuario;
    cout << "Nombre usuario: ";
    getline(cin, nombre_usuario); 
    // Si se ingresa el nombre correctamente, imprime el mensaje en la pantalla.
    if(getline(cin, nombre_usuario)) {
        cout << nombre_usuario << " adquirio " << nombre_producto << " por el precio de " 
        << precio << ", con garantia de  " << garantia << " years." << endl;
    }
    cout << endl;  
}
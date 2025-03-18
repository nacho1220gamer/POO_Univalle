/* 
* @file ejercicio5.cpp
 *
 * @brief Un programa que determina a partir de dos números ingresados, cuál es el mayor número o si son iguales.
 *
 * 
 *
 * @details el programa solicita al usuario dos números que pueden ser distintos o iguales.
 * el programa evalúa cuál numero es mayor o si son iguales.
 * el programa devuelve el numero mayor o que son iguales en el caso del que lo sean.
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
 * Los datos se solicitan por teclado al usuario.
 * Se utilizaron 3 condicionales para evaluar cuál numero es mayor a cuál o si son iguales.
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    // Le pide al usuario un primer numero y se almacena en una variable entera
    int primer_num;
    cout << "Digite el primer numero: ";
    cin >> primer_num;

    // Le pide al usuario un segundo numero y se almacena en una variable entera
    int segundo_num;
    cout << "Digite el segundo numero: ";
    cin >> segundo_num;
    cout << endl;
    
    if (primer_num > segundo_num) {
        cout << "El numero mayor es: " << primer_num;
    }
    else if (primer_num < segundo_num) {
        cout << "El numero mayor es: " << segundo_num;
    }
    else {
        cout << "Los numeros son iguales";
    }
}
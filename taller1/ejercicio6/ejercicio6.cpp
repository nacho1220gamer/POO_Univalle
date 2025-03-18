/*
 * @file ejercicio6.cpp
 *
 * @brief Un programa que manipula una pila de números enteros
 * 
 * @details Utiliza una pila para almacenar números enteros y realiza operaciones de apilado y desapilado
 * basadas en si los números son pares o impares. El programa muestra el tamaño de la pila y el estado de los números
 * durante el proceso.
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
 * @comentario: Se utilizó la librería stack para crear y manipular la pila de números enteros.
 * Se investigó en la página https://en.cppreference.com/w/ sobre cómo utilizar la librería stack.
 * Los datos se cargan directamente en el main del programa y no se solicitan por teclado al usuario.
 * El programa muestra el tamaño de la pila y el estado de los números durante el proceso de apilado y desapilado.
 * Se implementó un bucle while para recorrer la pila y realizar las operaciones correspondientes.
*/

#include <iostream>
#include <stack>
using namespace std;

int main() {

    stack<int> pila;
    pila.push(0);
    pila.push(5);
    pila.push(3);
    pila.push(22);
    pila.push(1);

    stack<int> pilaAux;
    int pila_size = pilaAux.size();

    while(!pila.empty()) {
        int numero = pila.top();
        pila.pop();

        cout << "Tamaño de pila: " << pila_size << endl;
        
        pilaAux.push(numero);
        cout << "El numero: " << numero << " se apilo" << endl;
        
        if (numero % 2 != 0) {
            cout << "El numero NO se desapilo" << endl;
        }
        else {
            pilaAux.pop();
            cout << "El numero se desapilo" << endl;
        }

        pila_size = pilaAux.size();
        cout << "Tamaño de pila: " << pila_size << endl << endl;
    }
}
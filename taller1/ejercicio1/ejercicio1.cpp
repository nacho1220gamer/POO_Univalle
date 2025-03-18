/* 
 * @file ejercicio1.cpp
 *
 * @brief Un programa que un programa que muestra las tablas de multiplicar del 0 al 5.
 *
 * 
 *
 * @details Utiliza filas y columnas, donde cada fila representa un número del 0 al 5 y cada columna representa el producto
 * de cada una de las filas por la columna.
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
 * @comentario: Se utilizaron 2 for el primero itera sobre las filas de la tabla, desde el 0 al 5 imprimiendo cada una, el 
 * segundo también itera sobre las columnas de la tabla del 0 al 5 pero retorna el resultado del producto del numero de 
 * fila por el de la columna.
 * Los datos se cargan directamente en el main del programa y no se solicitan por teclado al usuario.
 * El programa muestra un encabezado con los números del 0 al 5 y después una tabla 7x6 que muestra los resultados de las tablas
 * de multiplicar del 0 al 5.
*/

#include <iostream>
using namespace std;

int main() {
    cout << " 0 1 2 3 4 5" << endl;
    for(int fila=0; fila<=5; fila++ ) {
        cout << fila << " ";
        for(int columna=0; columna<=5; columna++ ) {
            cout << fila*columna << " ";
        }
        cout << endl;
    }
}
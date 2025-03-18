/* 
 * @file ejercicio4.cpp
 *
 * @brief Un programa que calcula la nota final de un estudiante basado en tres componentes 
 *
 * @details El programa solicita al usuario las notas de práctica, teórica y participación, y calcula la nota final
 * aplicando ponderaciones específicas a cada componente. Las notas deben estar en un rango válido entre 0 y 5.
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
 * @comentario: El programa utiliza la librería iostream para manejar la entrada y salida de datos.
 * Se implementaron bucles do-while para asegurar que las notas ingresadas estén dentro del rango válido.
 * La nota final se calcula aplicando ponderaciones del 30% para la práctica, 60% para la teórica y 10% para la participación.
 * El programa muestra la nota final al usuario después de realizar los cálculos.
*/

#include <iostream>
using namespace std;

int main() {
    // Le pide al usuario la nota de practica
    float nota_practica;
    do {
        cout << "Digite la nota de practica: ";
        cin >> nota_practica;
    }
    while( nota_practica <= 0 && nota_practica >= 5);

    // Le pide al usuario la nota teorica
    float nota_teorica;
    do {
        cout << "Digite la nota teorica: ";
        cin >> nota_teorica;
    }
    while( nota_teorica <= 0 && nota_teorica >= 5);

    // Le pide al usuario la nota de participación
    float nota_participacion;
    do {
        cout << "Digite la nota de participacion: ";
        cin >> nota_participacion;
    }
    while( nota_participacion <= 0 && nota_participacion >= 5);
    cout << endl;
    
    float nota_final = (nota_practica * 0.3)+(nota_teorica * 0.6)+(nota_participacion * 0.1);
    cout << "La nota final es: " << nota_final;
}
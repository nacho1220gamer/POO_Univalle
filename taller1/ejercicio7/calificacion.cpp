/* 
 * @file calificacion.cpp
 * @brief Un programa que convierte una calificación de empleado en palabras
 *
 * @details El programa recibe una calificación (a, b, e) y la convierte en una descripción en palabras.
 * Si la calificación no es válida, se indica que no se clasificó.
 * 
 * @author [Ignacio Henao, Juan Camilo Ramos, Samuel Saldaña, Juan Manuel Muñoz ]
 * 
 * @mail [ignacio.henao@correounivalle.edu.co, juan.ramos.hoyos@correounivalle.edu.co , 
 * saldana.samuel@correounivalle.edu.co, juan.munoz.delgado@correounivalle.edu.co, ]
 * 
 * @date 2025-03-05
 * 
 * @version 1.0
 * 
 * @comentario: Se uso la libreria iostream.
 * Se usa la libreria string.
 * Se uso una clase llamada Empleado
 * Se uso una variable char para pedir el usuario la calificación.
 * El programa no comprueba la entrada, por lo que se asume que el valor ingresado es válido.
*/
#include "calificacion.h"

Calificacion::Calificacion(char nota) : nota(nota) {}

std::string Calificacion::obtenerDescripcion() const {
    if (nota == 'a') return "aceptable";
    if (nota == 'b') return "buena";
    if (nota == 'e') return "excelente";
    return "?";
}
/*
    Proyecto: Drogueria 
    Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
    Universidad del Valle

    Descripción:
    Este proyecto gestiona una Drogueria, proporcionando 
    funcionalidades para registrar, buscar y analizar la información de la drogueria.
    

    Autor: Victor Bucheli
    Correo: victor.bucheli@correounivalle.edu.co
    Fecha: Abril 2025
*/

#include "Categoria.h"
#include <iostream>
#include <string>
using namespace std;

Categoria::Categoria(string auxCategoria) {
    categoria = auxCategoria;
}

string Categoria::getCategoria() const {
    return categoria;
}
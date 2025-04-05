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
#include "Producto.h"
#include <iostream>
#include <string>
using namespace std;

Producto::Producto(string id, string nombre, double precio, int cantidadStock) {
    this->id = id;
    this->nombre = nombre;
    this->precio = precio;
    this->cantidadStock = cantidadStock;
}

void Producto::agregarCategoria(Categoria* auxCategoria) {
    /* Itera sobre el vector y comprueba que la categoria no este previamente, 
    para evitar duplicados */
    ya_posee = false;
    for(int i = 0; i < categorias.size(); i++) {
        if(categorias[i]->getCategoria == auxCategoria->getCategoria) {
            cout << "El producto ya posee esta categoria." << endl;
            ya_posee = true;
        }
    }
    if(!ya_posee) {
        categorias.push_back(auxCategoria);
        cout << "Categoria añadida correctamente" << endl;
    }

}
void Producto::eliminarCategoria(Categoria* auxCategoria) {
    /* Itera sobre el vector y comprueba que la categoria este previamente, 
    para eliminarla */
    for(int i = 0; i < categorias.size(); i++) {
        if(categorias[i]->getCategoria == auxCategoria->getCategoria) {
            
            cout << "Categoria eliminada correctamente" << endl;
        }
    }
}

// Getters
string Producto::getId() const {
    return id;
}

string Producto::getNombre() const {
    return nombre;
}

double Producto::getPrecio() const {
    return precio;
}

int Producto::getCantidadStock() const {
    return cantidadStock;
}
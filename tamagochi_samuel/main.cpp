/* 
 * @file main.cpp
 * @brief Un programa que emula el comportamiento de una mascota
 *
 * @details 
 * -El programa emula el comportamiento de una consola tamagochi que permite interactuar
 * con la mascota a través de dos clases.
 * 
 * @author [Ignacio Henao, Juan Camilo Ramos, Samuel Saldaña, Juan Manuel Muñoz ]
 * 
 * @mail [ignacio.henao@correounivalle.edu.co, juan.ramos.hoyos@correounivalle.edu.co , 
 * saldana.samuel@correounivalle.edu.co, juan.munoz.delgado@correounivalle.edu.co ]
 * 
 * @date 2025-03-20
 * 
 * @version 1.0
 * 
 * @comentario:
 * Se usa iostream para imprimir en la consola
 * Se usan las clases Mascota y Comida
 * Se usa el namespace std para que el codigo se vea más limpio
*/

#include <iostream>
#include "mascota.h"
#include "comida.h"
using namespace std;

int main(){
    //creación de las mascotas
    Mascota kira = Mascota("");
    Mascota simon = Mascota("");
    //creación de la comida con su saturación de hambre
    Comida hamburguesa = Comida("",100);
    Comida pollo = Comida("",50);
    Comida papasfritas = Comida("",25);
    Comida croquetas = Comida("",10);

    //personalización de la mascota 1

    kira.setNombre("kira");  //definicion del nombre de la mascota 1
    kira.setTipo("perro");   //definicion del tipo de animal de la mascota 1

    //interacciones de la mascota 1

    kira.setComer(hamburguesa.getSaturacion()); //dar de comer hamburguesa a kira
    kira.Saludar();      //kira saluda
    kira.siComio();     //conocer si kira ya comio o no
    kira.darLapata();  //kira da la pata
    kira.jugar();     //kira juega
    kira.dormir();   //kira duerme

    //personalización de la mascota 2

    simon.setNombre("Simon");  //definicion del nombre de la mascota 2
    simon.setTipo("gato");  //definicion del tipo de animal de la mascota 2

    //interacciones de la mascota 2

    simon.setComer(papasfritas.getSaturacion());  //dar de comer papas fritas a simon
    simon.Saludar();      //simon saluda
    simon.siComio();     //conocer si simon ya comio o no
    simon.darLapata();  //simon da la pata
    simon.jugar();     //simon juega
    simon.dormir();   //simon duerme
}
/* 
 * @file main.cpp
 * @brief Un programa que emula un comportamiento de un camión de trasteos.
 *
 * @details El programa crea objetos de tipo Camion a los cuales los carga con objetos para realizar
 * una mudanza y comprueba que pueda cargalos en los camiones.
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
 * @comentario: Se uso la libreria iostream.
 * Se usa la libreria string.
 * Se uso una clase llamada Camion.
 * El programa no pide datos de entrada.
*/

#include <iostream>
#include "Camion.h"
using namespace std;

int main()
{
  // Se definen dos camiones con placas y capacidades diferentes.
  Camion unCamion("ABC-001", 10000);
  Camion otroCamion("DEF-002", 5000);
  // Se crea un arreglo con 8 enteros que representan objetos para ingresar a los camiones.
  int objetos[8] =
  {
    1000, 3000, 5000, 2000, 500, 1800, 4000, 30
  };
  // Se recorre el arreglo de objetos para cargarlos en los camiones.
  for(int i = 0; i < 8; i++)
  {
    int objetoATransportar = objetos[i];
    // Si el camión 1 no puede cargar un objeto por su peso 
    if(!unCamion.cargarUnObjeto(objetoATransportar))
    {
      // Si el camión 2 no puede cargar un objeto por su peso   
      if(!otroCamion.cargarUnObjeto(objetoATransportar))
      {
        cout << "El objeto número " << i << " que pesa " << objetos[i] << " no se puede cargar en ningún camión." << endl;
      }    
    }
  }
  // Imprime cuantos kilogramos está transportando cada camión.
  cout << "El camión " << unCamion.getPlaca() << " " << "transportó" <<  " " << unCamion.hacerMudanza() << " kg."   << endl;
  cout << "El camión " << otroCamion.getPlaca() << " " << "transportó" << " " << otroCamion.hacerMudanza() << " kg." << endl;
  return 0;

}
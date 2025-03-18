#include <iostream>
#include "mascota.h"
#include "comida.h"

using namespace std;
int main(){
    Mascota kira = Mascota("");
    Comida hamburguesa= Comida("hamburguesa",100);
    Comida pizza= Comida("pizza",100);
    Comida papas= Comida("papas",50);

    kira.setNombre("Kira");
    kira.setTipo("Perro");
    kira.saludar();
    kira.siComio();
    kira.setComer (hamburguesa.getSaturacion ());
    kira.siComio();
    kira.saludar();
    kira.saludar();
    kira.siComio();
    kira.setComer (papas.getSaturacion ());
    kira.siComio();
    return 0;
}
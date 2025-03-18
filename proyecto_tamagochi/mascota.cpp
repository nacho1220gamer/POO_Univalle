#include "mascota.h"


#include <iostream>
#include <string>

//atributos de esta clase (INICIALIZAR en .h)
Mascota::Mascota(string auxNombre) {//constructor: no lleva void, ni tipo de dato a return
  nombre = auxNombre;//atributos inicializados al crear objetos de esta clase
  tipo = "n/a";
  comerSaturacion = 0; //puede ser que
}

//atributos de esta clase (INICIALIZAR en .h)
Mascota::Mascota(string auxNombre, int auxComer) {//constructor: no lleva void, ni tipo de dato a return
  nombre = auxNombre;//atributos inicializados al crear objetos de esta clase
  tipo = "n/a";
  comerSaturacion = auxComer; //puede ser que
}

//metodos de esta clase (INICIALIZAR en .h)
void Mascota::saludar() { 
    cout<<"Hola, soy tu mascota "<<nombre<<endl;
    cout << "  * * * * *" << endl << " *         *" << endl << "*  *     *  *" << endl
    << "*    ***    *" << endl << "*   (o o)   *" << endl << R"( *   /=\   *)" << endl <<
    "  * * * * *" << endl;
    comerSaturacion=comerSaturacion-15;
  
}

void Mascota::siComio() {//nombres de atributos y methods siempre diferent
    if (comerSaturacion >= 80){
    cout<<nombre<<": Pero que lleno estoy, no más comida."<<endl;
        cout << "      * * * * *\n";
        cout << "    *           *\n";
        cout << "   *  *       *  *\n";
        cout << "  *    ******    *\n";
        cout << " *     (^ ^)     *\n";
        cout << "  *      -      *\n";
        cout << "   *  \\_____/  *\n";
        cout << "    *         *\n";
        cout << "     * * * * *\n";
        cout << "       |   |\n";
        cout << "       |   |\n";
        cout << "       |___|\n";
    }
    else{
        cout<<nombre<<": Creo que moriré de hambre"<<endl;
        cout << "      * * * * *\n";
        cout << "    *           *\n";
        cout << "   *  *       *  *\n";
        cout << "  *    ******    *\n";
        cout << " *     (T T)     *\n";
        cout << "  *      -      *\n";
        cout << "   *  \\_____/  *\n";
        cout << "    *         *\n";
        cout << "     * * * * *\n";
        cout << "       |   |\n";
        cout << "       |   |\n";
        cout << "       |___|\n";
        cout << "\n";
    }
  
}

void Mascota::darLaPata() { 
    cout<<nombre<<": hola, saludo y doy la pata"<<endl;
    cout << "      * * * * *\n";
    cout << "    *           *\n";
    cout << "   *  *       *  *\n";
    cout << "  *    ******    *\n";
    cout << " *     (^ ^)     *\n";
    cout << "  *      -      *\n";
    cout << "   *  \\_____/  *\n";
    cout << "    *         *\n";
    cout << "     * * * * *\n";
    cout << "       |   |\n";
    cout << "       |   |\n";
    cout << "       |___|\n";
    cout << "        \\\n";
    cout << "         \\\n";
    cout << "          *\n";
    cout << "\n";
    comerSaturacion=comerSaturacion-10;
  
}

//getters and setters (inicializar en .h)
string Mascota::getNombre(){
  return nombre;
}

void Mascota::setNombre(string auxNombre){
  nombre = auxNombre;
}

string Mascota::getTipo(){
  return tipo;
}

void Mascota::setTipo(string auxTipo){
 tipo = auxTipo;
}

int Mascota::getComer(){
  return comerSaturacion;
}

void Mascota::setComer(int saturacionComida){
	comerSaturacion = comerSaturacion+saturacionComida;
}
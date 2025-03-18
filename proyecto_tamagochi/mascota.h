#ifndef _MASCOTA_H_
#define _MASCOTA_H_
#include <string> //sin esto no puedo utilizar tipo de dato string
//#include <iostream> no parece ser necesario cuz (no utilizo endl ni cout)
using  namespace std;

class Mascota
{
  private:
    string nombre;
    string tipo;
    int comerSaturacion;
	bool dormir;

  public:
    Mascota(string auxNombre); //declaracion del constructor
    Mascota(string auxNombre, int auxComer); //declaracion del constructor
    //setters
    void setNombre(string auxNombre);
    void setTipo(string auxTipo);
    void setComer(int saturacionComida);
    //getters
    string getNombre();
    string getTipo();
    int getComer();
    //funciones
    void siComio(); //pendiente.........
    void darLaPata();
    void saludar();
	void jugar();

};

#endif // _MASCOTA_H_
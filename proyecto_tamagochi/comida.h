#ifndef _COMIDA_H_
#define _COMIDA_H_
#include <string>
using  namespace std;

class Comida
{
  private:
    	string nombre;
    	int saturacionComida;
  public:
	Comida(string auxNombre, int auxSaturacion);
	string getNombre();
	int getSaturacion();
};

#endif // _COMIDA_H_

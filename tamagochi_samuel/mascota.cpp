/* 
 * @file mascota.cpp
 * @brief Un programa que emula el comportamiento de una mascota
 *
 * @details 
 * -El programa crea objetos de tipo Mascota que puede hacer diferentes acciones.
 * -Define funciones que permiten a la mascota hacer acciones.
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
 * Se usa la libreria string.
 * Se definieron las funciones de la clase Mascota
 * Se uso R"()" para imprimir las imagenes de las mascotas en format ASCII.
*/

#include "Mascota.h"
#include <iostream>
#include <string>

Mascota::Mascota(string nombre){ //constructor: no lleva void, ni tipo de dato a return
    Mascota::nombre=nombre; //atributos inicializados al crear objetos de esta clase
    tipo="n/a"; //aun no se define el tipo
    Mascota::comer=0; //se inicia con la comida ingerida en 0
}

//metodos de esta clase

void Mascota::Saludar(){ 
    cout<<"hola soy tu Mascota "<<Mascota::nombre<<endl;
    if(tipo=="perro"){  //si la Mascota es de tipo "perro" se muestra la imagen inferior
        cout<< R"(  
            /^ ^\
           / 0 0 \
           V\ Y /V
            / - \
           /    |
          V__) ||)"<<endl;
    }
    if(tipo=="gato"){ //si la Mascota es de tipo "gato" se muestra la imagen inferior
        cout<< R"(
 ,_     _
 |\\_,-~/
 / _  _ |    ,--.
(  @  @ )   / ,-'
 \  _T_/-._( (
 /         `. \
|         _  \ |
 \ \ ,  /      |
  || |-_\__   /
 ((_/`(____,-'
        )"<<endl;
    }
}

void Mascota::siComio(){ 
    if(Mascota::comer==100){  // se ejecuta cuando la saturacion de comida este al maximo
        cout<<Mascota::nombre<<": Pero que lleno estoy, no mas comida."<<endl;
        if(tipo=="perro"){ //si la Mascota es de tipo "perro" se muestra la imagen inferior
            cout<<R"(
                ____
               /    \__
 |\    ______ /    @   \
 \ \__/      |    \  .: |>
  \          |    |\___/
   |          \__/   \
   /  /             \|
  /  /\__________/\  \        _______
  L_JJ             \__JJ    /_________\
         )"<<endl;
        }
        if(tipo=="gato"){ //si la Mascota es de tipo "gato" se muestra la imagen inferior
            cout<<R"(
    /\_____/\
   /  o   o  \
  ( ==  ^  == )
   )         (
  (           )
 ( (  )   (  ) )      _______
(__(__)___(__)__)   /_________\
            
         )"<<endl;
        }

    }
    if(50>=Mascota::comer<100){  // se ejecuta cuando la saturacion de comida este a la mitad o mas hasta 99
        cout<<Mascota::nombre<<": ya no morire de hambre"<<endl;
        if(tipo=="perro"){ //si la Mascota es de tipo "perro" se muestra la imagen inferior
            cout<<R"(
       /^-^\
      / o o \
     /   Y   \
     V \ v / V
       / - \
      /    |
(    /     |      _______
 ===/___) ||    /_________\
               
         )"<<endl;
        }
        if(tipo=="gato"){ //si la Mascota es de tipo "gato" se muestra la imagen inferior
            cout<<R"(
      ,_     _,
      |\\___//|
      |=6   6=|
      \=._Y_.=/
       )  `  (    ,
      /       \  ((
      |       |   ))
     /| |   | |\_//           
     \| |._.| |/-`      _______
      '"'   '"'       /_________\  
            
         )"<<endl;
        }

    }
    else{ // se ejecuta cuando la saturacion de comida es menor a 50
        cout<<Mascota::nombre<<": Creo que moriré del hambre, pesimo amo!!"<<endl;
        if(tipo=="perro"){ //si la Mascota es de tipo "perro" se muestra la imagen inferior
            cout<<R"(
            /)-_-(\
             (o o)
     .-----__/\o/
    /  __      / 
\__/\ /  \_\ |/    
     \\     ||     
     //     ||   
     |\     |\
            )"<<endl;
    }
        if(tipo=="gato"){ //si la Mascota es de tipo "gato" se muestra la imagen inferior
            cout<<R"(
     /\_/\ 
     {@ @}
     ==~== 
      \^/
      |=|    
(    /  \  
 \  /   |  
  )/ |||| 
 (( /||||  
   m !m!m  
            )"<<endl;
}
    }
}

void Mascota::darLapata(){
    cout<<nombre<<": Toma patadon, Tomaaaaa!!!!"<<endl;
    //para cualquiera de los tipos de Mascota (perro/gato) se muestra la imagen inferior
    cout<<R"(  
      _   _   _
     (_) (_) (_)
    /   ____   \ _
   |  (      )  (_)          
    \  \____/  /
     \        /
    )"<<endl;
}

void Mascota::dormir(){
    cout<<nombre<<": ZZZzzz..."<<endl;
    if(tipo=="perro"){  //si la Mascota es de tipo "perro" se muestra la imagen inferior
        cout<<R"(
ZZZzz __    __
   o-uu ))_____\\
   "--__/        )
   c_c__/---c___/
          )"<<endl;
    }
    if(tipo=="gato"){  //si la Mascota es de tipo "gato" se muestra la imagen inferior
        cout<<R"(
            |\      _,,,---,,_
      ZZZzz /,`.-'`'    -.  ;-;;,_
           |,4-  ) )-,_. ,\ (  `'-'
          '---''(_/--'  `-'\_)
          )"<<endl;
    }

}

void Mascota::jugar(){
    cout<<nombre<<": Me estoy divirtiendo mucho!!"<<endl;
    if(tipo=="perro"){  //si la Mascota es de tipo "perro" se muestra la imagen inferior
        cout<<R"(
    ___
 __/_  `.  .-"""-.
 \_,` | \-'  /   )`-')
  "") `"`    \  ((`"`
 ___Y  ,    .'7 /|
(_,___/...-` (_/_/
          )"<<endl;
    }
    if(tipo=="gato"){  //si la Mascota es de tipo "gato" se muestra la imagen inferior
        cout<<R"(
                           .'\                
                          //  ;               
                         /'   |               
        .----..._    _../ |   \               
         \'---._ `.-'      `  .'              
          `.    '              `.             
            :            _,.    '.            
            |     ,_    (() '    |            
            ;   .'(().  '      _/__..-        
            \ _ '       __  _.-'--._          
            ,'.'...____'::-'  \     `'        
           / |   /         .---.              
     .-.  '  '  / ,---.   (     )             
    / /       ,' (     )---`-`-`-.._          
   : '       /  '-`-`-`..........--'\         
   ' :      /  /                     '.       
   :  \    |  .'         o             \      
    \  '  .' /          o       .       '     
     \  `.|  :      ,    : _o--'.\      |     
      `. /  '       ))    (   )  \>     |     
        ;   |      ((      \ /    \___  |     
        ;   |      _))      `'.-'. ,-'` '     
        |    `.   ((`            |/    /      
        \     ).  .))            '    .       
     ----`-'-'  `''.::.________::: --
          )"<<endl;
    }

}

//getters y setters
string Mascota::getNombre(){
    return Mascota::nombre; //devuelve el valor del nombre
}

void Mascota::setNombre(string nombre){
    Mascota::nombre=nombre;  //para darle nombre a la Mascota
}

string Mascota::getTipo(){
    return Mascota::tipo=tipo;  //devuelve el valor del tipo
}
void Mascota::setTipo(string tipo){
    Mascota::tipo=tipo;     //para darle un tipo a la Mascota
}

int Mascota::getComer(){
    return Mascota::comer;   //devuelve el valor de llenura
}
void Mascota::setComer(int comer){
    Mascota::comer=comer;   //para darle de comer a la Mascota
}

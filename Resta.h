//
//  Resta.h
//  Sumar,restar y multiplicar
//
//

#ifndef Resta_h
#define Resta_h
#include "Operacion.h"

class Resta: public Operacion{
    public:
        Resta();
        Resta(int,int);
        void Operar_resta(int valor1,int valor2);
    
    private:
};

Resta::Resta():Operacion(){
}

Resta::Resta(int v1, int v2): Operacion(v1, v2){
    valor1= v1;
    valor2=v2;
}

void Resta::Operar_resta(int valor1,int valor2){
    resultado= valor1 - valor2;
    cout << "a" << endl;
    MostrarResultado();
}
#endif /* Resta_h */

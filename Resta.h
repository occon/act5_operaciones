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
        void Operar();
};

Resta::Resta():Operacion(){
}

Resta::Resta(int v1, int v2): Operacion(v1, v2){
    valor1= v1;
    valor2=v2;
}

void Resta::Operar(){
    resultado= valor1 - valor2;
    Operacion::setResultado(resultado);
    cout << endl << "El resultado de la resta " << valor1 << " - " << valor2 << " = ";
    MostrarResultado();

}
#endif /* Resta_h */

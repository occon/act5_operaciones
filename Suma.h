//
//  Suma.h
//  Sumar,restar y multiplicar
//
//

#ifndef Suma_h
#define Suma_h
#include "Operacion.h"
class Suma: public Operacion{
    public:
        Suma();
        Suma(int, int);
        void Operar();
};

Suma::Suma(){
}

Suma::Suma(int v1, int v2): Operacion(v1, v2){
    valor1=v1;
    valor2=v2;
}

void Suma::Operar(){
    cout << "Esta es una suma: " << endl;
    resultado= valor1+valor2; 
    cout << resultado << endl;
}

Operacion valor1;

#endif /* Suma_h */

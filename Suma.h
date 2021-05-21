//
//  Suma.h
//  Sumar,restar y multiplicar
//
//

#ifndef Suma_h
#define Suma_h
#include "Operacion.h"

using namespace std;

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
    resultado= valor1+valor2; 
    setResultado(resultado);
    cout << endl << "El resultado de la suma " << valor1 << " + " << valor2 << " = ";
    MostrarResultado();
}


#endif /* Suma_h */

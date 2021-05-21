//
//  Multiplicacion.h
//  Sumar,restar y multiplicar
//
//

#ifndef Multiplicacion_h
#define Multiplicacion_h
#include "Operacion.h"

class Multiplicacion: public Operacion{
    public:
        Multiplicacion();
        Multiplicacion(int,int);
        void Operar();
};

Multiplicacion::Multiplicacion(): Operacion(){ 
}

Multiplicacion::Multiplicacion(int v1, int v2): Operacion(v1,v2){
    valor1=v1; 
    valor2=v2; 
}

void Multiplicacion::Operar(){
    resultado=valor1 * valor2;  
    setResultado(resultado);
    cout << endl << "El resultado de la multiplicacion " << valor1 << " * " << valor2 << " = ";
    MostrarResultado();
}

    

#endif /* Multiplicacion_h */

//
//  Operacion.h
//  Sumar,restar y multiplicar
//
//

#ifndef Operacion_h
#define Operacion_h
using namespace std;

class Operacion{
    public:
        Operacion();
        Operacion(int, int);
        void setValor1(int);
        void setValor2(int);
        int getValor1();
        int getValor2();
        void MostrarResultado();
    
    protected:
        int valor1;
        int valor2;
        int resultado;
};

Operacion::Operacion(){
    valor1= 0;
    valor2= 0;
};

Operacion::Operacion(int _valor1, int _valor2){
    valor1= _valor1;
    valor2= _valor2;
}

//Getters
int Operacion::getValor1(){
    return valor1;
}

int Operacion::getValor2(){
    return valor2;
}

//Setters
void Operacion::setValor1(int _valor1){
    valor1=_valor1;
}

void Operacion::setValor2(int _valor2){
    valor2=_valor2;
}

//Métodos
void Operacion::MostrarResultado(){
    cout << resultado << endl;
}

#endif /* Operacion_h */

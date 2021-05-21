/*
Lydia Delgado Uriarte A01740532
Hugo Edgar Palomares Estrella A01741537
Profesor: Abraham Nezahualcoyotl Aldaco Gastélum, Ph.D.

Actividad 05: Separar Archivos Header de Suma, Resta y Multiplica
20 Mayo 2020
*/

#include <iostream>
using namespace std;
#include "Multiplicacion.h"
#include "Suma.h"
#include "Resta.h"

int main(){
    char opcion;
    int v1,v2;
    Resta p_resta(v1,v2);
    Suma p_suma(v1,v2);
    Multiplicacion p_multiplicacion(v1,v2);

    do {
        cout << endl;
        cout << "--------MENU--------"<< endl; 
        cout << "Opciones disponibles " << endl;
        cout << " 1) Suma " << endl;
        cout << " 2) Resta " << endl;
        cout << " 3) Multiplicacion " << endl;
        cout << " 4) Terminar " << endl;
        cin >> opcion;
        switch (opcion) {
            case '1':
                cout << endl << "-------SUMA-------" << endl;
                cout << "Ingrese el valor 1: " ;
                cin >> v1;
                cout << endl << "Ingrese el valor 2: ";
                cin >> v2;
                p_suma.setValor1(v1);
                p_suma.setValor2(v2);
                p_suma.Operar();

                break;
            case '2':
                cout << endl << "-------RESTA-------" << endl;
                cout << "Ingrese el valor 1: " ;
                cin >> v1;
                cout << endl << "Ingrese el valor 2: ";
                cin >> v2;
                p_resta.setValor1(v1);
                p_resta.setValor2(v2);
                p_resta.Operar();
                break;
            case '3':
                cout << endl << "-------MULTIPLICACION-------" << endl;
                cout << "Ingrese el valor 1: " ;
                cin >> v1;
                cout << endl << "Ingrese el valor 2: ";
                cin >> v2;
                p_multiplicacion.setValor1(v1);
                p_multiplicacion.setValor2(v2);
                p_multiplicacion.Operar();
                break;

            case '4':
                break;
            default:
                cout << "Opcion invalida"<<endl;
        }
    } while (opcion != '4');
    return 0;
}
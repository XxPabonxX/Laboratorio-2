/*
Problema 16.



 */

#include "Funciones.h"
#include <iostream>

using namespace std;

int Problema16(){

    int tam, F=1, Z=1;

    cout << "Ingrese la dimencion de la matriz: ";
    cin >> tam;

    for (int i = tam; i > 1; i--){
        Z = Z*i;
    }


    for (int i = tam + tam; i > 1; i--){
        F = F*i;
    }

    F = F / (Z * Z);
    cout << "Para una malla de: " << tam << "x" << tam << " Hay " << F << " Caminos" << endl;

    return 0;
}

/*
Problema 8.

Escriba un programa que reciba una cadena de caracteres y separe los números del resto de caracteres,
generando una cadena que no tiene números y otra con los números que había en la cadena original.

 */

#include "Funciones.h"
#include <iostream>

using namespace std;

int cadenaentero(char* cadena);

int Problema8() {

    int Nnumeros = 0, Ncaracteres = 0;

    char* cadena = new char[0];
    char* caracteres = new char[0];
    char* numeros = new char[0];
    int * numerosR = new int [0];

    cout << "Ingrese la cadena: ";
    cin >> cadena;



    for (int i = 0; cadena[i] != '\0'; ++i) {

        if (cadena[i] >= 48 && cadena[i] <= 57) {

            numeros[Nnumeros] = cadena[i];
            Nnumeros++;

        }else{

            caracteres[Ncaracteres] = cadena[i];
            Ncaracteres++;

        }
    }

    cout << "La cadena de solo caractes es: " << endl;

    for (int i = 0; i < Ncaracteres; ++i) {

        cout << caracteres[i];

    }

    cout << endl << "La cadena de solo numeros es: " << endl;

    for (int i = 0; i< Nnumeros; i++){

        cout << numeros[i];

    }

    delete[] cadena;
    delete[] caracteres;
    delete[] numeros;

    return 0;

}

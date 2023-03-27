/*
Problema 6.

Escriba un programa que reciba una cadena de caracteres y cambie las letras minúsculas por mayúsculas,
los demás caracteres no deben ser alterados.

 */

#include "Funciones.h"
#include <iostream>

using namespace std;

int Problema6(void) {

    char cadena[255];

    cout <<"Ingrese una cadena de caracters: ";
    cin >> cadena;

    for (int i = 0; cadena[i] != '\0';i++){

        if (cadena[i] >= 97 && cadena[i] <= 122){

            cadena[i] = cadena[i]-32;

        }

    }

    for (int i = 0; cadena[i] != '\0';i++){

        cout << cadena[i];

    }

    return 0;

}

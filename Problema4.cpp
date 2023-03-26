/*
Problema 4.

Haga una función que reciba una cadena de caracteres numéricos, la convierta a un número enteroy retorne dicho número

 */

#include "Funciones.h"
#include <iostream>

using namespace std;

int cadenaentero(char* cadena);

int Problema4(void){

    char cadena[] = " ";

    cout << "Ingrese un numero: ";
    cin >> cadena;

    int numero = cadenaentero(cadena);

    cout << "El valor entero es: " << numero << endl;

    return 0;

}

int cadenaentero(char* cadena){

    int num = 0;

    for(int i = 0; cadena[i] != '\0'; i++){

        num = num*10 + (cadena[i]-'0');

    }

    return num;

}

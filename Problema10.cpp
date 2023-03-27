/*
Problema 10.

Escribir un programa que permita convertir un número en el sistema romano al sistema arábigousado actualmente

 */

#include "Funciones.h"
#include <iostream>

using namespace std;

const int ROMAN_I = 1;
const int ROMAN_V = 5;
const int ROMAN_X = 10;
const int ROMAN_L = 50;
const int ROMAN_C = 100;
const int ROMAN_D = 500;
const int ROMAN_M = 1000;

int Romanoentero(char romanChar) {

    switch (romanChar) {

        case 'I':

            return ROMAN_I;

        case 'V':

            return ROMAN_V;

        case 'X':

            return ROMAN_X;

        case 'L':

            return ROMAN_L;

        case 'C':

            return ROMAN_C;

        case 'D':

            return ROMAN_D;

        case 'M':

            return ROMAN_M;

        default:

            return 0;

    }
}

int Problema10(void){

    char NumeroRomano[100];
    int evaluacion_decimal = 0, preevaluacion = 0, Actual = 0;

    cout << "Ingresa un numero romano: ";
    cin >> NumeroRomano;

    for (int i = 0; NumeroRomano[i] != '\0'; i++) {

        Actual = Romanoentero(NumeroRomano[i]);
        evaluacion_decimal += Actual;

        if (Actual > preevaluacion) {

            evaluacion_decimal -= preevaluacion*2;

        }

        preevaluacion = Actual;

    }

    cout << "El numero romano " << NumeroRomano << " es igual a " << evaluacion_decimal << " en el sistema decimal." << endl;

    return 0;
}

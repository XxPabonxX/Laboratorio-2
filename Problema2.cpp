/*
Problema 2.

Elabore un programa que genere un arreglo de 200 letras mayúsculas aleatorias,
imprima este arregloy luego imprima cuantas veces se repite cada letra en el arreglo.

 */

#include "Funciones.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int Problema2(void){

    char letras[200] = {0};
    int suma = 0, repeticiones[26] = {0};

    srand(time(NULL));

    // Generar el arreglo de 200 letras mayúsculas aleatorias
    for (int i = 0; i < 200; i++) {

        letras[i] = 'A' + rand() % 26;

    }

    // Imprimir el arreglo
    cout << "Arreglo de letras aleatorias:" << endl << endl;

    for (int i = 0; i < 200; i++) {

        cout << letras[i] << " ";

    }
    cout << endl << endl;

    // Contar cuántas veces se repite cada letra en el arreglo
    for (int i = 0; i < 26; i++) {

        suma = 0;

        for (int j = 0; j<200;j++){

            if (letras[j]== ('A'+i)){

                suma +=1;

            }
        }

        repeticiones[i] = suma;

    }

    // Imprimir la frecuencia de cada letra
    cout << "Frecuencia de cada letra:" << endl << endl;

    for (int i = 0; i < 26; i++) {

        cout << (char)('A' + i) << ": " << repeticiones[i] << endl;

    }

    return 0;

}

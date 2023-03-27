/*
Problema 18.



 */

#include "Funciones.h"
#include <iostream>

using namespace std;

int factorial(int);
void nPermutacion(int);

int Problema18() {

    int n = 0;

    cout << "Ingrese el enesimo termino: ";
    cin >> n;

    nPermutacion(n);

    return 0;

}


// Función para calcular el factorial de un número

int factorial(int n){

    int fact=1;

    for (int i=1; i <=n ; i++){

        fact*=i;

    }

    return fact;

}

void nPermutacion(int n){

    // Generar un arreglo de números del 0 al 9
    int semilla = n, fact = 0, posicionactual, temp = 0;
    int nums[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Calcular la permutación lexicográfica correspondiente

    for (int i = 0; i < 10; i++){

        fact = factorial(9-i);
        posicionactual=i+n/fact;
        n%=fact;

        while (posicionactual>i){

            temp = nums[posicionactual];
            nums[posicionactual] = nums[posicionactual-1];
            nums[posicionactual-1] = temp;
            posicionactual--;

        }

        if (n == 0) {

            break;

        }
    }

    cout << "La permutacion numero: " << semilla << " es: ";
    for (int i=0; i<9; i++) {

        cout << nums[i];

    }

    cout << endl;

}

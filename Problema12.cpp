/*
Problema 12.

Un cuadrado mágico es una matriz de números enteros sin repetir, en la que la suma de los númerosen cada columna,
cada fila y cada diagonal principal tienen como resultado la misma constante.
Escriba un programaque permita al usuario ingresar una matriz cuadrada, imprima la matriz y verifique si la matriz es un cuadradomágico.
 */

#include "Funciones.h"
#include <iostream>

using namespace std;

int Problema12(void){

    int tamaño_matriz = 0, Sumamagica = 0, SumaFilaColumna = 0;
    bool Esmagico = true;

    cout << "Ingrese el orden de la matriz: ";
    cin >> tamaño_matriz;

    int matriz[tamaño_matriz][tamaño_matriz];

    for (int i = 0; i < tamaño_matriz; i++){

        for(int j = 0; j < tamaño_matriz; j++){

            cout << "Ingrese el numero de la posicion " << i + 1 << ", " << j + 1 << ": ";
            cin >> matriz[i][j];

        }

    }

    for (int i = 0; i < tamaño_matriz; i++){

        cout << endl;

        for(int j = 0; j < tamaño_matriz; j++){

            cout << matriz[i][j] << " ";

        }

    }

    for (int j = 0; j < tamaño_matriz; j++){

        Sumamagica += matriz[0][j];

    }

    for (int i = 0; i < tamaño_matriz; i++) {

        SumaFilaColumna = 0;

        for (int j = 0; j < tamaño_matriz; j++){

            SumaFilaColumna += matriz[i][j];

        }

        if(SumaFilaColumna != Sumamagica){

            Esmagico = false;

        }

    }

    for (int j = 0; j < tamaño_matriz; j++) {

        SumaFilaColumna = 0;

        for (int i = 0; i < tamaño_matriz; i++){

            SumaFilaColumna += matriz[i][j];

        }

        if(SumaFilaColumna != Sumamagica){

            Esmagico = false;

        }

    }

    SumaFilaColumna = 0;
    for (int i = 0; i < tamaño_matriz; i++) {

        SumaFilaColumna += matriz[i][i];

    }

    if(SumaFilaColumna != Sumamagica){

        Esmagico = false;

    }

    cout << endl << endl;;
    if(Esmagico == true){

        cout << "Es magico";

    }else{

        cout << "No es magico";


    }

    return 0;

}

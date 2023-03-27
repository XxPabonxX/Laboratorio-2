/*
Problema 14.

Elabore un programa que llene una matriz 5x5 con los números del 1 al 25 y la imprima, luegoimprima la matriz rotada 90, 180 y 270 grados.

*/

#include "Funciones.h"
#include <iostream>

using namespace std;
const int N = 5;

void imprimirMatriz(int matriz[N][N]);
void rotarMatriz90(int matriz[N][N]);
void rotarMatriz180(int matriz[N][N]);
void rotarMatriz270(int matriz[N][N]);

int Problema14() {

    int matrizOrigen[N][N], matriz90[N][N], matriz180[N][N], matriz270[N][N], num = 1;

    for (int i = 0; i < N; i++) {

        for (int j = 0; j < N; j++) {

            matrizOrigen[i][j] = num;
            matriz90[i][j] = num;
            matriz180[i][j] = num;
            matriz270[i][j] = num;
            num++;
        }
    }

    cout << "Matriz original:" << endl;
    imprimirMatriz(matrizOrigen);
    cout << endl;

    cout << "Matriz rotada 90 grados:" << endl;
    rotarMatriz90(matriz90);
    imprimirMatriz(matriz90);
    cout << endl;

    cout << "Matriz rotada 180 grados:" << endl;
    rotarMatriz180(matriz180);
    imprimirMatriz(matriz180);
    cout << endl;

    cout << "Matriz rotada 270 grados:" << endl;
    rotarMatriz270(matriz270);
    imprimirMatriz(matriz270);
    cout << endl;

    return 0;

}

void imprimirMatriz(int matriz[N][N]){

    for (int i = 0; i < N; i++) {

        for (int j = 0; j < N; j++) {

            cout << matriz[i][j] << " ";

        }

        cout << endl;

    }

}

void rotarMatriz90(int matriz[N][N]){

    int aux[N][N];

    for (int i = 0; i < N; i++) {

        for (int j = 0; j < N; j++) {

            aux[i][j] = matriz[N - j - 1][i];

        }

    }

    for (int i = 0; i < N; i++) {

        for (int j = 0; j < N; j++) {

            matriz[i][j] = aux[i][j];

        }
    }
}

void rotarMatriz180(int matriz[N][N]){

    rotarMatriz90(matriz);
    rotarMatriz90(matriz);

}

void rotarMatriz270(int matriz[N][N]) {

    rotarMatriz90(matriz);
    rotarMatriz90(matriz);
    rotarMatriz90(matriz);

}

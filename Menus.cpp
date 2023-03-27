#include "Funciones.h"
#include <iostream>
#ifdef _win32

    #include <windows.h>

#endif

using namespace std;

int Limpiar_pantalla(void) {

    #ifdef _WIN32

        system("cls");

    #else

        system("clear");

    #endif

        return 0;

}
int Menu(void) {

    int opcion = 0;

    cout << "Laboratorio #2" << endl << endl;
    cout << "0. Para salir." << endl;
    for (int i = 2; i <= 18; i += 2) {

        cout << i << ". Para ir al punto " << i << "." << endl;

    }

    cout << endl << "Ingrese la opcion: ";
    cin >> opcion;

    return opcion;

}
int Menu2(void) {

    int opcion2 = 0;

    cout << endl << "1. Para volver al menu." << endl;
    cout << "2. Para volver a ejecutar el programa." << endl;
    cout << endl << "Ingrese la opcion: ";
    cin >> opcion2;

    return opcion2;

}
int Opciones(void){

    int opcion = 0, opcion2 = 0;

    do{

        opcion = Menu();
        Limpiar_pantalla();

        switch (opcion) {

        case 0:

            cout << "¡¡¡ Hasta luego !!!" << endl;

            break;

        case 2:

            do {

                Problema2();
                opcion2 = Menu2();
                Limpiar_pantalla();

            } while (opcion2 == 2);

            break;

        case 4:

            do {

                Problema4();
                opcion2 = Menu2();
                Limpiar_pantalla();

            } while (opcion2 == 2);

            break;

        case 6:

            do {

                Problema6();
                opcion2 = Menu2();
                Limpiar_pantalla();

            } while (opcion2 == 2);

            break;

        case 8:

            do {

                Problema8();
                opcion2 = Menu2();
                Limpiar_pantalla();

            } while (opcion2 == 2);

            break;

        case 10:

            do {

                Problema10();
                opcion2 = Menu2();
                Limpiar_pantalla();

            } while (opcion2 == 2);

            break;

        case 12:

            do {

                Problema12();
                opcion2 = Menu2();
                Limpiar_pantalla();

            } while (opcion2 == 2);

            break;

 /*       case 14:

            do {

                Problema14();
                opcion2 = Menu2();
                Limpiar_pantalla();

            } while (opcion2 == 2);

            break;

        case 16:

            do {

                Problema16();
                opcion2 = Menu2();
                Limpiar_pantalla();

            } while (opcion2 == 2);

            break;

        case 18:

            do {

                Problema18();
                opcion2 = Menu2();
                Limpiar_pantalla();

            } while (opcion2 == 2);

            break;
*/

        default:

            cout << "Esta opcion no esta disponible" << endl;

            break;
        }

    }while(opcion !=0);

    return 0;
}

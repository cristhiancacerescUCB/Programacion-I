// Materia: Programacion I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingenieria Multimedia e Interactividad
// Fecha creacion: 28/08/2025
// NC:mero de ejercicio: 24
#include <iostream>
using namespace std;
int main() 
{
    int opcion;
    do {
        cout << ".....................Menu....................." << endl;
        cout << "1. Opcion 1" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. Opcion 3" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) 
        {
            case 1: 
            cout << "Seleccionaste Opcion 1, no hace nada" << endl;
            break;
            case 2:
            cout << "Seleccionaste Opcion 2, no hace nada" << endl;
            break;
            case 3:
            cout << "Seleccionaste Opcion 3, no hace nada" << endl;
            break;
            case 0: 
            cout << "Gracias por su tiempo" << endl; 
            break;
            default: 
            cout << "Opcion invalida, intente de nuevo" << endl;
            break;
        }
    } while(opcion != 0);

    return 0;
}
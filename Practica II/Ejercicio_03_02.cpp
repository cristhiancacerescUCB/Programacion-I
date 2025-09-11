// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingeniería en Multimedia e Interactividad
// Fecha creación: 10/09/2025
// Número de ejercicio: 3

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    int numero, factorial = 1;

    srand(time(0));
    numero = 1 + rand() % 10;

    cout << "Numero: " << numero << endl;

    for (int i = 1; i <= numero; i++) {
        factorial = factorial * i;
    }

    cout << "El factorial de " << numero << ", es: " << factorial << endl;

    return 0;
}
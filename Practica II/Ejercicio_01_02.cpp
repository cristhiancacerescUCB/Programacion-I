// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingeniería en Multimedia e Interactividad
// Fecha creación: 09/09/2025
// Número de ejercicio: 1


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
     int n, dado, pares = 0;
    cout << "Ingrese la cantidad de lanzamientos: ";
    cin >> n;

    srand(time(0));

    for (int i = 0; i < n; i++) {
        dado = 1 + rand() % 6; 
        cout << "Lanzamiento " << i+1 << ": " << dado << endl;
        if (dado % 2 == 0) {
            pares++;
        }
    }

    cout << "La frecuencia de repeticion de caras pares es: " << pares << endl;

    return 0;
}
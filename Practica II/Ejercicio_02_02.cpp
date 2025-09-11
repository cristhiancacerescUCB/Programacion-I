// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingeniería en Multimedia e Interactividad
// Fecha creación: 10/09/2025
// Número de ejercicio: 2


#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
    int n, moneda, cara = 0, cruz = 0;
    cout << "Ingrese la cantidad de lanzamientos: ";
    cin >> n;

    srand(time(0));

    for (int i = 0; i < n; i++) {
        moneda = rand() % 2; 
        if (moneda == 0) {
            cout << "Lanzamiento " << i+1 << ": Cara" << endl;
            cara++;
        } else {
            cout << "Lanzamiento " << i+1 << ": Cruz" << endl;
            cruz++;
        }
    }

    cout << "Porcentaje de caras: " << (cara * 100.0 / n) << "%" << endl;
    cout << "Porcentaje de cruces: " << (cruz * 100.0 / n) << "%" << endl;
}
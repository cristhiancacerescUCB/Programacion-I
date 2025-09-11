// Materia: Programacion I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingenieria en Multimedia e Interactividad
// Fecha creacion: 10/09/2025
// numero de ejercicio: 7

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int N, n1, n2, n3, totalPanales;

    cout << "Ingrese la cantidad de ninos: ";
    cin >> N;

    srand(time(0));

    n1 = rand() % (N+1);   
    n2 = rand() % (N - n1 + 1); 
    n3 = N - n1 - n2;     

    cout << "Ninos de 1 anio: " << n1 << endl;
    cout << "Ninos de 2 anios: " << n2 << endl;
    cout << "Ninos de 3 anios: " << n3 << endl;

    totalPanales = (n1 * 6) + (n2 * 3) + (n3 * 2);

    cout << "Consumo total de panales por dia: " << totalPanales << endl;

    return 0;
}
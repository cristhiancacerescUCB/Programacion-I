// Materia: Programacion I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingenieria en Multimedia e Interactividad
// Fecha creacion: 10/09/2025
// numero de ejercicio: 2

#include <iostream>

using namespace std;

double celsiusAFahrenheit(double celsius) 
{
    return (celsius * 9/5) + 32;
}

int main() {
    double celsius;
    cout << "Ingrese temperatura en grados Celsius: ";
    cin >> celsius;
    cout << "En Fahrenheit: " << celsiusAFahrenheit(celsius) << endl;
    return 0;
}
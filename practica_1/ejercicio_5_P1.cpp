// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingeniería Multimedia e Interactividad
// Fecha creación: 28/08/2025
// Número de ejercicio: 5
#include <iostream>
using namespace std;
int main()
{
    double celsius, kelvin;
    do
    {
        cout << "Ingrese la temperatura en Celsius: ";
        cin >> celsius;
    }
    while (celsius <= 0);
    
    kelvin = celsius + 273.15;
    
    cout << "La temperatura en Kelvin es: " << kelvin << endl;
    return 0;
}
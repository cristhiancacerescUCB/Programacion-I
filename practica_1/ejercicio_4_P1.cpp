// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingeniería Multimedia e Interactividad
// Fecha creación: 28/08/2025
// Número de ejercicio: 4
#include <iostream>
using namespace std;
int main()
{
    double radio, volumen;
    const double pi = 3.14159;
    
    cout << "Ingrese el radio de la esfera: ";
    cin >> radio;

    volumen = (4.0/3.0) * pi * radio * radio * radio;
    
    cout << "El volumen de la esfera es: " << volumen << endl;
    
    return 0;
}
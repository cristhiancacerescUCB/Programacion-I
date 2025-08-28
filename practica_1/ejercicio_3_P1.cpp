// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingeniería Multimedia e Interactividad
// Fecha creación: 28/08/2025
// Número de ejercicio: 3
#include <iostream>
using namespace std;
int main()
{
    double base, altura, area;   
    do 
    {
        cout << "Ingrese base del triangulo: ";
        cin >> base;
        cout << "Ingrese la altura del triangulo: ";
        cin>> altura;
    }
    while (base <= 0 || altura <= 0);

    area = (base * altura) / 2;
    
    cout << "El area del triangulo es: " << area << endl;
    
    return 0;
}
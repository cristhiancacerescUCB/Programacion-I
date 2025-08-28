// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingeniería Multimedia e Interactividad
// Fecha creación: 28/08/2025
// Número de ejercicio: 8
#include <iostream>
using namespace std;
int main()
{
    int num;
    
    cout << "Ingrese un numero: ";
    cin >> num;

    if(num % 2 == 0) 
        cout << "El numero es par";
    else
        cout << "El numero es impar";
    
    return 0;
}
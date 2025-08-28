// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingeniería Multimedia e Interactividad
// Fecha creación: 28/08/2025
// Número de ejercicio: 6
#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Ingrese un numero entero: ";
    cin >> num;
    
    if(num > 0) cout << "El numero es positivo";
    else if(num < 0) cout << "El numero es negativo";
    else cout << "El numero es Cero";

    return 0;
}
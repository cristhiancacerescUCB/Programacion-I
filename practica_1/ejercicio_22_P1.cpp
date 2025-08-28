// Materia: Programacion I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingenieria Multimedia e Interactividad
// Fecha creacion: 28/08/2025
// NC:mero de ejercicio: 22
#include <iostream>
using namespace std;
int main() 
{
    int a = 0, b = 0, resultado = 0;
    
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin  >> b;

    if(a % b == 0) 
        cout << a << " es multiplo de " << b;
    else if(b % a == 0)
        cout << b << " es multiplo de " << a;
    else
        cout << "No son multiplos";
    return 0;
}
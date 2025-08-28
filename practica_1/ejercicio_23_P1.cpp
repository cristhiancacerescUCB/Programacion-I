// Materia: Programacion I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingenieria Multimedia e Interactividad
// Fecha creacion: 28/08/2025
// NC:mero de ejercicio: 23
#include <iostream>
using namespace std;
int main() 
{
    int num, num_invertido = 0, n = 0;
   
    cout << "Ingrese un numero: ";
    cin >> num;

    n = abs(num);
    while(n > 0) 
    {
        num_invertido = num_invertido * 10 + (n % 10);
        n /= 10;
    }

    if(num < 0) num_invertido = -num_invertido;

    cout << "Numero invertido: " << num_invertido;
    return 0;
}
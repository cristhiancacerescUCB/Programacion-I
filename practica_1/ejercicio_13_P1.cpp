// Materia: ProgramaciC3n I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingenieria Multimedia e Interactividad
// Fecha creaciC3n: 28/08/2025
// NC:mero de ejercicio: 13
#include <iostream>
using namespace std;

int main()
{
    int N, suma = 0;
    
    cout << "Ingrese un numero: ";
    cin >> N;

    for(int i = 1; i <= N; i++) 
    {
        suma += i;
    }

    cout << "La suma de 1 hasta " << N << " es: " << suma;
    return 0;
}
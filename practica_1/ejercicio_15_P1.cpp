// Materia: ProgramaciC3n I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingenieria Multimedia e Interactividad
// Fecha creaciC3n: 28/08/2025
// NC:mero de ejercicio: 15
#include <iostream>
using namespace std;

int main()
{
    int N;
    double nota, suma = 0, promedio=0;
    
    cout << "Ingrese la cantidad de notas: ";
    cin >> N;

    for(int i = 1; i <= N; i++)
    {
        cout << "Nota " << i << ": ";
        cin >> nota;
        suma += nota;
    }

    promedio = suma / N;
    
    cout << "El promedio es: " << promedio;
    return 0;
}
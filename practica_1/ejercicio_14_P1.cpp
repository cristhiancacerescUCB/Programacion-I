// Materia: ProgramaciC3n I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingenieria Multimedia e Interactividad
// Fecha creaciC3n: 28/08/2025
// NC:mero de ejercicio: 14
#include <iostream>
using namespace std;

int main()
{
    int N;
    
    cout << "Ingrese la altura del triangulo: ";
    cin >> N;

    for(int i = 1; i <= N; i++) 
    {
        for(int j = 1; j <= i; j++) 
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
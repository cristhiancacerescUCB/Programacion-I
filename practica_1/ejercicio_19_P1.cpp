// Materia: ProgramaciC3n I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingenieria Multimedia e Interactividad
// Fecha creaciC3n: 28/08/2025
// NC:mero de ejercicio: 19
#include <iostream>
using namespace std;
int main() 
{
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;

    for(int i = 1; i <= 10; i++) 
    {
        cout << num << " x " << i << " = " << num*i << endl;
    }
    return 0;
}
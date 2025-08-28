// Materia: ProgramaciC3n I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: IngenierC-a Multimedia e Interactividad
// Fecha creaciC3n: 28/08/2025
// NC:mero de ejercicio: 12
#include <iostream>
using namespace std;

int main()
{
    int num;
    
    do {
        cout << "Ingrese un numero entre 1 y 5: ";
        cin >> num;
    } while(num < 1 || num > 5);

        cout << "Correcto, el numero que introdujo es: " << num;
    return 0;
}
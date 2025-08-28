// Materia: ProgramaciC3n I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingenieria Multimedia e Interactividad
// Fecha creaciC3n: 28/08/2025
// NC:mero de ejercicio: 20
#include <iostream>
using namespace std;
int main() 
{
    int num, digitos = 0, n = 0;
    
    cout << "Ingrese un numero entero: ";
    cin >> num;

    if(num == 0) 
        digitos = 1;
    else 
    {
        n = abs(num);
        while(n > 0) 
        {
            digitos++;
            n /= 10;
        }
    }
    cout << "Cantidad de digitos: " << digitos << endl;
    return 0;
}
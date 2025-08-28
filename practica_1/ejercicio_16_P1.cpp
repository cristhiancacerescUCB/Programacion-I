// Materia: ProgramaciC3n I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingenieria Multimedia e Interactividad
// Fecha creaciC3n: 28/08/2025
// NC:mero de ejercicio: 16
#include <iostream>
using namespace std;

int main()
{
    int num, primo = 1;
    
    cout << "Ingrese un numero: ";
    cin >> num;

    if(num <= 1) 
    {
        primo = 0;
    } 
    else 
    {
        for(int i = 2; i <= num/2; i++) 
        {
            if(num % i == 0) 
            {
                primo = 0;
            }
        }
    }

    if(primo==1) 
        cout << "El numero es primo";
    else 
        cout << "El numero no es primo";
    return 0;
}
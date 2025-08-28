// Materia: ProgramaciC3n I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingenieria Multimedia e Interactividad
// Fecha creaciC3n: 28/08/2025
// NC:mero de ejercicio: 18
#include <iostream>
using namespace std;

bool Primo(int n) 
{
    if(n <= 1) 
    return false;
    for(int i = 2; i <= n/2; i++) 
    {
        if(n % i == 0) 
        return false;
    }
    return true;
}

int main() 
{
    int conteo = 0, num = 2;
    
    cout << "Los primeros 100 numeros primos: ";
    
    while(conteo < 100) 
    {
        if(Primo(num)) 
        {
            cout << num << " ";
            conteo++;
        }
        num++;
    }
    return 0;
}
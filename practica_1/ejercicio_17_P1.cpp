// Materia: ProgramaciC3n I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingenieria Multimedia e Interactividad
// Fecha creaciC3n: 28/08/2025
// NC:mero de ejercicio: 17
#include <iostream>
using namespace std;

int main()
{
    
    int a=0, b=0, sumaA=0, sumaB=0;
    
    cout << "Ingrese un numero: ";
    cin >> a;
    cout << "Ingrese un segundo numero: ";
    cin  >> b;
    
    for(int i = 1; i <= a/2; i++) 
    {
        if(a % i == 0) 
            sumaA += i;
    }
    
    for(int i = 1; i <= b/2; i++) 
    {
        if(b % i == 0) 
            sumaB += i;
    }
    
     if(sumaA == b && sumaB == a)
        cout << "Son numeros amigos";
    else
        cout << "No son numeros amigos";
    return 0;
}
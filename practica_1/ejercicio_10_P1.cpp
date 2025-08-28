// Materia: ProgramaciC3n I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: IngenierC-a Multimedia e Interactividad
// Fecha creaciC3n: 28/08/2025
// NC:mero de ejercicio: 10  
#include <iostream>
using namespace std;

int main()
{
    int nota;
    
    do
    {
        cout << "Ingrese su nota (0-100): ";
        cin >> nota;
    }
    while(nota<0);
    
    if(nota >= 51) 
    {
        if(nota < 60)
            cout << "Calificacion = C";
        else if(nota < 70) 
            cout << "Calificacion = C+";
        else if(nota < 80)
            cout << "Calificacion = B";
        else if(nota < 90)
            cout << "Calificacion = B+";
        else if(nota < 95)
            cout << "Calificacion = A";
        else if(nota == 100)
            cout << "Calificacion = A+";
        else 
            cout << "Calificacion = A";
    } 
    else 
    {
        cout << "Reprobado";
    }
    return 0;
}
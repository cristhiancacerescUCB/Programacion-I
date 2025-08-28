// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingeniería Multimedia e Interactividad
// Fecha creación: 28/08/2025
// Número de ejercicio: 7
#include <iostream>
using namespace std;
int main()
{
    char letra;
    
    cout << "Ingrese una letra: ";
    cin >> letra;

    if((letra >= "a" && letra <= "z") || (letra >= "A" && letra <= "Z")) 
    {
        letra = tolower(letra);
        
        if(letra=="a" || letra=="e" || letra=="i" || letra=="o" || letra=="u")
            cout << "Es una vocal";
        else
            cout << "Es una consonante";
    } 
    else 
    {
        cout << "Dato invalido, debe ser una letra";
    }
    
    return 0;
}
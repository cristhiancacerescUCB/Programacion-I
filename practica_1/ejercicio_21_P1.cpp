// Materia: Programacion I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingenieria Multimedia e Interactividad
// Fecha creacion: 28/08/2025
// NC:mero de ejercicio: 21
#include <iostream>
using namespace std;
int main() 
{
    int a = 0, b = 0, resultado = 0;
    
    cout << "Ingrese un numero: ";
    cin >> a;
    cout << "Ingrese un segundo numero: ";
    cin >> b;

    for(int i = 0; i < abs(b); i++) 
    {
        resultado += a;
    }

    if(b < 0) resultado = -resultado;

    cout << "Resultado: " << resultado << endl;
    return 0;
}
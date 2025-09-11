// Materia: Programacion I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingenieria en Multimedia e Interactividad
// Fecha creacion: 10/09/2025
// numero de ejercicio: 2

#include <iostream>

using namespace std;

int capicua(int n) 
{
    int original = n, invertido = 0, digito;
    
    while (n > 0) 
    {
        digito = n % 10;
        invertido = invertido * 10 + digito;
        n = n / 10;
    }
    if (original == invertido)
        cout << original << " es capicua" << endl;
    else
        cout << original << " no es capicua" << endl;
    return n;
}

int main() 
{
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    capicua(numero);
    return 0;
}
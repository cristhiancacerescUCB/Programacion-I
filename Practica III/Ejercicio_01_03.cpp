// Materia: Programacion I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingenieria en Multimedia e Interactividad
// Fecha creacion: 10/09/2025
// numero de ejercicio: 1

#include <iostream>

using namespace std;

int comparadorParImpar(int n) 
{
    if (n % 2 == 0)
        cout << n << " es par" << endl;
    else
        cout << n << " es impar" << endl;
    return n;
}

int main() 
{
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    comparadorParImpar(numero);
    return 0;
}
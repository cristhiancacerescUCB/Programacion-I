// Materia: Programacion I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creacion: 20/10/2025
// Numero de ejercicio: 4
// Problema: Realizar un algoritmo recursivo para calcular el máximo
// común divisor de dos números enteros aplicando el algoritmo de
// Euclides.

#include <iostream>
using namespace std;

int mcd(int a, int b) 
{
    if (b == 0)
        return a;              // Caso base
    return mcd(b, a % b);      // Llamada recursiva
}

int main() 
{
    int a, b;
    cout << "Ingrese un numero a: "; cin >> a;
    cout << "Ingrese un numero b: "; cin >> b;
    cout << "El MCD es: " << mcd(a, b) << endl;
    return 0;
}
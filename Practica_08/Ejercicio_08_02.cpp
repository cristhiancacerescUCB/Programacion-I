// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 20/10/2025
// Número de ejercicio: 2
// Problema: Implementa una función recursiva para calcular la potencia de un número.
// La función debe recibir dos parámetros, la base a y el exponente n, y
// devolver el valor de a^n. Evita usar la función pow de la biblioteca
// estándar. Por ejemplo, potencia(2, 3) debería devolver 8.

#include <iostream>
using namespace std;

int potencia(int a, int n) 
{
    if (n == 0) return 1;             // Caso base
    return a * potencia(a, n - 1);    // Caso recursivo
}

int main() 
{
    int base, exponente;
    cout << "Ingrese base: "; cin >> base;
    cout << "Ingrese exponente: "; cin >> exponente;
    cout << base << "^" << exponente << " = " << potencia(base, exponente) << endl;
    return 0;
}

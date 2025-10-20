// Materia: Programacion I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creacion: 20/10/2025
// Numero de ejercicio: 3
// Problema: Implementa una funcion recursiva que devuelva el
// enesimo numero en lasecuencia de Fibonacci. La secuencia de
// Fibonacci es una serie de numeros donde cada numero es la suma de
// los dos anteriores, comenzando con 0 y 1.

#include <iostream>
using namespace std;

int fibonacci(int n) 
{
    if (n == 1) return 0; // Primer termino
    if (n == 2) return 1; // Segundo termino
    return fibonacci(n - 1) + fibonacci(n - 2); //recursiva
}

int main() 
{
    int n;
    cout << "Ingrese n (enesimo valor en Fibonacci): ";
    cin >> n;
    cout << "Fibonacci(en " << n << ") = " << fibonacci(n) << endl;
    return 0;
}

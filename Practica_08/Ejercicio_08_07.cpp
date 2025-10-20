// Materia: Programacion I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creacion: 20/10/2025
// Numero de ejercicio: 6
// Problema: Realizar un algoritmo recursivo para la siguiente función:
// Q(n)=1^2+2^2+3^2+...+n^2

#include <iostream>
using namespace std;

int funcionProgresion(int n) 
{
    if (n == 1) return 1;
    return (n * n) + funcionProgresion(n - 1);
}

int main() 
{
    int n;
    cout << "Ingrese n: ";
    cin >> n;
    cout << "Resultado de f(" << n << ") = " << funcionProgresion(n) << endl;
    return 0;
}
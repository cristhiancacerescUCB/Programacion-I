// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 20/10/2025
// Número de ejercicio: 6
// Problema: Realizar un algoritmo recursivo para comparar si dos
// vectores son iguales.

#include <iostream>
using namespace std;

bool iguales(int A[], int B[], int n) 
{
    if (n == 0) return true; // Caso base
    if (A[n - 1] != B[n - 1]) return false; // Si difieren, detener
    return iguales(A, B, n - 1); // recursiva
}

int main() 
{
    int n, A[50], B[50];
    cout << "Ingrese tamaño de los vectores: ";
    cin >> n;
    cout << "Vector A: "<<endl;
    for (int i = 0; i < n; i++) 
    {cout << "Elemento ["<<i+1<<"]\n"; cin >> A[i];}
    cout << "Vector B: "<<endl;
    for (int i = 0; i < n; i++) 
    {cout << "Elemento ["<<i+1<<"]\n";cin >> B[i];}

    if (iguales(A, B, n))
        cout << "Los vectores son iguales." << endl;
    else
        cout << "Los vectores son diferentes." << endl;

    return 0;
}

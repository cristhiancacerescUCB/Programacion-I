// Materia: Programacion I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creacion: 20/10/2025
// Numero de ejercicio: 5
// Problema: Realizar un algoritmo recursivo, dado un vector de
// números enteros, retorne la suma de sus elementos.

#include <iostream>
using namespace std;

int sumaVector(int v[], int n) 
{
    if (n == 0) return 0; // Caso base
    return v[n - 1] + sumaVector(v, n - 1); // Recursividad
}
void mostrarVector (int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i]<<", ";
    }
    cout<<endl;
}
int main() 
{
    int n, v[50];
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> v[i];
    }
    cout << "Vector ingresado: " << endl;
    mostrarVector(v,n);
    cout << "Suma de los elementos: " << sumaVector(v, n) << endl;
    return 0;
}

// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 29/09/2025
// Número de ejercicio: 4
// Problema planteado: Leer 2 vectores de dimensión N y calcule la multiplicación de los mismos en otro vector.

#include <iostream>
using namespace std;

void multiplicarVectores(int a[], int b[], int c[], int n) 
{
    for (int i = 0; i < n; i++) c[i] = a[i] * b[i];
}

int main() 
{
    int n;
    cout << "Dimension de vectores: ";
    cin >> n;
    int v1[100], v2[100], VectorResultado[100];
    for (int i = 0; i < n; i++) 
    {
        cout << "Ingrese el valor " << i+1 << " del primer vector: " << endl;
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++) 
    {
        cout << "Ingrese el valor " << i+1 << " del segundo vector: " << endl;
        cin >> v2[i];
    }
    
    multiplicarVectores(v1, v2, VectorResultado, n);
    cout << "Vector resultado:\n";
    
    for (int i = 0; i < n; i++) 
        cout << VectorResultado[i] << " ";
    return 0;
}
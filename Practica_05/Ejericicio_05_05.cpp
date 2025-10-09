// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 6/10/2025
// Número de ejercicio: 5
// Problema planteado:Leer 2 vectores de dimensión N y combine ambos en otro vector.
#include <iostream>
using namespace std;

void combinar(int a[], int b[], int c[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        c[i] = a[i];
        c[i+n] = b[i];
    }
}

int main() 
{
    int n;
    cout << "Dimension N de los vectores: ";
    cin >> n;
    
    int v1[100], v2[100], v3[200];
    
    for (int i = 0; i < n; i++) 
    {
    cout << "Ingrese valor " << i+1 << " del primer vector: ";
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese valor " << i+1 << " del segundo vector: ";
        cin >> v2[i];
    }
    
    combinar(v1, v2, v3, n);
    
    cout << "Vector combinado: " << endl;
    for (int i = 0; i < 2*n; i++) cout << v3[i] << " ";
    
    cout << endl;
    
    cout << "primer vector: " << endl;
    for (int i = 0; i < n; i++) cout << v1[i] << " ";
    
    cout << endl;
    
    cout << "segundo vector: " << endl;
    for (int i = 0; i < n; i++) cout << v2[i] << " ";
    
    cout << endl;
    return 0;
}
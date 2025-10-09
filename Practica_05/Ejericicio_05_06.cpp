// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 6/10/2025
// Número de ejercicio: 6
// Problema planteado: Programa que declare tres vectores ‘vector1’, ‘vector2’ y ‘vector3’ de cinco enteros
//cada uno, pida valores para ‘vector1’ y ‘vector2’ y calcule vector3=vector1+vector2.
#include <iostream>
using namespace std;

void sumar(int a[], int b[], int c[], int n) 
{
    for (int i = 0; i < n; i++)
    c[i] = a[i] + b[i];
}

int main() 
{
    int v1[5], v2[5], v3[5];
    cout << "Ingrese vector 1: "<<endl;
    for (int i = 0; i < 5; i++) 
    {
        cout << "Ingrese valor " << i+1 << " de vector 1: ";
        cin >> v1[i];
    }
    cout << "Ingrese vector 2: "<<endl;;
    for (int i = 0; i < 5; i++) 
    {
        cout << "Ingrese valor " << i+1 << " de vector 2: ";
        cin >> v2[i];
    }
    
    sumar(v1,v2,v3,5);
    cout << "Vector3 = v1 + v2:\n";
    
    for (int i = 0; i < 5; i++) cout << v3[i] << " ";
    cout << endl;
    
    cout << "vector 1 :" << endl;
    for (int i = 0; i < 5; i++) cout << v1[i] << " ";
    cout << endl;
    
    cout << "vector 2 :" << endl;
    for (int i = 0; i < 5; i++) cout << v2[i] << " ";
    cout << endl;
    return 0;
}
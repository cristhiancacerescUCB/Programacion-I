// Materia: Programación I, Paralelo 3
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 15/10/2024
// Número de ejercicio: 4
// Problema planteado: Generar la matriz para un orden nxn

#include <iostream>
using namespace std;

void generarMatriz(int n, int m[50][50]) 
{
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            m[i][j] = 1 + 2*i + j;
}

void mostrar(int m[50][50], int n) 
{
    for (int i=0;i<n;i++) 
    {
        for (int j=0;j<n;j++)
            cout << m[i][j] << "\t";
        cout << endl;
    }
}

int main() 
{
    int n = 0;
    cout<<"Ingrese el valor de N: ";cin>>n;
    int m[50][50];
    generarMatriz(n,m);
    mostrar(m,n);
    return 0;
}
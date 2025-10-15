// Materia: Programación I, Paralelo 3
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 15/10/2024
// Número de ejercicio: 6
// Problema planteado: Transponer matriz de N x M

#include <iostream>
using namespace std;

void leer(int a[50][50], int n, int m) 
{
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
        {cout<<"elemento["<<i+1<<"]["<<j+1<<"]: ";cin >> a[i][j];}
}

void transponer(int a[50][50], int b[50][50], int n, int m) 
{
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            b[j][i] = a[i][j];
}

void mostrar(int a[50][50], int n, int m) {
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

int main() 
{
    int N,M;
    cout << "Ingrese N: ";cin >> N;
    cout << "Ingrese M: ";cin >> M;
    int A[50][50],T[50][50];
    cout << "Ingrese elementos de la matriz:\n";
    leer(A,N,M);
    cout << "Matriz ingresada\n";
    mostrar(A,N,M);
    transponer(A,T,N,M);
    cout << "Matriz transpuesta:\n";
    mostrar(T,M,N);
    return 0;
}
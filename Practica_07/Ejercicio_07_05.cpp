// Materia: Programación I, Paralelo 3
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 15/10/2024
// Número de ejercicio: 5
// Problema planteado: Multiplique dos matrices una de N x M y la otra de M x N

#include <iostream>
using namespace std;

void leer(int a[50][50], int filas, int columnas) 
{
    cout << "Ingrese los elementos de la matriz: "<<endl;
    for (int i=0;i<filas;i++)
        for (int j=0;j<columnas;j++)
            {cout << "Elemento [" << i+1 << "][" << j+1 << "]: ";
            cin >> a[i][j];}
}

void multiplicar(int A[50][50], int B[50][50], int C[50][50], int N, int M) 
{
    for (int i=0;i<N;i++)
        for (int j=0;j<N;j++) 
        {
            C[i][j] = 0;
            for (int k=0;k<M;k++)
                C[i][j] += A[i][k]*B[k][j];
        }
}

void mostrar(int C[50][50], int filas, int columnas) 
{
    for (int i=0;i<filas;i++) 
    {
        for (int j=0;j<columnas;j++)
            cout << C[i][j] << " ";
        cout << endl;
    }
}

int main() 
{
    int N,M;
    cout << "Ingrese N: ";cin >> N;
    cout << "Ingrese M: ";cin >> M;
    int A[50][50],B[50][50],C[50][50];
    cout << "Matriz A ("<<N<<"x"<<M<<"):\n";
    leer(A,N,M);
    cout << "Matriz B ("<<M<<"x"<<N<<"):\n";
    leer(B,M,N);
    multiplicar(A,B,C,N,M);
    cout << "Resultado:\n";
    mostrar(C,N,N);
    return 0;
}

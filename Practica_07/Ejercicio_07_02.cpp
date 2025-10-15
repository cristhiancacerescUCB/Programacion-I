// Materia: Programación I, Paralelo 3
// Autor: Cristhian Emanuel Caceres Churqui 
// Fecha creación: 14/10/2024
// Número de ejercicio: 2
// Problema planteado:Generar una matriz de N x N con números al azar 
// entre A y B, y determinar:
// • La suma de la última columna
// • El producto total de la última fila
// • Obtener el mayor valor y su posición
// • Obtener la desviación estándar de todos los elementos de la matriz

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void generarMatriz(double m[50][50], int n, int A, int B) 
{
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            m[i][j] = A + rand() % (B - A + 1);
}

void mostrar(double m[50][50], int n) 
{
    for (int i=0;i<n;i++) 
{
        for (int j=0;j<n;j++)
            cout << m[i][j] << "\t";
        cout << endl;
    }
}

double sumaUltimaColumna(double m[50][50], int n) 
{
    double suma = 0;
    for (int i=0;i<n;i++) suma += m[i][n-1];
    return suma;
}

double productoUltimaFila(double m[50][50], int n) 
{
    double prod = 1;
    for (int j=0;j<n;j++) prod *= m[n-1][j];
    return prod;
}

void mayorValor(double m[50][50], int n, double &may, int &f, int &c) 
{
    may = m[0][0];
    f = c = 0;
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            if (m[i][j] > may) { may = m[i][j]; f=i; c=j; }
}

double desviacionEstandar(double m[50][50], int n) 
{
    int total = n*n;
    double suma=0;
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            suma += m[i][j];
    double promedio = suma / total;
    double var = 0;
    for (int i=0;i<n;i++)
        for (int j=0;j<n;j++)
            var += pow(m[i][j] - promedio, 2);
    return sqrt(var / total);
}

int main() 
{
    srand(time(0));
    int n, A, B;
    double m[50][50];
    cout << "Ingrese N (orden de la matriz): "<<endl;
    cin >> n;
    cout << "Ingrese A: " << endl;
    cin >> A;
    cout << "Ingrese B: " << endl;
    cin >> B;
    generarMatriz(m,n,A,B);
    mostrar(m,n);
    cout << "Suma de la ultima columna: " << sumaUltimaColumna(m,n) << endl;
    cout << "Producto de la ultima fila: " << productoUltimaFila(m,n) << endl;
    double may; int f,c;
    mayorValor(m,n,may,f,c);
    cout << "Mayor valor: " << may << " en (" << f << "," << c << ")"<<endl;
    cout << "Desviacion estandar: " << desviacionEstandar(m,n) << endl;
    return 0;
}
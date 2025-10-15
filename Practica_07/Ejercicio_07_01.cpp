// Materia: Programación I, Paralelo 3
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 14/10/2025
// Número de ejercicio: 1
// Problema planteado:Elabore un programa que lea una 
//matriz de orden n x n y la cambie la fila 1 por la fila n

#include <iostream>
using namespace std;

void leerMatriz(int m[50][50], int n) {
    cout << "Ingrese los elementos de la matriz (" << n << "x" << n << "):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Elemento a[" << i << "][" << j << "]: ";
            cin >> m[i][j];
        }
    }
}

void mostrarMatriz(int m[50][50], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }
}

void intercambiarFilas(int m[50][50], int n) {
    for (int j = 0; j < n; j++) {
        int temp = m[0][j];
        m[0][j] = m[n - 1][j];
        m[n - 1][j] = temp;
    }
}

int main() {
    int n, m[50][50];
    cout << "Ingrese el orden de la matriz cuadrada: ";
    cin >> n;

    leerMatriz(m, n);

    cout << "\nMatriz original:\n";
    mostrarMatriz(m, n);

    intercambiarFilas(m, n);

    cout << "\nMatriz después de intercambiar la primera y última fila:\n";
    mostrarMatriz(m, n);

    return 0;
}

// Materia: Programacion I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creacion: 20/10/2025
// Numero de ejercicio: 6
// Problema:
#include <iostream>
using namespace std;

void ullman(int n) 
{
    cout << n << " ";
    if (n == 1) return; // Caso base
    if (n % 2 == 0)
        ullman(n / 2); // Si es par
    else
        ullman(3 * n + 1); // Si es impar
}

int main() 
{
    int n;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;
    cout << "Secuencia de Ullman: ";
    ullman(n);
    cout << endl;
    return 0;
}
// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 18/09/2025
// Número de ejercicio: 6

#include <iostream>
using namespace std;

int esPrimo(int n) 
{
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++) 
    {
        if (n % i == 0) 
        return 0;
    }
    return 1;
}

void sumaDigitosYPrimo(int num) 
{
    int suma = 0;
    int n = (num < 0) ? - num : num; // trabajar con positivo
    while (n > 0) 
    {
        int d = n % 10;
        if (d != 0) suma += d;
        n /= 10;
    }
    cout << "Suma de digitos distintos de cero: " << suma << endl;
    if (esPrimo(suma))
        cout << "La suma es un numero primo." << endl;
    else
        cout << "La suma NO es primo." << endl;
}

int main() 
{
    int numero;
    cout << "Ingrese un entero: "; 
    cin >> numero;
    sumaDigitosYPrimo(numero);
    return 0;
}

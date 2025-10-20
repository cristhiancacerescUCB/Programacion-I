// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 20/10/2025
// Número de ejercicio: 1
// Problema: Escribe una función recursiva que reciba un número entero positivo y
// devuelva la suma de sus dígitos. Por ejemplo: para el número 1234, el
// resultado debería ser 10 (1 + 2 + 3 + 4).

#include <iostream>
using namespace std;

int sumaDigitos(int n) 
{
    if (n == 0)
        return 0;                 // Caso base
    else
        return (n % 10) + sumaDigitos(n / 10); // Último dígito + recursión con el resto
}

int main() 
{
    int num;
    cout << "Ingrese un numero entero positivo: ";
    cin >> num;
    cout << "La suma de los digitos es: " << sumaDigitos(num) << endl;
    return 0;
}
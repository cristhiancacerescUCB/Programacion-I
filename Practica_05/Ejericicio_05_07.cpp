// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 6/10/2025
// Número de ejercicio: 7
// Problema planteado: Programa que declare un vector de diez elementos enteros y pida números 
//para rellenarlo hasta que se llene el vector o se introduzca un número negativo. 
//Entonces se debe imprimir el vector (sólo los elementos introducidos). 

#include <iostream>
using namespace std;

void leerVector(int v[], int &n) //n como parametro de referencia
{
    n = 0;
    int x;
    while (n < 10) 
    {
        cout << "Valor " << n+1 << ": ";
        cin >> x;
        if (x < 0) break;
        v[n] = x;
        n++;
    }
}

void imprimir(int v[], int n) 
{
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;
}

int main() 
{
    int v[10], n;
    cout << "Ingrese hasta 10 numeros (negativo para terminar): " << endl;
    leerVector(v,n);
    cout << "Vector ingresado: " << endl;
    imprimir(v,n);
    return 0;
}

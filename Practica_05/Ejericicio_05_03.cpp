// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 29/09/2025
// Número de ejercicio: 3
// Problema planteado: Escriba un programa para introducir los N números enteros en un arreglo llamado calificaciones.

#include <iostream>
#include <cmath>
using namespace std;

void calcular(int calificaciones[], int n) 
{
    double suma = 0;
    for (int i = 0; i < n; i++) suma += calificaciones[i];
    double promedio = suma / n;

    cout << "Promedio: " << promedio << endl;
    double varianza = 0;

    cout << "Calificaciones | Desviacion\n";
    for (int i = 0; i < n; i++) 
    {
        double desv = calificaciones[i] - promedio;
        cout << calificaciones[i] << " -> " << desv << endl;
        varianza += desv*desv;
    }
    varianza = varianza / n;
    cout << "Varianza: " << varianza << endl;
}

int main() 
{
    int n;
    cout << "Cantidad de calificaciones: ";
    cin >> n;
    int calificaciones[100];
    for (int i = 0; i < n; i++) 
    {
        cout << "Nota " << i+1 << ": ";
        cin >> calificaciones[i];
    }
    calcular(calificaciones, n);
    return 0;
}
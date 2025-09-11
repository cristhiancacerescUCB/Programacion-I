// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrrera: Ingeneria Multimedia e Interactividad
// Fecha creación: 11/09/2025
// Número de ejercicio: 10

#include <iostream>
using namespace std;

double calcularTarifa(double km) 
{
    double total = 10 + (km * 2);
    if (km > 10)
        total = total * 0.9;
    return total;
}

int main() 
{
    double km;
    cout << "Ingrese km recorridos: ";
    cin >> km;
    cout << "La tarifa es de: " << calcularTarifa(km) << " Bs" << endl;
    return 0;
}
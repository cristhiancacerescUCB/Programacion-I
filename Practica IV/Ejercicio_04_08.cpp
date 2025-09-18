// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 18/09/2025
// Número de ejercicio: 8

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    int n;
    cout << "Ingrese cantidad de productos vendidos hoy: ";
    cin >> n;

    srand(time(0));
    double subtotal = 0.0;
    
    for (int i = 0; i < n; i++) 
    {
        int precio = 20 + rand() % 31; // entre 20 y 50
        cout << "Producto " << i+1 << " precio: " << precio << " Bs" << endl;
        subtotal += precio;
    }

    double iva = subtotal * 0.13;
    double totalConIVA = subtotal + iva;
    double descuento = 0.0;

    if (totalConIVA > 2500.0) 
    {
        descuento = totalConIVA * 0.05;
    }
    double totalFinal = totalConIVA - descuento;

    cout << "Subtotal: " << subtotal << " Bs" << endl;
    cout << "IVA (13%): " << iva << " Bs" << endl;
    cout << "Total con IVA: " << totalConIVA << " Bs" << endl;
    cout << "Descuento aplicado: " << descuento << " Bs" << endl;
    cout << "Total final a cobrar: " << totalFinal << " Bs" << endl;
    cout << "IVA a pagar a impuestos: " << iva << " Bs" << endl;

    return 0;
}

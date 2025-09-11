// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrrera: Ingeneria Multimedia e Interactividad
// Fecha creación: 11/09/2025
// Número de ejercicio: 11

#include <iostream>
using namespace std;

double retirarDinero(double saldo, double cantidad) 
{
    if (cantidad % 10 != 0) 
    {
        cout << "El monto debe ser multiplo de 10" << endl;
        return saldo;
    }
    if (cantidad > saldo) 
    {
        cout << "Saldo insuficiente" << endl;
        return saldo;
    }
    saldo -= cantidad;
    cout << "Retiro exitoso. Nuevo saldo: " << saldo << " Bs" << endl;
    return saldo;
}

int main() 
{
    double saldo = 1000, cantidad;
    
    cout << "Saldo disponible: " << saldo << " Bs" << endl;
    cout << "Ingrese monto a retirar: ";
    cin >> cantidad;
    
    saldo = retirarDinero(saldo, cantidad);
    return 0;
}
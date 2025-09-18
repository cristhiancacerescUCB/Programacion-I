// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 18/09/2025
// Número de ejercicio: 9

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{
    int n;
    cout << "Ingrese numero de vendedoras: ";
    cin >> n;

    srand(time(0));
    for (int i = 0; i < n; i++) 
    {
        int antiguedad = rand() % 11; // años entre 0 y 10
        int productosVendidos = 10;   // promedio declarado
        double totalVendido = 0.0;
        
        for (int p = 0; p < productosVendidos; p++) 
        {
            int precio = 50 + rand() % 151; // 50..200
            totalVendido += precio;
        }
        double sueldoBase = 500.0 + antiguedad * 30.0; // regla simple
        double comision = totalVendido * 0.10; // 10%
        double sueldoTotal = sueldoBase + comision;

        cout << "Vendedora " << i+1 << ": antiguedad " << antiguedad << " anios" << endl;
        cout << "  Total vendido: " << totalVendido << " Bs" << endl;
        cout << "  Sueldo base: " << sueldoBase << " Bs" << endl;
        cout << "  Comision (10%): " << comision << " Bs" << endl;
        cout << "  Sueldo total: " << sueldoTotal << " Bs" << endl;
    }
    return 0;
}

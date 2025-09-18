// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 18/09/2025
// Número de ejercicio: 4

#include <iostream>
using namespace std;

double ConvertirCelsiusAFahrenheit(double c) 
{
    return (c * 9.0 / 5.0) + 32.0;
}

double MayorTemperatura(double t1, double t2) 
{
    int mayor = 0;
    if (t1 > t2)
        mayor = t1;
    else
        mayor = t2;
    return mayor;
}

int main() 
{
    double c1 = 0, c2 = 0;
    
    cout << "Ingrese una temperatura" << endl;
    cin >> c1;
    
    cout << c1 << " C = " << ConvertirCelsiusAFahrenheit(c1) << " F" << endl;
    
    cout << "Ingrese una segunda temperatura" << endl;
    cin >> c2;
    
    cout << c2 << " C = " << ConvertirCelsiusAFahrenheit(c2) << " F" << endl;
    
    //realiza la comparativa al final del codigo
    cout << "Mayor temperatura entre " << c1 << " y " << c2 << ": " << MayorTemperatura(c1,c2) << endl;
    return 0;
}

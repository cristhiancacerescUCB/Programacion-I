// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 18/09/2025
// Número de ejercicio: 2

#include <iostream>
using namespace std;

double CalcularVolumen(double r, double h = 10) 
{
    //valor h de referencia
    double pi = 3.1416;
    return pi * r * r * h;
}

int main() 
{
    double radio, altura;
    cout << "Ingrese radio: ";
    cin >> radio;
    
    cout << "Ingrese altura: ";
    cin >> altura;
    
    cout << "Volumen con altura 10: " << CalcularVolumen(radio) << endl;
    cout << "Volumen con altura "<< altura <<": " << CalcularVolumen(radio,altura) << endl;

    return 0;
}

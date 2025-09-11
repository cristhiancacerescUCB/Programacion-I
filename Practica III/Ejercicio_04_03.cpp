// Materia: Programacion I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingenieria en Multimedia e Interactividad
// Fecha creacion: 10/09/2025
// numero de ejercicio: 4

#include <iostream>

using namespace std;

double calcularIMC(double peso, double altura) 
{
    return peso / (altura * altura);
}

int main() 
{
    double peso, altura;
    cout << "Ingrese peso (kg): ";
    cin >> peso;
    cout << "Ingrese altura (m): ";
    cin >> altura;
    
    cout << "IMC: " << calcularIMC(peso, altura) << endl;
    
    return 0;
}
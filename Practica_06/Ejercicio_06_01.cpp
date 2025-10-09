// Materia: Programación I, Paralelo 1
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 7/10/2024
// Número de ejercicio: 1
// Problema planteado: Leer edades hasta -1 y calcular desviación típica

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

double desviacionTipica(const vector<double>& v) 
{
    int n = v.size();
    if (n == 0) return 0.0;
    double suma = 0;
    for (double x : v) suma += x;
    double media = suma / n;
    double sumVar = 0;
    for (double x : v) sumVar += (x - media) * (x - media);
    return sqrt(sumVar / n); // desviación poblacional
}

int main() 
{
    vector<double> edades;
    cout << "Ingrese edades (ingrese -1 para terminar): "<<endl;
    
    while (true) 
    {
        double edad; 
        cin >> edad;
        if (edad == -1) break;
        edades.push_back(edad);
    }
    
    cout << "Desviacion tipica: " << desviacionTipica(edades) << endl;
    return 0;
}

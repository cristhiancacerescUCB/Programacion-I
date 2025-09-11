// Materia: Programacion I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingenieria en Multimedia e Interactividad
// Fecha creacion: 10/09/2025
// numero de ejercicio: 5

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double promedioPonderado() 
{
    int notas[4];
    int pesos[4] = {10, 20, 30, 40};
    int sumaNotas = 0, sumaPesos = 0;

    srand(time(0));
    
    for (int i = 0; i < 4; i++) 
    {
        notas[i] = 1 + rand() % 100;
        
        cout << "Nota " << i+1 << ": " << notas[i] << " Peso: " << pesos[i] << endl;
        
        sumaNotas += notas[i] * pesos[i];
        sumaPesos += pesos[i];
    }
    cout << "Promedio ponderado: ";
    return sumaNotas / sumaPesos;
}

int main() 
{
    cout << "Promedio ponderado: " << endl;
    cout<< promedioPonderado() << endl;
    return 0;
}
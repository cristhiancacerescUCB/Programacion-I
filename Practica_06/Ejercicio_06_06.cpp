// Materia: Programación I, Paralelo 1
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 7/10/2024
// Número de ejercicio: 6
// Problema planteado: Rango de calificaciones en un curso: 
// Un maestro tiene N calificaciones de sus estudiantes en un vector. 
// Las calificaciones deben ser llenadas en forma aleatoria entre 0 y 100. 
// Luego debe calcular el porcentaje de estudiantes en cada rango:

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    
    int N; cout << "Cantidad de estudiantes: "; cin >> N;
    
    int r1=0,r2=0,r3=0,r4=0;
    for (int i=0;i<N;i++) 
    {
        int nota = rand()%101;
        if (nota <= 59) r1++;
        else if (nota <= 79) r2++;
        else if (nota <= 89) r3++;
        else r4++;
    }
    cout << "Reprobado (0-59): " << (r1*100.0/N) << "%"<<endl;
    cout << "Regular (60-79): " << (r2*100.0/N) << "%"<<endl;
    cout << "Bueno (80-89): " << (r3*100.0/N) << "%"<<endl;
    cout << "Excelente (90-100): " << (r4*100.0/N) << "%"<<endl;
    return 0;
}

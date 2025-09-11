// Materia: Programacion I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingenieria en Multimedia e Interactividad
// Fecha creacion: 10/09/2025
// numero de ejercicio: 6


#include <iostream>
using namespace std;

int diasEnMes(int anio, int mes) 
{
    if (mes == 2) 
    {
        if 
        ((anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0))
        return 29;
        
        else
        return 28;
    } 
    else if 
        (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        return 30;
    
    else
        return 31;
}

int main() {
    int anio, mes;
    cout << "Ingrese anio: ";
    cin >> anio;
    
    cout << "Ingrese mes (1-12): ";
    cin >> mes;
    
    cout << "Dias: " << diasEnMes(anio, mes) << endl;
    return 0;
}
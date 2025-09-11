// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrrera: Ingeneria Multimedia e Interactividad
// Fecha creación: 11/09/2025
// Número de ejercicio: 9

#include <iostream>
using namespace std;

void jornada(int minutos) 
{
    int jornadaNormal = 8 * 60;
    
    if (minutos > jornadaNormal)
        cout << "Trabajo extra: " << minutos - jornadaNormal << " minutos" << endl;
    else if (minutos < jornadaNormal)
        cout << "Debe: " << jornadaNormal - minutos << " minutos" << endl;
    else
        cout << "Cumplio su jornada exacta" << endl;
}

int main() 
{
    int minutos;
    cout << "Ingrese minutos trabajados: ";
    cin >> minutos;
    jornada(minutos);
    return 0;
}
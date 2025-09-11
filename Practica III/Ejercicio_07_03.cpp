// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrrera: Ingeneria Multimedia e Interactividad
// Fecha creación: 11/09/2025
// Número de ejercicio: 7

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void alumnos(int N)
{
    int edad, mayores = 0;
    double altura, sumaEdad = 0, sumaAltura = 0;
    int altos = 0;

    srand(time(0));
    for (int i = 0; i < N; i++) 
    {
        edad = 1 + rand() % 35;
        altura = 120 + rand() % 81;
        
        cout << "Alumno " << i+1 << ": Edad " << edad << " Altura " << altura << " cm" << endl;
        
        sumaEdad += edad;
        sumaAltura += altura;
        
        if (edad > 18) 
            mayores++;
        if (altura > 175) 
            altos++;
    }

    cout << "Edad media: " << sumaEdad / N << endl;
    cout << "Altura media: " << sumaAltura / N << endl;
    cout << "Mayores de 18: " << mayores << endl;
    cout << "Mas de 175 cm: " << altos << endl;
}

int main() 
{
    int N;
    cout << "Ingrese cantidad de alumnos: ";
    cin >> N;
    alumnos(N);
    return 0;
}

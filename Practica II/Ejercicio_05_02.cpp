// Materia: ProgramaciC3n I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingenieria en Multimedia e Interactividad
// Fecha creaciC3n: 10/09/2025
// numero de ejercicio: 5

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
	int n, numero;
	int suma = 0, mayor = 0, menor = 1000, promedio = 0;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;

    srand(time(0));

    for (int i = 0; i < n; i++) 
    {
        numero = 1 + rand() % 1000;
        cout << "Numero " << i+1 << ": " << numero << endl;
        suma += numero;
        if (numero > mayor) mayor = numero;
        if (numero < menor) menor = numero;
    }
    
    promedio = (suma / n);

    cout << "Sumatoria: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
    cout << "Mayor: " << mayor << endl;
    cout << "Menor: " << menor << endl;

    return 0;
}
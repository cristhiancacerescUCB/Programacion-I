// Materia: Programacion I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingenieria en Multimedia e Interactividad
// Fecha creaciC3n: 10/09/2025
// numero de ejercicio: 6

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int primo(int n) {
    if (n < 2) 
    return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
        return 0;
    }
    return 1;
}

int main() {
    int n, numero, primos = 0;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> n;

    srand(time(0));

    for (int i = 0; i < n; i++) 
    {
        numero = 1 + rand() % 10000;
        
        cout << "Numero " << i+1 << ": " << numero << endl;
        
        if (primo(numero) == 1)
        {
            primos++;
        }
    }

    cout << "Cantidad de numeros primos: " << primos << endl;

    return 0;
}
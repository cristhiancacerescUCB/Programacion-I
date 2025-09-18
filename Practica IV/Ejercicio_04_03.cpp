// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 18/09/2025
// Número de ejercicio: 2

#include <iostream>
using namespace std;

void ModificarValores(int valorPorValor, int &valorPorRef) 
{
    valorPorValor = valorPorValor * 2; // no hay un cambio fuera de la funcion
    valorPorRef = valorPorRef + 10;    // hay un cambio fuera de la funcion
    cout << "valorPorValor (doble): " << valorPorValor 
         << " , valorPorRef (+10): " << valorPorRef << endl;
}

int main() {
    int a = 0;
    int b = 3;
    
    cout << "Ingrese el valor de a: ";
    cin >> a;
    
    cout << "Antes: a = " << a << ", b = " << b << endl;
    ModificarValores(a, b);
    cout << "Despues: a = " << a << ", b = " << b << endl;
    return 0;
}

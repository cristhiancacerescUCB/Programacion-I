// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 18/09/2025
// Número de ejercicio: 1

#include <iostream>
using namespace std;

void IntercambiarValores(int &a, int &b) 
{
    // la variable cambio temporalmente almacena el valor de a
    int cambio = a;
    a = b;
    b = cambio;
}

int main() 
{
    int x = 0, y = 0;
    cout << "Ingrese un valor para x"<< endl;
    cin >> x;
    
    cout << "Ingrese un valor para y"<< endl;
    cin >> y;
    //valores iniciales
    cout << "Antes: x = " << x << " y = " << y << endl;
    //valor final
    IntercambiarValores(x, y);
    
    cout << "Despues: x=" << x << " y=" << y << endl;
    return 0;
}

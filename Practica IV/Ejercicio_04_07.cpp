// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 18/09/2025
// Número de ejercicio: 6

#include <iostream>
using namespace std;

int MCD(int a, int b) 
{
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) 
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

double MCM(int a, int b) 
{
    int gcd = MCD(a,b);
    if (gcd == 0) return 0;
    return (double)(a / gcd) * b; //multiplicación directa, como son dos valores enteros, con(double) se modifica el tipo valor
}

int main() 
{
    int m, n;
    cout << "Ingrese m: "; 
    cin >> m;
    cout << "Ingrese n: "; 
    cin >> n;
    cout << "MCD: " << MCD(m,n) << endl;
    cout << "MCM: " << MCM(m,n) << endl;
    return 0;
}

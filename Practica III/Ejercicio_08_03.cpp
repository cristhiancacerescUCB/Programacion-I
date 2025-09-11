// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrrera: Ingeneria Multimedia e Interactividad
// Fecha creación: 11/09/2025
// Número de ejercicio: 8

#include <iostream>
using namespace std;

void convertirDinero(int monto) 
{
    int valores[] = {200, 100, 50, 20, 10, 5, 2, 1};
    
    for (int i = 0; i < 8; i++) 
    {
        int cantidad = monto / valores[i];
        
        if (cantidad > 0) 
        {
            cout << cantidad << " de " << valores[i] << " Bs" << endl;
            monto = monto % valores[i];
        }
    }
}

int main() 
{
    int monto;
    cout << "Ingrese monto: ";
    cin >> monto;
    cout << "sea el monto " << monto << ", debe recibir: " << endl;
    convertirDinero(monto);
    return 0;
}
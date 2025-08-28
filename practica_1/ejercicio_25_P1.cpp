// Materia: Programacion I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingenieria Multimedia e Interactividad
// Fecha creacion: 28/08/2025
// NC:mero de ejercicio: 24
#include <iostream>
using namespace std;
int main() 
{
    int num;
    char respuesta;

    do {
        cout << "Ingrese un numero: ";
        cin >> num;

        for(int i = 1; i <= 10; i++) 
        {
            cout << num << " x " << i << " = " << num*i << endl;
        }

        cout << "Desea calcular otra tabla? (s/n): ";
        cin >> respuesta;
        respuesta = tolower(respuesta); 
        
        if (respuesta=='n')
        {
            cout << "Gracias por su tiempo!";
        }
        else if (respuesta!='s')
        {
            cout << "Debe responder con s o n, intente otra vez luego";
        }
    } while(respuesta == 's');
    return 0;
}
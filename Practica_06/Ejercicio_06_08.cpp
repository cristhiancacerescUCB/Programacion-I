// Materia: Programación I, Paralelo 1
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 7/10/2024
// Número de ejercicio: 8
// Problema planteado: Escribe un programa que valide si una cadena 
// ingresada cumple con el formato básico de una dirección de 
// correo electrónico (por ejemplo, contiene exactamente un '@' y al menos un punto '.' después del '@').

#include <iostream>
#include <string>
using namespace std;


int correoValido(const string& s) 
{
    int contadorAt = 0;
    int posicionAt = -1;

    for (size_t i = 0; i < s.size(); ++i) 
    {
        if (s[i] == '@') 
        {
            contadorAt = contadorAt + 1;
            posicionAt = (int)i;
        }
    }

    if (contadorAt != 1) return 0;

    for (size_t j = posicionAt + 1; j < s.size(); ++j) {
        if (s[j] == '.') {
            return 1;
        }
    }

    return 0;
}

int main() {
    string correo;
    cout << "Ingrese correo: ";
    cin >> correo;

    if (correoValido(correo) == 1) {
        cout << "Correo electronico valido" << endl;
    } else {
        cout << "Correo electronico invalido" << endl;
    }

    return 0;
}
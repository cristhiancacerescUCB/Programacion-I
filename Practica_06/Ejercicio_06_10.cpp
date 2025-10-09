// Materia: Programación I, Paralelo 1
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 7/10/2024
// Número de ejercicio: 10
// Problema planteado: Escribe un programa que elimine todos los dígitos de una cadena.
// Entrada: "abc123def456"
// Salida: "abcdef"

#include <iostream>
#include <string>
using namespace std;

int main() 
{
    cout << "Ingrese la cadena: "<<endl;
    string s; getline(cin, s);
    string out;
    for (char c : s) if (!(c >= '0' && c <= '9')) out.push_back(c);
    cout << "Resultado: " << out << endl;
    return 0;
}
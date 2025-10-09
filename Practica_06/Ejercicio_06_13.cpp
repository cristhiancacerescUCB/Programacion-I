// Materia: Programación I, Paralelo 1
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 9/10/2024
// Número de ejercicio: 13
// Problema planteado: Crea una función que reciba un String de cualquier tipo y \
// se encargue de poner en mayuscula la primera letra de cada palabra.
// - No se pueden utilizar operaciones del lenguaje que lo resuelvan directamente.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

    string mayusculas(const string& s) 
{
    string resultado = s;
    bool inicio = true;
    for (size_t i=0;i<resultado.size();++i) 
    {
        if (isspace((unsigned char)resultado[i])) 
        {
            inicio = true;
        } 
        else 
        {
            if (inicio) 
            {
                resultado[i] = toupper((unsigned char)resultado[i]);
                inicio = false;
            } else {
                resultado[i] = tolower((unsigned char)resultado[i]);
            }
        }
    }
    return resultado;
}

int main() 
{
    cout << "Ingrese texto: ";
    string texto;
    getline(cin, texto);
    cout << mayusculas(texto) << endl;
    return 0;
}

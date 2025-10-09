// Materia: Programación I, Paralelo 1
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 7/10/2024
// Número de ejercicio: 9
// Problema planteado: Escribe un programa que invierta el orden de 
// las palabras en una oración sin cambiar el orden de los caracteres dentro de cada palabra.

#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() 
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Ingrese una oracion completa: "<<endl;
    string linea;
    getline(cin, linea);
    stringstream ss(linea);
    vector<string> words;
    string w;
    while (ss >> w) words.push_back(w);
    for (int i = (int)words.size()-1; i>=0; --i) 
    {
        cout << words[i];
        if (i>0) cout << " ";
    }
    cout << endl;
    return 0;
}
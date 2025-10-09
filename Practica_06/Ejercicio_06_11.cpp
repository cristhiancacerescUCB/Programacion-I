// Materia: Programación I, Paralelo 1
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 9/10/2024
// Número de ejercicio: 11
// Problema planteado:Escribe un programa que divida una cadena en tokens 
// (subcadenas) separadas por un delimitador. Por ejemplo, dividir una oración en palabras.
// Entrada: "Esto,es,una,cadena,separada,por,comas", delimitador: ','
// Salida:
// Esto
// es
// una
// cadena
// separada
// por
// comas

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> split(const string& s, char delim) 
{
    vector<string> res;
    string cur;
    for (char c : s) 
    {
        if (c == delim) { res.push_back(cur); cur.clear(); }
        else cur.push_back(c);
    }
    res.push_back(cur);
    return res;
}

int main() 
{
    string cadena; char d;
    cout << "Ingrese cadena:\n"; getline(cin, cadena);
    cout << "Ingrese delimitador (un caracter): "; cin >> d;
    vector<string> tokens = split(cadena, d);
    for (auto &t : tokens) cout << t << endl;
    return 0;
}
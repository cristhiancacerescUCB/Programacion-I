// Materia: Programación I, Paralelo 1
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 9/10/2024
// Número de ejercicio: 12
// Problema planteado: Determinar si una frase es palíndromo ignorando espacios, signos y tildes
// Nota: No usa <algorithm>, pero usa bool para indicar verdadero o falso

#include <iostream>
#include <string>
#include <cctype> // para isalpha y tolower
using namespace std;

char quitarTilde(char c)
{
    c = tolower(c);
    if (c == 'á') return 'a';
    if (c == 'é') return 'e';
    if (c == 'í') return 'i';
    if (c == 'ó') return 'o';
    if (c == 'ú') return 'u';
    return c;
}

bool esPalindromo(string texto) {
    string limpio = "";

    for (int i = 0; i < texto.length(); i++) 
    {
        char c = texto[i];
        c = quitarTilde(c);

        if (isalpha((unsigned char)c)) 
        {
            limpio = limpio + (char)tolower((unsigned char)c);
        }
    }

    int inicio = 0;
    int fin = limpio.length() - 1;

    while (inicio < fin) 
    {
        if (limpio[inicio] != limpio[fin]) 
        {
            return false;
        }
        inicio++;
        fin--;
    }
    return true;
}

int main() 
{
    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);

    if (esPalindromo(frase)) 
    {
        cout << "La frase ES un palindromo." << endl;
    } 
    else 
    {
        cout << "La frase NO es un palindromo." << endl;
    }

    return 0;
}
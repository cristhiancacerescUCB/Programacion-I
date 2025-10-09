// Materia: Programación I, Paralelo 1
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 9/10/2024
// Número de ejercicio: 14
// Problema planteado: Realizar el ejercicio de este video 
//(Contando cada vocal en una frase): https://www.youtube.com/watch?v=CuQzFZGqTP8

#include <iostream>
#include <string>
#include <vector>
#include <cctype>
using namespace std;

int main() {
    cout << "Ingrese una frase: ";
    string frase;
    getline(cin, frase);
    
    int cont[5] = {0, 0, 0, 0, 0};

    for (int i = 0; i < (int)frase.size(); i++) 
    {
        char c = frase[i];
        c = tolower((unsigned char)c);

        switch (c) {
            case 'a': cont[0]++; break;
            case 'á': cont[0]++; break;
            case 'e': cont[1]++; break;
            case 'é': cont[1]++; break;
            case 'i': cont[2]++; break;
            case 'í': cont[2]++; break;
            case 'o': cont[3]++; break;
            case 'ó': cont[3]++; break;
            case 'u': cont[4]++; break;
            case 'ú': cont[4]++; break;
            default:
                break;
        }
    }

    cout << "Conteo de vocales: "<<endl;
    cout << "a: " << cont[0] << endl;
    cout << "e: " << cont[1] << endl;
    cout << "i: " << cont[2] << endl;
    cout << "o: " << cont[3] << endl;
    cout << "u: " << cont[4] << endl;

    return 0;
}
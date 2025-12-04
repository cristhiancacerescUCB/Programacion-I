// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 28/11/2025
// Número de ejercicio: 2
#include <iostream>
#include <fstream>
using namespace std;

// Funcion para contar palabras en el archivo
int contarPalabras() {
    ifstream archivo;
    archivo.open("texto.txt");
    
    if(!archivo.is_open()) {
        cout << "Error: No se encontro el archivo texto.txt\n";
        return -1;
    }
    
    int contador = 0;
    char palabra[100];
    
    // Lee palabra por palabra del archivo
    while(archivo >> palabra) {
        contador++;
    }
    
    archivo.close();
    return contador;
}

// Funcion para mostrar el resultado
void mostrarResultado(int total) {
    if(total >= 0) {
        cout << "El archivo contiene " << total << " palabras.\n";
    }
}

int main() {
    int totalPalabras = contarPalabras();
    mostrarResultado(totalPalabras);
    
    return 0;
}
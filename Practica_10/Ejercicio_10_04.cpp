// Materia: Programacion I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 28/11/2025
// Numero de ejercicio: 4

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

// Funcion para buscar palabra en el archivo
int buscarPalabra(char buscar[]) {
    ifstream archivo;
    archivo.open("datos.txt");
    
    if(!archivo.is_open()) {
        cout << "Error: No se encontro el archivo datos.txt\n";
        return -1;
    }
    
    int contador = 0;
    char palabra[100];
    
    while(archivo >> palabra) {
        if(strcmp(palabra, buscar) == 0) {
            contador++;
        }
    }
    
    archivo.close();
    return contador;
}

// Funcion para mostrar resultado de busqueda
void mostrarResultado(char buscar[], int veces) {
    if(veces == -1) {
        return;
    }
    
    cout << "\nLa palabra '" << buscar << "' aparece ";
    cout << veces << " veces en el archivo.\n";
}

int main() {
    char palabra[100];
    
    cout << "Ingrese la palabra o frase a buscar: ";
    cin.getline(palabra, 100);
    
    int resultado = buscarPalabra(palabra);
    mostrarResultado(palabra, resultado);
    
    return 0;
}
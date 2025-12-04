// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 28/11/2025
// Número de ejercicio: 8
#include <iostream>
#include <fstream>
using namespace std;

// Funcion para contar lineas
int contarLineas() {
    ifstream archivo;
    archivo.open("documento.txt");
    
    if(!archivo.is_open()) {
        return -1;
    }
    
    int contador = 0;
    char linea[1000];
    
    while(archivo.getline(linea, 1000)) {
        contador++;
    }
    
    archivo.close();
    return contador;
}

// Funcion para contar palabras
int contarPalabras() {
    ifstream archivo;
    archivo.open("documento.txt");
    
    if(!archivo.is_open()) {
        return -1;
    }
    
    int contador = 0;
    char palabra[100];
    
    while(archivo >> palabra) {
        contador++;
    }
    
    archivo.close();
    return contador;
}

// Funcion para contar caracteres
int contarCaracteres() {
    ifstream archivo;
    archivo.open("documento.txt");
    
    if(!archivo.is_open()) {
        return -1;
    }
    
    int contador = 0;
    char caracter;
    
    while(archivo.get(caracter)) {
        contador++;
    }
    
    archivo.close();
    return contador;
}

// Funcion para mostrar estadisticas
void mostrarEstadisticas(int lineas, int palabras, int caracteres) {
    if(lineas == -1) {
        cout << "Error: No se pudo abrir el archivo documento.txt\n";
        return;
    }
    
    cout << "ESTADISTICAS DEL ARCHIVO:\n";
    cout << "==========================\n";
    cout << "Total de lineas: " << lineas << endl;
    cout << "Total de palabras: " << palabras << endl;
    cout << "Total de caracteres: " << caracteres << endl;
}

int main() {
    int lineas = contarLineas();
    int palabras = contarPalabras();
    int caracteres = contarCaracteres();
    
    mostrarEstadisticas(lineas, palabras, caracteres);
    
    return 0;
}
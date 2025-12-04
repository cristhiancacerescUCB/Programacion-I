// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 28/11/2025
// Número de ejercicio: 9
#include <iostream>
#include <fstream>
using namespace std;

// Funcion para cifrar un caracter con cifrado Cesar
char cifrarCaracter(char c, int desplazamiento) {
    // Cifrar mayusculas
    if(c >= 'A' && c <= 'Z') {
        return (c - 'A' + desplazamiento) % 26 + 'A';
    }
    // Cifrar minusculas
    else if(c >= 'a' && c <= 'z') {
        return (c - 'a' + desplazamiento) % 26 + 'a';
    }
    // No cifrar otros caracteres
    else {
        return c;
    }
}

// Funcion para cifrar el archivo completo
void cifrarArchivo(int desplazamiento) {
    ifstream archivoEntrada;
    archivoEntrada.open("mensaje.txt");
    
    if(!archivoEntrada.is_open()) {
        cout << "Error: No se pudo abrir mensaje.txt\n";
        return;
    }
    
    ofstream archivoSalida;
    archivoSalida.open("mensaje_cifrado.txt");
    
    char caracter;
    
    while(archivoEntrada.get(caracter)) {
        char cifrado = cifrarCaracter(caracter, desplazamiento);
        archivoSalida << cifrado;
    }
    
    archivoEntrada.close();
    archivoSalida.close();
    
    cout << "Archivo cifrado exitosamente!\n";
    cout << "Resultado guardado en 'mensaje_cifrado.txt'\n";
}

int main() {
    int desplazamiento = 3;
    
    cout << "CIFRADO CESAR\n";
    cout << "=============\n";
    cout << "Desplazamiento: " << desplazamiento << endl;
    cout << "\nCifrando archivo...\n\n";
    
    cifrarArchivo(desplazamiento);
    
    return 0;
}
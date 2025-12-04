// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 28/11/2025
// Número de ejercicio: 7
#include <iostream>
#include <fstream>
using namespace std;

// Funcion para calcular promedio de un arreglo
float calcularPromedio(float notas[], int cantidad) {
    float suma = 0;
    for(int i = 0; i < cantidad; i++) {
        suma = suma + notas[i];
    }
    return suma / cantidad;
}

// Funcion para procesar calificaciones
void procesarCalificaciones() {
    ifstream archivoEntrada;
    archivoEntrada.open("calificaciones.txt");
    
    if(!archivoEntrada.is_open()) {
        cout << "Error: No se pudo abrir calificaciones.txt\n";
        return;
    }
    
    ofstream archivoSalida;
    archivoSalida.open("promedios.txt");
    
    char nombre[50];
    
    while(archivoEntrada >> nombre) {
        float notas[10];
        int cantidad = 0;
        float nota;
        
        // Leer todas las notas de la linea
        while(archivoEntrada.peek() != '\n' && archivoEntrada >> nota) {
            notas[cantidad] = nota;
            cantidad++;
        }
        archivoEntrada.ignore();
        
        float promedio = calcularPromedio(notas, cantidad);
        
        // Guardar en archivo de salida
        archivoSalida << nombre << " " << promedio << endl;
        
        cout << nombre << ": " << promedio << endl;
    }
    
    archivoEntrada.close();
    archivoSalida.close();
    
    cout << "\nArchivo 'promedios.txt' generado correctamente.\n";
}

int main() {
    cout << "CALCULANDO PROMEDIOS...\n";
    cout << "========================\n";
    procesarCalificaciones();
    
    return 0;
}
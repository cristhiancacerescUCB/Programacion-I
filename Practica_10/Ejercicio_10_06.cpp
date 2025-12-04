// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 28/11/2025
// Número de ejercicio: 6
#include <iostream>
#include <fstream>
using namespace std;

// Funcion para filtrar temperaturas altas
void filtrarTemperaturas(float limite) {
    ifstream archivoEntrada;
    archivoEntrada.open("temperaturas.txt");
    
    if(!archivoEntrada.is_open()) {
        cout << "Error: No se pudo abrir temperaturas.txt\n";
        return;
    }
    
    ofstream archivoSalida;
    archivoSalida.open("altas_temperaturas.txt");
    
    char ciudad[50];
    float temperatura;
    int contador = 0;
    
    while(archivoEntrada >> ciudad >> temperatura) {
        if(temperatura > limite) {
            archivoSalida << ciudad << " " << temperatura << endl;
            contador++;
        }
    }
    
    archivoEntrada.close();
    archivoSalida.close();
    
    cout << "\nSe encontraron " << contador << " ciudades con temperatura";
    cout << " superior a " << limite << " grados.\n";
    cout << "Archivo 'altas_temperaturas.txt' generado.\n";
}

// Funcion para solicitar temperatura limite
float solicitarLimite() {
    float limite;
    cout << "Ingrese la temperatura limite (grados): ";
    cin >> limite;
    return limite;
}

int main() {
    float limite = solicitarLimite();
    filtrarTemperaturas(limite);
    
    return 0;
}
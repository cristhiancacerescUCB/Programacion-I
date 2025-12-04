// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 28/11/2025
// Número de ejercicio: 1
#include <iostream>
#include <fstream>
using namespace std;

// Funcion para escribir nombres en el archivo
void escribirNombres() {
    ofstream archivo;
    archivo.open("nombres.txt");
    
    int cantidad;
    cout << "Cuantos nombres desea ingresar? ";
    cin >> cantidad;
    cin.ignore();
    
    for(int i = 0; i < cantidad; i++) {
        char nombre[100];
        cout << "Ingrese nombre " << i+1 << ": ";
        cin.getline(nombre, 100);
        archivo << nombre << endl;
    }
    
    archivo.close();
    cout << "\nNombres guardados correctamente!\n\n";
}

// Funcion para leer nombres del archivo
void leerNombres() {
    ifstream archivo;
    archivo.open("nombres.txt");
    
    if(!archivo.is_open()) {
        cout << "Error: No se pudo abrir el archivo\n";
        return;
    }
    
    cout << "NOMBRES EN EL ARCHIVO:\n";
    cout << "----------------------\n";
    
    char linea[100];
    while(archivo.getline(linea, 100)) {
        cout << linea << endl;
    }
    
    archivo.close();
}

int main() {
    escribirNombres();
    leerNombres();
    
    return 0;
}
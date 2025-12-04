// Materia: Programacion I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 28/11/2025
// Numero de ejercicio: 3
#include <iostream>
#include <fstream>
using namespace std;

struct Estudiante {
    char nombre[50];
    int edad;
    float promedio;
};

// Funcion para registrar estudiantes
void registrarEstudiantes() {
    ofstream archivo;
    archivo.open("estudiantes.txt");
    
    int cantidad;
    cout << "Cuantos estudiantes desea registrar? ";
    cin >> cantidad;
    
    Estudiante E[cantidad];
    
    for(int i = 0; i < cantidad; i++) {
        cin.ignore();
        cout << "\nESTUDIANTE " << i+1 << endl;
        cout << "Nombre: ";
        cin.getline(E[i].nombre, 50);
        
        cout << "Edad: ";
        cin >> E[i].edad;
        
        cout << "Promedio: ";
        cin >> E[i].promedio;
        
        // Guardar en archivo
        archivo << E[i].nombre << endl;
        archivo << E[i].edad << endl;
        archivo << E[i].promedio << endl;
    }
    
    archivo.close();
    cout << "\nEstudiantes registrados correctamente!\n\n";
}

// Funcion para leer y mostrar estudiantes
void mostrarEstudiantes() {
    ifstream archivo;
    archivo.open("estudiantes.txt");
    
    if(!archivo.is_open()) {
        cout << "Error: No se pudo abrir el archivo\n";
        return;
    }
    
    cout << "LISTA DE ESTUDIANTES:\n";
    cout << "=====================\n\n";
    
    char nombre[50];
    int edad;
    float promedio;
    int num = 1;
    
    while(archivo.getline(nombre, 50)) {
        archivo >> edad;
        archivo >> promedio;
        archivo.ignore();
        
        cout << "Estudiante " << num << ":\n";
        cout << "  Nombre: " << nombre << endl;
        cout << "  Edad: " << edad << " anios\n";
        cout << "  Promedio: " << promedio << endl;
        cout << endl;
        num++;
    }
    
    archivo.close();
}

int main() {
    registrarEstudiantes();
    mostrarEstudiantes();
    
    return 0;
}
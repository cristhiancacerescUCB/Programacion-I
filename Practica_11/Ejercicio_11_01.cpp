// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 28-11-2025
// Número de ejercicio: 1
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct structEstudiante {
    char ci[10];
    char nombres[30];
    char apellidos[30];
};

struct structNotas {
    char ci[10];
    char materia[30];
    int nota;
};

// Funcion para verificar si existe un estudiante
bool existeEstudiante(char ci[]) {
    ifstream archivo;
    archivo.open("Estudiantes.bin", ios::binary);
    
    if(!archivo.is_open()) {
        return false;
    }
    
    structEstudiante est;
    while(archivo.read((char*)&est, sizeof(structEstudiante))) {
        if(strcmp(est.ci, ci) == 0) {
            archivo.close();
            return true;
        }
    }
    
    archivo.close();
    return false;
}

// Funcion para ingresar estudiantes
void ingresarEstudiante() {
    structEstudiante est;
    
    cout << "\nINGRESO DE ESTUDIANTE\n";
    cout << "=====================\n";
    cout << "CI: ";
    cin >> est.ci;
    
    if(existeEstudiante(est.ci)) {
        cout << "\nError: El estudiante ya existe!\n";
        return;
    }
    
    cin.ignore();
    cout << "Nombres: ";
    cin.getline(est.nombres, 30);
    
    cout << "Apellidos: ";
    cin.getline(est.apellidos, 30);
    
    ofstream archivo;
    archivo.open("Estudiantes.bin", ios::binary | ios::app);
    archivo.write((char*)&est, sizeof(structEstudiante));
    archivo.close();
    
    cout << "\nEstudiante registrado correctamente!\n";
}

// Funcion para verificar si existe una nota
bool existeNota(char ci[], char materia[]) {
    ifstream archivo;
    archivo.open("Notas.bin", ios::binary);
    
    if(!archivo.is_open()) {
        return false;
    }
    
    structNotas nota;
    while(archivo.read((char*)&nota, sizeof(structNotas))) {
        if(strcmp(nota.ci, ci) == 0 && strcmp(nota.materia, materia) == 0) {
            archivo.close();
            return true;
        }
    }
    
    archivo.close();
    return false;
}

// Funcion para ingresar notas
void ingresarNotas() {
    structNotas nota;
    
    cout << "\nINGRESO DE NOTAS\n";
    cout << "================\n";
    cout << "CI Estudiante: ";
    cin >> nota.ci;
    
    if(!existeEstudiante(nota.ci)) {
        cout << "\nError: El estudiante no existe!\n";
        return;
    }
    
    cin.ignore();
    cout << "Materia: ";
    cin.getline(nota.materia, 30);
    
    if(existeNota(nota.ci, nota.materia)) {
        cout << "\nError: La nota de esta materia ya existe!\n";
        return;
    }
    
    cout << "Nota: ";
    cin >> nota.nota;
    
    ofstream archivo;
    archivo.open("Notas.bin", ios::binary | ios::app);
    archivo.write((char*)&nota, sizeof(structNotas));
    archivo.close();
    
    cout << "\nNota registrada correctamente!\n";
}

// Funcion para mostrar reporte
void mostrarReporte() {
    ifstream archivoEst;
    archivoEst.open("Estudiantes.bin", ios::binary);
    
    if(!archivoEst.is_open()) {
        cout << "\nNo hay estudiantes registrados.\n";
        return;
    }
    
    cout << "\nREPORTE DE ESTUDIANTES Y NOTAS\n";
    cout << "================================\n\n";
    
    structEstudiante est;
    while(archivoEst.read((char*)&est, sizeof(structEstudiante))) {
        cout << "CI: " << est.ci << endl;
        cout << "Nombre: " << est.nombres << " " << est.apellidos << endl;
        cout << "Notas:\n";
        
        ifstream archivoNotas;
        archivoNotas.open("Notas.bin", ios::binary);
        
        structNotas nota;
        bool tieneNotas = false;
        
        while(archivoNotas.read((char*)&nota, sizeof(structNotas))) {
            if(strcmp(nota.ci, est.ci) == 0) {
                cout << "  - " << nota.materia << ": " << nota.nota << endl;
                tieneNotas = true;
            }
        }
        
        if(!tieneNotas) {
            cout << "  (Sin notas registradas)\n";
        }
        
        archivoNotas.close();
        cout << endl;
    }
    
    archivoEst.close();
}

// Funcion para mostrar menu
void mostrarMenu() {
    cout << "\nMENU ESTUDIANTES\n";
    cout << "================\n";
    cout << "1. Ingreso de datos estudiantes\n";
    cout << "2. Ingreso de materias y notas\n";
    cout << "3. Reporte de estudiantes y notas\n";
    cout << "4. Salir\n";
    cout << "Opcion: ";
}

int main() {
    int opcion;
    
    do {
        mostrarMenu();
        cin >> opcion;
        
        switch(opcion) {
            case 1:
                ingresarEstudiante();
                break;
            case 2:
                ingresarNotas();
                break;
            case 3:
                mostrarReporte();
                break;
            case 4:
                cout << "\nSaliendo del programa...\n";
                break;
            default:
                cout << "\nOpcion invalida!\n";
        }
    } while(opcion != 4);
    
    return 0;
}
// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 28-11-2025
// Número de ejercicio: 4
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Estudiante {
    int carnet;
    char nombres[30];
    char apellidos[30];
    char materia[50];
    int paralelo;
};

struct Nota {
    int carnet;
    char materia[50];
    int paralelo;
    float nota;
    float porcentaje;
};

// Funcion para verificar si existe estudiante
bool existeEstudiante(int carnet) {
    ifstream archivo;
    archivo.open("ESTUDIANTES.BIN", ios::binary);
    
    if(!archivo.is_open()) {
        return false;
    }
    
    Estudiante est;
    while(archivo.read((char*)&est, sizeof(Estudiante))) {
        if(est.carnet == carnet) {
            archivo.close();
            return true;
        }
    }
    
    archivo.close();
    return false;
}

// Funcion para adicionar estudiante
void adicionarEstudiante() {
    Estudiante est;
    
    cout << "\nADICIONAR ESTUDIANTE\n";
    cout << "====================\n";
    cout << "Carnet: ";
    cin >> est.carnet;
    
    if(existeEstudiante(est.carnet)) {
        cout << "\nError: El estudiante ya existe!\n";
        return;
    }
    
    cin.ignore();
    cout << "Nombres: ";
    cin.getline(est.nombres, 30);
    
    cout << "Apellidos: ";
    cin.getline(est.apellidos, 30);
    
    cout << "Materia: ";
    cin.getline(est.materia, 50);
    
    cout << "Paralelo: ";
    cin >> est.paralelo;
    
    ofstream archivo;
    archivo.open("ESTUDIANTES.BIN", ios::binary | ios::app);
    archivo.write((char*)&est, sizeof(Estudiante));
    archivo.close();
    
    cout << "\nEstudiante agregado correctamente!\n";
}

// Funcion para calcular nota de habilitacion
float calcularNotaHabilitacion(int carnet, char materia[], int paralelo) {
    ifstream archivo;
    archivo.open("NOTAS.BIN", ios::binary);
    
    if(!archivo.is_open()) {
        return 0;
    }
    
    Nota n;
    float total = 0;
    
    while(archivo.read((char*)&n, sizeof(Nota))) {
        if(n.carnet == carnet && strcmp(n.materia, materia) == 0 && n.paralelo == paralelo) {
            total += (n.nota * n.porcentaje / 100);
        }
    }
    
    archivo.close();
    return total;
}

// Funcion para verificar si todas las notas son mayor o igual a 60
bool todasNotasMayoresA60(int carnet, char materia[], int paralelo) {
    ifstream archivo;
    archivo.open("NOTAS.BIN", ios::binary);
    
    if(!archivo.is_open()) {
        return false;
    }
    
    Nota n;
    bool tieneNotas = false;
    
    while(archivo.read((char*)&n, sizeof(Nota))) {
        if(n.carnet == carnet && strcmp(n.materia, materia) == 0 && n.paralelo == paralelo) {
            tieneNotas = true;
            if(n.nota < 60) {
                archivo.close();
                return false;
            }
        }
    }
    
    archivo.close();
    return tieneNotas;
}

// Funcion para listar estudiantes habilitados
void listarEstudiantesHabilitados() {
    ifstream archivo;
    archivo.open("ESTUDIANTES.BIN", ios::binary);
    
    if(!archivo.is_open()) {
        cout << "\nNo hay estudiantes registrados.\n";
        return;
    }
    
    cout << "\nLISTADO DE ESTUDIANTES HABILITADOS\n";
    cout << "===================================\n\n";
    cout << "CARNET\tNOMBRES\t\tAPELLIDOS\tMATERIA\t\t\tPARALELO\tNOTA HAB\tESTADO\n";
    cout << "-----------------------------------------------------------------------------------------\n";
    
    Estudiante est;
    float sumaNotas = 0;
    int contadorEstudiantes = 0;
    
    while(archivo.read((char*)&est, sizeof(Estudiante))) {
        float notaHab = calcularNotaHabilitacion(est.carnet, est.materia, est.paralelo);
        bool habilitado = todasNotasMayoresA60(est.carnet, est.materia, est.paralelo);
        
        cout << est.carnet << "\t" << est.nombres << "\t\t" << est.apellidos << "\t"
             << est.materia << "\t" << est.paralelo << "\t\t" << notaHab << "\t\t";
        
        if(habilitado) {
            cout << "HABILITADO";
            sumaNotas += notaHab;
            contadorEstudiantes++;
        } else {
            cout << "NO HABILITADO";
        }
        
        cout << endl;
    }
    
    archivo.close();
    
    if(contadorEstudiantes > 0) {
        float promedio = sumaNotas / contadorEstudiantes;
        cout << "\nPromedio de notas de habilitacion: " << promedio << endl;
    }
}

// Funcion para eliminar estudiante
void eliminarEstudiante() {
    int carnet;
    cout << "\nIngrese carnet del estudiante a eliminar: ";
    cin >> carnet;
    
    ifstream archivo;
    archivo.open("ESTUDIANTES.BIN", ios::binary);
    
    if(!archivo.is_open()) {
        cout << "\nNo hay estudiantes registrados.\n";
        return;
    }
    
    ofstream archivoTemp;
    archivoTemp.open("TEMP.BIN", ios::binary);
    
    Estudiante est;
    bool encontrado = false;
    
    while(archivo.read((char*)&est, sizeof(Estudiante))) {
        if(est.carnet != carnet) {
            archivoTemp.write((char*)&est, sizeof(Estudiante));
        } else {
            encontrado = true;
        }
    }
    
    archivo.close();
    archivoTemp.close();
    
    remove("ESTUDIANTES.BIN");
    rename("TEMP.BIN", "ESTUDIANTES.BIN");
    
    if(encontrado) {
        cout << "\nEstudiante eliminado correctamente!\n";
    } else {
        cout << "\nEstudiante no encontrado.\n";
    }
}

// Funcion para adicionar notas
void adicionarNotas() {
    ifstream archivoNotas;
    archivoNotas.open("NOTAS.TXT");
    
    if(!archivoNotas.is_open()) {
        cout << "\nNo se pudo abrir el archivo NOTAS.TXT\n";
        return;
    }
    
    ofstream archivoBin;
    archivoBin.open("NOTAS.BIN", ios::binary | ios::app);
    
    Nota n;
    
    while(archivoNotas >> n.carnet) {
        archivoNotas.ignore();
        archivoNotas.getline(n.materia, 50, ';');
        archivoNotas >> n.paralelo;
        archivoNotas.ignore();
        archivoNotas >> n.nota;
        archivoNotas.ignore();
        archivoNotas >> n.porcentaje;
        
        archivoBin.write((char*)&n, sizeof(Nota));
    }
    
    archivoNotas.close();
    archivoBin.close();
    
    cout << "\nNotas procesadas correctamente!\n";
}

// Funcion para mostrar menu
void mostrarMenu() {
    cout << "\nMENU NOTAS UCB\n";
    cout << "==============\n";
    cout << "1. Adicionar Estudiante\n";
    cout << "2. Listado de Estudiantes Habilitados\n";
    cout << "3. Eliminar Estudiante\n";
    cout << "4. Adicionar notas habilitacion\n";
    cout << "5. Salir\n";
    cout << "Opcion: ";
}

int main() {
    int opcion;
    
    do {
        mostrarMenu();
        cin >> opcion;
        
        switch(opcion) {
            case 1:
                adicionarEstudiante();
                break;
            case 2:
                listarEstudiantesHabilitados();
                break;
            case 3:
                eliminarEstudiante();
                break;
            case 4:
                adicionarNotas();
                break;
            case 5:
                cout << "\nSaliendo del programa...\n";
                break;
            default:
                cout << "\nOpcion invalida!\n";
        }
    } while(opcion != 5);
    
    return 0;
}
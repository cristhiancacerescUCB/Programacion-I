// Materia: Programación I, Paralelo 4
// Autor: Caceres Churqui Cristhian Emanuel
// Fecha creación: 28/11/2025
// Número de ejercicio: 3
#include <iostream>
using namespace std;

struct Estudiante {
    char nombre[10];
    int edad;
    float notas[3];
    float promedio;
};

void ingresar(Estudiante &E) {
    cout << "Nombre: ";
    cin.getline(E.nombre, 10);
    cout << "Edad: ";
    cin >> E.edad;

    E.promedio = 0;
    for(int i=0; i<3; i++){
        cout << "Nota " << i+1 << ": ";
        cin >> E.notas[i];
        E.promedio += E.notas[i];
    }
    E.promedio = E.promedio / 3;
}

void mostrar(Estudiante E) {
    cout << "\nNombre: " << E.nombre;
    cout << "\nEdad: " << E.edad;
    cout << "\nPromedio: " << E.promedio << endl;
}

int main(){
    Estudiante E;
    ingresar(E);
    mostrar(E);
    return 0;
}

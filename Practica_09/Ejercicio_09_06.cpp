// Materia: Programación I, Paralelo 4
// Autor: Caceres Churqui Cristhian Emanuel
// Fecha creación: 28/11/2025
// Número de ejercicio: 6
#include <iostream>
using namespace std;

struct Empleado {
    char nombre[20];
    float salario_base;
    float bono;
    float salario_total;
};

void ingresar(Empleado &E){
    cout << "Nombre: ";
    cin.getline(E.nombre, 20);
    cout << "Salario base: ";
    cin >> E.salario_base;
    cout << "Bono: ";
    cin >> E.bono;

    E.salario_total = E.salario_base + E.bono;
}

void mostrar(Empleado E){
    cout << "\nEmpleado: " << E.nombre << endl;
    cout << "Salario Total: " << E.salario_total << " Bs.\n";
}

int main(){
    Empleado E;
    ingresar(E);
    mostrar(E);
    return 0;
}

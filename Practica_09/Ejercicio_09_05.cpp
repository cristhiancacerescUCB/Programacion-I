// Materia: Programación I, Paralelo 4
// Autor: Caceres Churqui Cristhian Emanuel
// Fecha creación: 28/11/2025
// Número de ejercicio: 5
#include <iostream>
using namespace std;

struct Contacto {
    char nombre[20];
    char telefono[20];
    char correo[50];
};

void ingresar(Contacto C[], int n){
    for(int i=0; i<n; i++){
        cout << "\nContacto " << i+1 << endl;
        cout << "Nombre: ";
        cin.getline(C[i].nombre, 20);
        cout << "Telefono: ";
        cin.getline(C[i].telefono, 20);
        cout << "Correo: ";
        cin.getline(C[i].correo, 50);
    }
}

void mostrar(Contacto C[], int n){
    cout << "\n--- LISTA DE CONTACTOS ---\n";
    for(int i=0; i<n; i++){
        cout << C[i].nombre << " | "
             << C[i].telefono << " | "
             << C[i].correo << endl;
    }
}

int main(){
    int n;
    cout << "Cantidad de contactos: ";
    cin >> n;
    cin.ignore();
    Contacto C[n];
    ingresar(C, n);
    mostrar(C, n);

    return 0;
}

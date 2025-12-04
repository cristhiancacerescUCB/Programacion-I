// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 28/11/2025
// Número de ejercicio: 5
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

struct Producto {
    char nombre[50];
    float precio;
};

// Funcion para leer productos del archivo
int leerProductos(Producto P[]) {
    ifstream archivo;
    archivo.open("productos.txt");
    
    if(!archivo.is_open()) {
        return 0;
    }
    
    int cantidad = 0;
    while(archivo >> P[cantidad].nombre >> P[cantidad].precio) {
        cantidad++;
    }
    
    archivo.close();
    return cantidad;
}

// Funcion para actualizar precio de producto
bool actualizarPrecio(Producto P[], int cantidad, char nombre[], float nuevoPrecio) {
    for(int i = 0; i < cantidad; i++) {
        if(strcmp(P[i].nombre, nombre) == 0) {
            P[i].precio = nuevoPrecio;
            return true;
        }
    }
    return false;
}

// Funcion para guardar productos en archivo
void guardarProductos(Producto P[], int cantidad) {
    ofstream archivo;
    archivo.open("productos.txt");
    
    for(int i = 0; i < cantidad; i++) {
        archivo << P[i].nombre << " " << P[i].precio << endl;
    }
    
    archivo.close();
}

int main() {
    Producto P[100];
    int cantidad = leerProductos(P);
    
    if(cantidad == 0) {
        cout << "No se pudo abrir el archivo o esta vacio.\n";
        return 1;
    }
    
    char nombre[50];
    float nuevoPrecio;
    
    cout << "Ingrese el nombre del producto: ";
    cin >> nombre;
    
    cout << "Ingrese el nuevo precio: ";
    cin >> nuevoPrecio;
    
    if(actualizarPrecio(P, cantidad, nombre, nuevoPrecio)) {
        guardarProductos(P, cantidad);
        cout << "\nPrecio actualizado correctamente!\n";
    } else {
        cout << "\nEl producto no existe en el archivo.\n";
    }
    
    return 0;
}
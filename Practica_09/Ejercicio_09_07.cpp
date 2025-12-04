// Materia: Programación I, Paralelo 4
// Autor: Caceres Churqui Cristhian Emanuel
// Fecha creación: 28/11/2025
// Número de ejercicio: 7
#include <iostream>
using namespace std;

struct Plato {
    char nombre[20];
    float precio;
};

struct Pedido {
    char cliente[20];
    int cantidad;
    Plato plato;
    float total;
};

void ingresar(Pedido &P) {
    
    cout << "Nombre del cliente: ";
    cin.getline(P.cliente, 20);

    cout << "Nombre del plato: ";
    cin.getline(P.plato.nombre, 20);

    cout << "Precio del plato: ";
    cin >> P.plato.precio;

    cout << "Cantidad de platos: ";
    cin >> P.cantidad;

    P.total = P.plato.precio * P.cantidad;
}

void mostrar(Pedido P) {
    cout << "\n--- FACTURA ---\n";
    cout << "Cliente: " << P.cliente << endl;
    cout << "Plato: " << P.plato.nombre << " x" << P.cantidad << endl;
    cout << "Total a pagar: " << P.total << " Bs.\n";
}

int main(){
    Pedido P;
    ingresar(P);
    mostrar(P);
    return 0;
}

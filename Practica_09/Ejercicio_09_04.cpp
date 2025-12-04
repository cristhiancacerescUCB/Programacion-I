// Materia: Programación I, Paralelo 4
// Autor: Caceres Churqui Cristhian Emanuel
// Fecha creación: 28/11/2025
// Número de ejercicio: 4
#include <iostream>
using namespace std;

struct Producto {
    char nombre[20];
    float precio;
    int cantidad;
};

void ingresar(Producto &P) {
    cout << "Nombre: ";
    cin.getline(P.nombre, 20);
    cout << "Precio: ";
    cin >> P.precio;
    cout << "Cantidad: ";
    cin >> P.cantidad;
}

float valorTotal(Producto P) {
    return P.precio * P.cantidad;
}

int main() {
    Producto P;
    ingresar(P);

    cout << "\nValor total del inventario: "
         << valorTotal(P) << " Bs." << endl;

    return 0;
}

// Materia: Programación I, Paralelo 4
// Autor: Caceres Churqui Cristhian Emanuel
// Fecha creación: 28/11/2025
// Número de ejercicio: 1

#include <iostream>
using namespace std;

struct Libro {
    char titulo[50];
    char autor[50];
    int anio_publicacion;
    bool disponible;
};

void ingresarDatos(Libro &L) {
    cout << "ingresar datos del libro: "<<endl;
    cout << "Titulo: "<<endl;
    cin.getline(L.titulo,50);
    cout << "Autor: "<<endl;
    cin.getline(L.autor,50);
    cout << "Anio de publicacion: "<<endl;
    cin >> L.anio_publicacion;
    cout << "Disponible (1=si,0=no): "<<endl;
    cin >> L.disponible;
}

void mostrarLibro(Libro L) {
    cout << "\nDATOS DEL LIBRO:\n";
    cout << "Titulo: " << L.titulo << endl;
    cout << "Autor: " << L.autor << endl;
    cout << "Anio: " << L.anio_publicacion << endl;

    if (L.disponible == 1)
        cout << "Disponible: SI\n";
    else
        cout << "Disponible: NO\n";
}

int main() {
    Libro libro1;
    ingresarDatos(libro1);
    cin.ignore(); 
    mostrarLibro(libro1);
    return 0;
}

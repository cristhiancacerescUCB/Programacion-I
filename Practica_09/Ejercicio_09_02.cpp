// Materia: Programación I, Paralelo 4
// Autor: Caceres Churqui Cristhian Emanuel
// Fecha creación: 28/11/2025
// Número de ejercicio: 2
#include <iostream>
using namespace std;

struct Atleta {
    char nombre[50];
    char pais[50];
    int edad;
    int mejor_tiempo;
};

void ingresar(Atleta A[], int n) {
    for(int i=0; i<n; i++){
        cout << "\nATLETA " << i+1 << endl;
        cin.ignore();
        cout << "Nombre: ";
        cin.getline(A[i].nombre, 50);
        cout << "Pais: ";
        cin.getline(A[i].pais, 50);
        cout << "Edad: ";
        cin >> A[i].edad;
        cout << "Mejor tiempo (segundos): ";
        cin >> A[i].mejor_tiempo;
    }
}

int mejorAtleta(Atleta A[], int n) {
    int pos = 0;
    int menor = A[0].mejor_tiempo;

    for(int i=1; i<n; i++){
        if (A[i].mejor_tiempo < menor) {
            menor = A[i].mejor_tiempo;
            pos = i;
        }
    }
    return pos;
}

int main() {
    int n;
    cout << "Cantidad de atletas: ";
    cin >> n;

    Atleta atletas[n];
    ingresar(atletas, n);

    int pos = mejorAtleta(atletas, n);

    cout << "\nAtleta con mejor tiempo: "
         << atletas[pos].nombre << " - "
         << atletas[pos].pais << endl;

    return 0;
}

// Materia: Programación I, Paralelo 4
// Autor: Caceres Churqui Cristhian Emanuel
// Fecha creación: 28/11/2025
// Número de ejercicio: 8
#include <iostream>
using namespace std;

struct Auto {
    char marca[50];
    char modelo[50];
    int anio;
    float precio;
};

void ingresar(Auto A[], int n) {
    for(int i=0; i<n; i++){
        cin.ignore();
        cout << "\nAUTO " << i+1 << endl;
        cout << "Marca: ";
        cin.getline(A[i].marca, 50);

        cout << "Modelo: ";
        cin.getline(A[i].modelo, 50);

        cout << "Anio: ";
        cin >> A[i].anio;

        cout << "Precio: ";
        cin >> A[i].precio;
    }
}

int masCaro(Auto A[], int n) {
    int pos = 0;
    float mayor = A[0].precio;

    for(int i=1; i<n; i++){
        if(A[i].precio > mayor){
            mayor = A[i].precio;
            pos = i;
        }
    }
    return pos;
}

void mostrarAuto(Auto A[], int pos) {
    cout << "\nAUTO MAS CARO:\n";
    cout << A[pos].marca << " - "
         << A[pos].modelo << " - "
         << A[pos].anio << " - "
         << A[pos].precio << " Bs.\n";
}

int main(){
    int n;
    cout << "Cantidad de autos: ";
    cin >> n;
    Auto A[n];
    ingresar(A, n);

    int pos = masCaro(A, n);
    mostrarAuto(A, pos);

    return 0;
}

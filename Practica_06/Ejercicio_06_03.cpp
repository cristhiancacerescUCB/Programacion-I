// Materia: Programación I, Paralelo 1
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 7/10/2024
// Número de ejercicio: 3
// Problema planteado: Seleccione 1 nombre, 1 apellido y una edad al azar y despliegue en pantalla.
// Esto debe realizar N veces.

#include <iostream>
#include <vector>
#include <string>

#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    vector<string> nombres = {"Ana","Luis","Alan","Carla","Carlos","Sofia","Diego","Laura","Jose","Lizbeth"};
    vector<string> apellidos = {"Villca","Rodriguez","Perez","Uscamayta","Caceres","Alavi","Rojas","Mamani","Cruz","Quispe"};
    vector<int> edades = {18,20,25,43,25,50,22,19,17,33};

    int N; cout << "Cuantas combinaciones mostrar? "; cin >> N;
   
    for (int i=0;i<N;i++) 
    {
        int idxN = rand() % nombres.size();
        int idxA = rand() % apellidos.size();
        int idxE = rand() % edades.size();
        cout << "Persona " << i+1 << ": " << nombres[idxN] << " " << apellidos[idxA] << ", " << edades[idxE] << " anios" << endl;
    }
    return 0;
}
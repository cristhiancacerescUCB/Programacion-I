// Materia: Programación I, Paralelo 1
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 7/10/2024
// Número de ejercicio: 4
// Crea un programa que permita al usuario 
// ingresar N números en un vector y luego rota el vector k posiciones a la derecha. 
// Muestra el vector después de la rotación.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

void rotarDerecha(vector<int>& v, int k) 
{
    int n = v.size();
    if (n==0) return;
    k = k % n;
    vector<int> tmp(n);
    for (int i=0;i<n;i++) 
    {
    tmp[(i+k)%n] = v[i];
    }
    v = tmp;
}

int main() 
{
    int N; cout << "N (dimension del vector): "; 
    cin >> N;
    vector<int> v(N);
    
    cout << "Ingrese " << N << " numeros: "<<endl;
    
    for (int i=0;i<N;i++) 
    cin >> v[i];
    int k; 
    cout << "Rotar k posiciones: ";
    cin >> k;
    rotarDerecha(v,k);
    cout << "Nuevo vector: ";
    for (int x: v) cout << x << " ";
    cout << endl;
    return 0;
}

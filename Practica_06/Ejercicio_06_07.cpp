// Materia: Programación I, Paralelo 1
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 7/10/2024
// Número de ejercicio: 7
// Problema planteado: Compresión de datos en una imagen en escala de grises: 
// Dada una imagen en escala de grises representada por un vector de N valores entre 0 y 255 
// (estos valores deben ser generados aleatoriamente), 
// agrupa los valores en segmentos de 10 unidades y muestra cuántos píxeles hay en cada rango.

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int N; cout << "Cantidad de pixeles: "; cin >> N;
    vector<int> conteo(26,0); // 0-9 ... 250-255 (26 bins)
    for (int i=0;i<N;i++) 
    {
        int v = rand() % 256; // 0..255
        int idx = v / 10;
        if (idx >= 25) idx = 25; // last bin 250-255
        conteo[idx]++;
    }
    for (int i=0;i<25;i++) 
    {
        cout << i*10 << "-" << i*10+9 << ": " << conteo[i] << endl;
    }
    cout << "250-255: " << conteo[25] << endl;
    return 0;
}
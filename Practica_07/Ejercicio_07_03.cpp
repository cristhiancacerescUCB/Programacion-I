// Materia: Programación I, Paralelo 3
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 15/10/2024
// Número de ejercicio: 3
// Problema planteado: Determinar zonas seguras en una matriz

#include <iostream>
#include <vector>
using namespace std;

const int FILAS = 3;
const int COLUMNAS = 4;

void mostrarMatriz(char m[FILAS][COLUMNAS]) 
{
    for (int i=0;i<FILAS;i++) 
    {
        for (int j=0;j<COLUMNAS;j++)
            cout << m[i][j] << " ";
        cout << endl;
    }
}

int filasSinMuertos(char m[FILAS][COLUMNAS]) 
{
    int cont = 0;
    for (int i=0;i<FILAS;i++) 
    {
        int hay = 0;
        for (int j=0;j<COLUMNAS;j++)
            if (m[i][j]=='x') hay=1;
        if (hay==0) cont++;
    }
    return cont;
}

int columnasSinMuertos(char m[FILAS][COLUMNAS]) 
{
    int cont = 0;
    for (int j=0;j<COLUMNAS;j++) {
        int hay=0;
        for (int i=0;i<FILAS;i++)
            if (m[i][j]=='x') hay=1;
        if (hay==0) cont++;
    }
    return cont;
}

void coordenadasMuertos(char m[FILAS][COLUMNAS], vector<int> &fil, vector<int> &col) 
{
    for (int i=0;i<FILAS;i++)
        for (int j=0;j<COLUMNAS;j++)
            if (m[i][j]=='x') {
                fil.push_back(i);
                col.push_back(j);
            }
}

int main() 
{
    char mapa[FILAS][COLUMNAS] = 
    {
        {'x','o','x','o'},
        {'o','o','o','o'},
        {'o','o','x','o'}
    };

    vector<int> filaMuertos, colMuertos;

    cout << "Mapa del complejo: "<<endl;
    mostrarMatriz(mapa);

    cout << "Filas sin muertos: " << filasSinMuertos(mapa) << endl;
    cout << "Columnas sin muertos: " << columnasSinMuertos(mapa) << endl;

    coordenadasMuertos(mapa, filaMuertos, colMuertos);
    cout << "Coordenadas de los muertos vivientes: "<<endl;
    for (int k=0;k<filaMuertos.size();k++)
        cout << "(" << filaMuertos[k] << "," << colMuertos[k] << ")"<<endl;

    cout << "Cantidad total de muertos: " << filaMuertos.size() << endl;

    // Inciso e)
    int enPrimeraCol = 0;
    for (int i=0;i<filaMuertos.size();i++)
        if (colMuertos[i]==0) enPrimeraCol++;

    if (enPrimeraCol >= 2)
        cout << "No es posible entrar al complejo"<<endl;
    else
        cout << "Es posible entrar al complejo"<<endl;

    return 0;
}

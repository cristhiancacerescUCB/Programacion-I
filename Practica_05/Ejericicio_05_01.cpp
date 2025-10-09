// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 29/09/2025
// Número de ejercicio: 1
// Problema planteado: Escriba un programa con 6 funciones utilizando vectores para lo siguiente:

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void listaVoltajes() 
{
    double Voltajes[100];
    for (int i = 0; i < 100; i++)
        Voltajes[i] = 20 + (rand() % 201); 
    cout << "Lista de voltajes: \n";
    for (int i = 0; i < 100; i++)
        cout << Voltajes[i] << " ";
    cout << endl;
}

void listaTemperaturas() 
{
    double Temperaturas[50];
    for (int i = 0; i < 50; i++)
        Temperaturas[i] = (rand() % 101);
    cout << "Lista de temperaturas: \n";
    for (int i = 0; i < 50; i++)
        cout << Temperaturas[i] << " ";
    cout << endl;
}

void listaCaracteres() 
{
    char Caracteres[30];
    for (int i = 0; i < 30; i++)
        Caracteres[i] = 33 + rand() % 94;
    cout << "Lista de caracteres: \n";
    for (int i = 0; i < 30; i++)
        cout << Caracteres[i] << " ";
    cout << endl;
}

void listaAnios() 
{
    int Anios[100];
    for (int i = 0; i < 100; i++)
        Anios[i] = 1990 + rand() % 36;
    cout << "Lista de anios: \n";
    for (int i = 0; i < 100; i++)
        cout << Anios[i] << " ";
    cout << endl;
}

void listaVelocidades() 
{
    double Velocidades[32];
    for (int i = 0; i < 32; i++)
        Velocidades[i] = 10 + rand() % 291;
    cout << "Lista de velocidades: \n";
    for (int i = 0; i < 32; i++)
        cout << Velocidades[i] << " ";
    cout << endl;
}

void listaDistancias() 
{
    double Distancias[1000];
    for (int i = 0; i < 1000; i++)
        Distancias[i] = 1 + rand() % 1000;
    cout << "Lista de distancias: \n";
    for (int i = 0; i < 1000; i++)
        cout << Distancias[i] << " ";
    cout << endl;
}

int main() 
{
    srand(time(0));
    
    listaVoltajes();
    listaTemperaturas();
    listaCaracteres();
    listaAnios();
    listaVelocidades();
    listaDistancias();

    return 0;
}
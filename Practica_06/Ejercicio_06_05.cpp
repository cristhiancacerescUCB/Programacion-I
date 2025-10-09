// Materia: Programación I, Paralelo 1
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 7/10/2024
// Número de ejercicio: 5
// Intersección de dos listas de clientes: dos empresas tienen listas de clientes
// y quieren saber cuántos clientes tienen en común. 
// Escribe un programa que compare dos vectores de nombres y muestre los clientes repetidos.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> interseccion(const vector<string>& a, const vector<string>& b) 
{
    vector<string> comunes;
    for (const string& s : a) {
        for (const string& t : b) 
        {
            if (s == t) 
            {
                bool ya = false;
                for (const string& u : comunes) if (u==s) { ya = true; break; }
                if (!ya) comunes.push_back(s);
            }
        }
    }
    return comunes;
}

int main() 
{
    int n1,n2;
    cout << "Tamanio lista A: "; cin >> n1;
    vector<string> A(n1);
    for (int i=0;i<n1;i++)
    {
        cout << "Cliente A["<<i+1<<"]: "; cin >> A[i];
    }
    cout << "Tamanio lista B: "; cin >> n2;
    vector<string> B(n2);
    for (int i=0;i<n2;i++)
    {
        cout << "Cliente B["<<i+1<<"]: "; cin >> B[i];
    }

    vector<string> c = interseccion(A,B);
    cout << "Clientes en comun: "<<endl;
    for (auto &s : c) cout << s << endl;
    return 0;
}
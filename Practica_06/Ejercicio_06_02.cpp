// Materia: Programación I, Paralelo 1
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 7/10/2024
// Número de ejercicio: 2
// Problema planteado: Un arreglo constante contiene la producción en toneladas métricas de 6 minerales,
// y otro contiene los nombres de estos minerales, para obtener:
// -Buscar por nombre de mineral y desplegar la producción
// -Ordenar del mayor al menor (producción) y mostrar:

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void buscarMineral(const vector<string>& nombres, const vector<double>& prod, const string& buscar) 
{
    for (size_t i=0;i<nombres.size();++i)
        if (nombres[i]==buscar) 
        {
            cout << nombres[i] << " -> " << prod[i] << " TM\n";
            return;
        }
    cout << "Mineral no encontrado" << endl;
}

int main() 
{
    vector<string> nombres = {"SN","SB","AU","PT","AG","CU"};
    vector<double> produccion = {998.000, 876.500, 786.670, 636.143, 135.567, 109.412};
    string buscador;
    cout << "Ingrese nombre de mineral a buscar: "; cin >> buscador;
    buscarMineral(nombres, produccion, buscador);

    // ordenar por producción descendente
    
    vector<pair<double,string>> v;
    for (size_t i=0;i<nombres.size();++i) v.push_back({produccion[i], nombres[i]});
    
    sort(v.begin(), v.end(), [](const pair<double,string>& a, const pair<double,string>& b)
    {
        return a.first > b.first;
    });
    cout << "Mineral  Produccion (TM)\n";
    for (auto &p : v) cout << p.second << "  " << p.first << endl;
    return 0;
}
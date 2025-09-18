// Materia: Programación I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Fecha creación: 18/09/2025
// Número de ejercicio: 5

#include <iostream>
using namespace std;

void calcularSalario(double horas, double tarifaHora, double porcentajeBonificacion) 
{
    double jornadaNormal = 8.0;
    double salarioBase = 0.0;
    double montoBonificacion = 0.0;

    if (horas <= jornadaNormal) 
    {
        salarioBase = horas * tarifaHora;
    } 
    else 
    {
        //extra
        double horasExtra = horas - jornadaNormal;
        //salario base
        salarioBase = jornadaNormal * tarifaHora + horasExtra * tarifaHora;
        //bonificacion en porcentaje
        montoBonificacion = horasExtra * tarifaHora * (porcentajeBonificacion / 100.0);
    }

    double salarioTotal = salarioBase + montoBonificacion;
    cout << "Salario (sin bonif): " << salarioBase << " Bs" << endl;
    cout << "Bonificacion (solo horas extra): " << montoBonificacion << " Bs" << endl;
    cout << "Salario total: " << salarioTotal << " Bs" << endl;
}

int main() 
{
    double horas, tarifa, porcentaje;
    cout << "Horas trabajadas: "; 
    cin >> horas;
    cout << "Tarifa por hora (Bs): "; 
    cin >> tarifa;
    
    cout << "Bonificacion (%) sobre horas extra: "; 
    cin >> porcentaje;
    calcularSalario(horas, tarifa, porcentaje);
    return 0;
}

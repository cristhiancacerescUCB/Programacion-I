// Materia: ProgramaciC3n I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: IngenierC-a Multimedia e Interactividad
// Fecha creaciC3n: 28/08/2025
// NC:mero de ejercicio: 9
#include <iostream>
using namespace std;
int main()
{
	int edad;

	cout << "Ingrese su edad: ";
	cin >> edad;

	if(edad <= 12)
		cout << "Usted es un nino";
	else if(edad <= 18)
		cout << "Usted es un adolescente";
	else if(edad < 60)
		cout << "Usted es un mayor de edad";
	else
		cout << "Usted es un adulto mayor";

	return 0;
}
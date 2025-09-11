// Materia: ProgramaciC3n I, Paralelo 4
// Autor: Cristhian Emanuel Caceres Churqui
// Carnet: 8460697 L.P.
// Carrera del estudiante: Ingenieria en Multimedia e Interactividad
// Fecha creaciC3n: 10/09/2025
// numero de ejercicio: 4

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main()
{
	int numero, intento;
	int max = 50, min = 0;

	srand(time(0));
	numero = rand() % 51;

	cout << "Estoy pensando un numero entre 0 y 50" << endl;

	for (int i = 1; i <= 5; i++) {
		cout << "Intento " << i << "\n? ";
		cin >> intento;

		if (intento == numero) {
			cout << "Felicitaciones... Adivinaste el numero" << endl;
			break;
		} else if (intento < numero) {
			cout << "El numero esta entre " << intento << " y " << max << endl;
			min = intento;
		} else {
			cout << "El numero esta entre " << min << " y " << intento << endl;
			max = intento;
		}

		if (i == 5 && intento != numero) {
			cout << "Lo siento, no adivinaste. El numero era: " << numero << endl;
		}
	}

	return 0;
}
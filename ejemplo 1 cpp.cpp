#include <iostream>
using namespace std;

int main() {
// 1. Recibir el nC:mero del usuario
	double numero;
	cin >> numero;

// 2. Voy a sacar el triple de un nC:mero, entonces se cambia el 2 por un 3 y la variable "doble" por "triple"
	double triple = numero * 3;

// 3. Mostrar el resultado
	cout << triple << endl;

	return 0;
}

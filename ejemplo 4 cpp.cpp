#include <iostream>
#include <math.h>
using namespace std;

int main() {
// 1. Recibir el numero del usuario
	int numero;
	cin >> numero;

// 2. Voy a potenciar un numero al cuadrado, para esto pongo el #include <math.h> al inicio
//para tener acceso al comando pow(), y pongo primero la base y luego el expnoniente, en este caso siendo al cuadrado.
	int tercio = pow(numero, 2); 

// 3. Mostrar el resultado
	cout << tercio << endl;

	return 0;
}

#include <iostream>
using namespace std;

int factorial(int &n) {
	int facto = 1;

	for (int i = 1; i <= n; i++) {
		facto = facto * i;
	}

	return facto;
}

void exponencial(double potencia, double &a, double &k) {
	potencia = 1;
	int n = 0;
	int fact = 1;
	double arriba;
	double abajo;
	double division;

	potencia = 0;

	for (n; n <= k; n++) {
		arriba = pow(a, n);
		abajo = fact * n;

		division = pow(a, n) / factorial(n);
		potencia = potencia + division;
	}

	cout << "El valor de e " << " elevado a la " << a << " es " << potencia << endl;
}

void dibuja(int &n) {
	int i;
	int j;
	int k = 1;

	for (j = 0; j < n; ++j) {
		for (i = 0; i < n - j - 1; ++i)
			cout << "  ";
		for (i = 0; i < 2 * j + 1; ++i)
			cout << i + 1 << " ";
		cout << endl;
	}

	for (j = n - 2; j >= 0; --j) {
		for (i = 0; i < n - j - 1; ++i)
			cout << "  ";
		for (i = 0; i < 2 * j + 1; ++i)
			cout << i + 1 << " ";
		cout << endl;
	}
}

int main() {
	int opcion;
	int facto, i, n;
	double a, potencia, k;

	do {
		cout << "MENU PRINCIPAL" << endl;
		cout << "1) Determinar factorial de un numero" << endl;
		cout << "2) Calcular el valor de pow(e,a)" << endl;
		cout << "3) Imprime rombo" << endl;
		cout << "4) Fin" << endl;
		cout << "Ingrese una opcion: ";
		cin >> opcion;

		switch (opcion) {
		case 1: do {
			cout << "Ingrese N: ";
			cin >> n;
		} while (n < 0);
		factorial(n);
		cout << "El factorial del numero " << n << " es " << facto << endl;
			cout << "Espere un momento..." << endl;
			_sleep(1000);

			system("cls");
			break;
		case 2:	cout << "Ingrese A: ";
			cin >> a;
			do {
				cout << "Ingrese K: ";
				cin >> k;
			} while (k > 20);
			exponencial(potencia, a, k);
			cout << "Espere un momento..." << endl;
			_sleep(1000);

			system("cls");
			break;
		case 3: do {
			cout << "Ingrese N: ";
			cin >> n;
		} while (n >= 11);
			dibuja(n);
			cout << "Espere un momento..." << endl;
			_sleep(1000);

			system("cls");
			break;
		case 4:
			break;
		default: cout << "ERROR." << endl;
		}
		
	} while (opcion != 4);

	system("pause");
	return 0;
}
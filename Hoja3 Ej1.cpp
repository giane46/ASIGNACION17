#include <iostream>
#include <math.h>
using namespace std;

int factorial(int n) {
	int facto = 1;
	for (int i = 1; i <= n; i++)
	{
		facto *= i;
	}
	return facto;
}
void senoX(int &n, double&x, double&senx) {
	for (int i = 0; i < n; i++)
	{
		senx += (pow(-1, i))*((pow(x, 2 * i + 1)) / factorial(2 * i + 1));
	}
	cout << "El seno de " << x << " es " << senx << endl;
}

void digit(int n, int num) {
	int a = num / pow(10, n);
	a = a % 10;

	if (a == 0) {
		a = -1;
	}
	cout << "El n-esimo dígito del numero " << num << " es " << a << endl;
}

int main() {
	int opcion;
	int facto, n;
	double x, senx;
	int num, a;

	do {
		cout << "MENU DE OPCIONES" << endl;
		cout << "1. Calcular el seno" << endl;
		cout << "2. Hallar el enesimo digito" << endl;
		cout << "3. Fin" << endl;
		cin >> opcion;

		switch (opcion) {
		case 1:
			do {
				cout << "Ingrese n: ";
				cin >> n;
			} while (n < 1);
			do {
				cout << "Ingrese x: ";
				cin >> x;
			} while (x <= 0);
			senoX(n, x, senx);
			cout << "Espere un momento..." << endl;
			_sleep(1000);
			system("cls");
			break;
		case 2:
			do {
				cout << "Ingrese el valor de N: ";
				cin >> n;
			} while (n < 0);
			do {
				cout << "Ingrese un numero: ";
				cin >> num;
			} while (num < 0);
			digit(n, num);
			cout << "Espere un momento..." << endl;
			_sleep(1000);
			system("cls");
			break;
		case 3: break;
		default: cout << "ERROR." << endl;
			break;
		}
	} while (opcion != 3);

	system("pause");
	return 0;
}
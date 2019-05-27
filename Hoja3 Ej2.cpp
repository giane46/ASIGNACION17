#include <iostream>
#include <time.h>
using namespace std;

void generarNumeros(int &n1, int &n2, int &n3, int &n4) {
	srand(time(NULL));
	n1 = 1 + (rand() % 40);
	n2 = 1 + (rand() % 40);
	n3 = 1 + (rand() % 40);
	n4 = 1 + (rand() % 40);
}

void hallarMayor() {
	int n1, n2, n3, n4;
	generarNumeros(n1, n2, n3, n4);

	if (n1 > n2 && n1 > n3 && n1 > n4) {
		cout << "El numero mayor es " << n1 << endl;
	}
	if (n2 > n1 && n2 > n3 && n2 > n4) {
		cout << "El numero mayor es " << n2 << endl;
	}
	if (n3 > n1 && n3 > n2 && n3 > n4) {
		cout << "El numero mayor es " << n3 << endl;
	}
	if (n4 > n1 && n4 > n2 && n4 > n3) {
		cout << "El numero mayor es " << n4 << endl;
	}
}

void hallarMenor() {
	int n1, n2, n3, n4;
	generarNumeros(n1, n2, n3, n4);

	if (n1 < n2 && n1 < n3 && n1 < n4) {
		cout << "El numero menor es " << n1 << endl;
	}
	if (n2 < n1 && n2 < n3 && n2 < n4) {
		cout << "El numero menor es " << n2 << endl;
	}
	if (n3 < n1 && n3 < n2 && n3 < n4) {
		cout << "El numero menor es " << n3 << endl;
	}
	if (n4 < n1 && n4 < n2 && n4 < n3) {
		cout << "El numero menor es " << n4 << endl;
	}
}

void hallarAnteriorMayor() {
	int n1, n2, n3, n4;
	generarNumeros(n1, n2, n3, n4);

	if ((n2 > n1 && n1 > n3 && n1 > n4) || (n3 > n1 && n1 > n2 && n1 > n4) || (n4 > n1 && n1 > n2 && n1 > n3)) {
		cout << "El segundo numero mayor es " << n1 << endl;
	}

	if ((n3 > n2 && n2 > n1 && n2 > n4) || (n1 > n2 && n2 > n3 && n2 > n4) || n4 > n2 && n2 > n1 && n2 > n3) {
		cout << "El segundo numero mayor es " << n2 << endl;
	}
	
	if ((n1 > n3 && n3 > n2 && n3 > n4) || (n2 > n3 && n3 > n1 && n3 > n4) || (n4 > n3 && n3 > n1 && n3 > n2)) {
		cout << "El segundo numero mayor es " << n3 << endl;
	}

	if ((n1 > n4 && n4 > n2 && n4 > n3) || (n2 > n4 && n4 > n1 && n4 > n3) || (n3 > n4 && n4 > n1 && n4 > n2)) {
		cout << "El segundo numero mayor es " << n4 << endl;
	}
}

void graficar(int n1, int n2, int n3, int n4) {
	int n = 1;
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 41; j++) {
			if (i == 2 && j >= 41 - n1 - 1) {
				if (i == 2 && j == 41 - n1 - 1) {
					cout << n1;
				}
				else {
					cout << "*";
					n++;
				}
			}
			else {
				cout << " ";
			}
			if (i == 3 && j >= 41 - n2 - 1) {
				if (i == 3 && j == 41 - n2 - 1) {
					cout << n2;
				}
				else {
					cout << "*";
					n++;
				}
			}
			else {
				cout << " ";
			}
			if (i == 4 && j >= 41 - n3 - 1) {
				if (i == 4 && j == 41 - n3 - 1) {
					cout << n3;
				}
				else {
					cout << "*";
					n++;
				}
			}
			else {
				cout << " ";
			}
			if (i == 5 && j >= 41 - n4 - 1) {
				if (i == 5 && j == 41 - n4 - 1) {
					cout << n4;
				}
				else {
					cout << "*";
					n++;
				}
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
}

int main() {
	int n1, n2, n3, n4;
	generarNumeros(n1, n2, n3, n4);
	cout << "El primer numero es: " << n1 << endl;
	cout << "El segundo numero es: " << n2 << endl;
	cout << "El tercer numero es: " << n3 << endl;
	cout << "El cuarto numero es: " << n4 << endl << endl;

	hallarMayor();
	hallarMenor();
	hallarAnteriorMayor();

	graficar(n1, n2, n3, n4);

	system("pause");
	return 0;
}
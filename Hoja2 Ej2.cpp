#include <iostream>
#include <conio.h>
using namespace std;
using namespace System;

void opcion1(int *ptrRptaReal, int *ptrRptaImag) {
	int rptaReal, rptaImag;
	int real1, imag1;
	int real2, imag2;
	cout << "Numero 1" << endl;
	cout << "Parte real: ";
	cin >> real1;
	cout << "Parte imaginaria: ";
	cin >> imag1;
	cout << endl << "Numero 2" << endl;
	cout << "Parte real: ";
	cin >> real2;
	cout << "Parte imaginaria: ";
	cin >> imag2;

	rptaReal = real1 + real2;
	rptaImag = imag1 + imag2;

	ptrRptaReal = &rptaReal;
	ptrRptaReal = &rptaImag;

	cout << "(" << real1 << "+" << imag1 << "i)" << "+" << "(" << real2 << "+" << imag2 << "i) = " << "(" << rptaReal << "+" << rptaImag << "i)" << endl;

}

void opcion2(int *ptrRptaReal, int *ptrRptaImag) {
	int rptaReal, rptaImag;
	int real1, imag1;
	int real2, imag2;
	cout << "Numero 1" << endl;
	cout << "Parte real: ";
	cin >> real1;
	cout << "Parte imaginaria: ";
	cin >> imag1;
	cout << endl << "Numero 2" << endl;
	cout << "Parte real: ";
	cin >> real2;
	cout << "Parte imaginaria: ";
	cin >> imag2;

	rptaReal = real1 - real2;
	rptaImag = imag1 - imag2;

	ptrRptaReal = &rptaReal;
	ptrRptaReal = &rptaImag;

	cout << "(" << real1 << "+" << imag1 << "i)" << "-" << "(" << real2 << "+" << imag2 << "i) = " << "(" << rptaReal << "+(" << rptaImag << "i)" << endl;

}

int main() {
	char opcion;
	int real1, imag1;
	int real2, imag2;
	int *ptrRptaReal, *ptrRptaImag;
	ptrRptaReal = new int;
	ptrRptaImag = new int;

	do {
		cout << "MENU" << endl;
		cout << "=============================" << endl;
		cout << "A. Sumar 2 Numeros Complejos." << endl;
		cout << "B.Restar 2 Nmeros Complejos." << endl;
		cout << "X.Salir del Programa" << endl;
		cin >> opcion;

		if (opcion == 'X') {
			break;
		}

		switch (opcion) {
		case 'A': opcion1(ptrRptaReal, ptrRptaImag);
			break;
		case 'B': opcion2(ptrRptaReal, ptrRptaImag);
			break;
		case 'X': break;
		default: cout << "ERROR." << endl;
			break;
		}
		_sleep(10000);
		system("cls");
	} while (opcion != 'X');


	system("pause");
	return 0;
}
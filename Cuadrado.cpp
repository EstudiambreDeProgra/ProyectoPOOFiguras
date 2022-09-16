#include<iostream>
#include"Cuadrado.h"		//Librerias que se necesitan

using namespace std;

Cuadrado::Cuadrado(int _lado1, int _relleno) {		//Poder usar los protected de la clase padre

	lado1 = _lado1;
	relleno = _relleno;

}

void Cuadrado::hacer() {		//Constructor del cuadrado

	cout << "		Indica un lado del cuadrado: ";
	cin >> lado1;
	cout << "\n			1)Vacio\n";
	cout << "			2)Relleno\n";
	cin >> relleno;

	if (relleno == 1) {										//Formula de cuadrado sin relleno
		for (int i = 0; i < lado1; i++) {
			for (int j = 0; j < lado1; j++) {
				if (i == 0 || i == lado1 - 1 || j == 0 || j == lado1 - 1)
					cout << " * ";
				else
					cout << "   ";
			}
			cout << "\n";
		}
	}

	else if (relleno == 2) {								//Formula de cuadrado con relleno
		for (int x = 0; x < lado1; x++) {
			for (int y = 0; y < lado1; y++) {
				cout << " * ";
			}
			cout << "\n";
		}
	}
}

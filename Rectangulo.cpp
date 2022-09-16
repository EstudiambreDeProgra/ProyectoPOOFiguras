#include "Rectangulo.h"
#include<iostream>

using namespace std;										//usar cout y cin sin tanto código

Rectangulo::Rectangulo(int _lado1, int _lado2) {			//Poder usar variables de protected

	lado1 = _lado1;
	lado2 = _lado2;

}

void Rectangulo::hacer() {									//Constructor

	cout << "	 Indica la altura del Rectangulo: ";
	cin >> lado1;
	cout << "\n		Indica lo ancho del Rectangulo: ";
	cin >> lado2;

	for (int i = 1; i <= lado1; i++) {				//Formula de rectangulo lleno
		for (int j = 1; j < lado2; j++) {
			cout << "*";
		}
		cout << "\n";
	}

}

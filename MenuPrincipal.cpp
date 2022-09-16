#include "MenuPrincipal.h"
#include"Shape.h"
#include"Cuadrado.h"
#include"Rectangulo.h"				//Librerias que se necesitan
#include"HacerFigura.h"
#include<iostream>
using namespace std;


void MenuPrincipal::hacerMenu() {		//constructor del menu

	cout << "\n   		Bienvenido al menu principal de Figuras\n" << endl;
	cout << "		Selecciona la figura:  ";
	cout << "\n		1)Cuadrado\n";
	cout << "		2)Rectangulo\n			";
	cin >> opcion;

	Shape*sh = nullptr;						//Para que no se incialice el puntero antes de pedirlo
	if (opcion == 1) {
		sh = new Cuadrado(lado1, relleno);
	}
	else if (opcion == 2) {
		sh = new Rectangulo(lado2, lado2);
	}
	HacerFigura hacer;
	hacer.dibujarShape(sh);

}

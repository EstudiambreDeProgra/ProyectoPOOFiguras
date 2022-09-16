#pragma once
#include "Shape.h"		//Libreria necesaria


class Cuadrado : public Shape{		//Herencia

	protected:
		int lado1, relleno;
	public:
		Cuadrado(int _lado1, int _relleno);
		void hacer();

};


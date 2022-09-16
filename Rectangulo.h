#pragma once
#include "Shape.h"						//Libreria necesaria


class Rectangulo : public Shape{		//Herencia

	protected:
		int lado1, lado2;

	public:
		Rectangulo(int _lado1, int _lado2);
		void hacer();

};


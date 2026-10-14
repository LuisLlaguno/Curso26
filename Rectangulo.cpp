/*
 * Rectangulo.cpp
 *
 *  Created on: 14 oct 2026
 *      Author: luisl
 */


#include "Rectangulo.h"

Rectangulo::Rectangulo(float l, float a) {
	alto=a;
	lado=l;
}
float Rectangulo::area() {
    return lado * alto;
}
float Rectangulo::perimetro() {
	return 2 *(lado + alto);
}

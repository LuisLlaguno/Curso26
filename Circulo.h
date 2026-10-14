/*
 * Circulo.h
 *
 *  Created on: 14 oct 2026
 *      Author: luisl
 */

#ifndef CIRCULO_H_
#define CIRCULO_H_
#include <cmath>

template <class T>
class Circulo {
protected:
	T radio;
public:
	Circulo(T r);
	T area();
	T perimetro();
	virtual ~Circulo();
};

#endif /* CIRCULO_H_ */

/*
 * Rectangulo.h
 *
 *  Created on: 14 oct 2026
 *      Author: luisl
 */

#ifndef RECTANGULO_H_
#define RECTANGULO_H_

#include "Sharpe.h"

class Rectangulo : public Sharpe {
private:
	float lado;
	float alto;
public:
	Rectangulo(float l, float a);

	float area();
	float perimetro();
};



#endif /* RECTANGULO_H_ */

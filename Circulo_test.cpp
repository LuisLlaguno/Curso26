/*
 * Circulo_test.cpp
 *
 *  Created on: 14 oct 2026
 *      Author: luisl
 */


#include "Circulo.h"
#include <gtest/gtest.h>
#include <iostream>
#include <cmath>

TEST(Circulo, test1){
	Circulo<double> circ(2.0);

	ASSERT_EQ (circ.area(),M_PI*2.0*2.0);
	ASSERT_EQ (circ.perimetro(), 2* M_PI*2.0);

}

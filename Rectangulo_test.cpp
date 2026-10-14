/*
 * Rectangulo_test.cpp
 *
 *  Created on: 14 oct 2026
 *      Author: luisl
 */

#include "Rectangulo.h"
#include "Sharpe.h"
#include <gtest/gtest.h>
#include <iostream>

TEST(Rectangulo,test1) {

	Rectangulo rect(5.0, 2.0);

	ASSERT_EQ(rect.area(), 10.0);
	ASSERT_EQ(rect.perimetro(), 14.0);
}

TEST(RectanguloTest, test2) {
	Rectangulo rect(5.0, 2.0);
	Sharpe* psharpe = &rect;

	ASSERT_EQ(psharpe->area(), 10.0);
	ASSERT_EQ(psharpe->perimetro(), 14.0);
}

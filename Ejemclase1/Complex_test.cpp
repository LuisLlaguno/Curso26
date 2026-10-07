/*
 * Complex_test.cpp
 *
 *  Created on: 5 oct 2026
 *      Author: sanchezep
 */

#include "Complex.h"
#include <iostream>
#include <gtest/gtest.h>

// TEST para la clase Complex
TEST(ComplexTest, Constructor_int) {
	Complex<int> c1;
	ASSERT_EQ(c1.getReal(), 0);
	ASSERT_EQ(c1.getImag(), 0);

	Complex<int> c2(3, 4);
	ASSERT_EQ(c2.getReal(), 3);
	ASSERT_EQ(c2.getImag(), 4);

	Complex<int> c3(c2);
	ASSERT_EQ(c3.getReal(), 3);
	ASSERT_EQ(c3.getImag(), 4);

	c3.setReal(5);
	c3.setImag(6);
	ASSERT_EQ(c3.getReal(), 5);
	ASSERT_EQ(c3.getImag(), 6);

	std::cout << "Debe imprimir c3: (5 + 6i)" << std::endl;
	c3.print();
}

// TEST operadores int
TEST(ComplexTest, Operators_int) {
	Complex<int> c1(1, 2);
	Complex<int> c2(3, 4);

	Complex<int> c3 = c1 + c2;
	ASSERT_EQ(c3.getReal(), 4);
	ASSERT_EQ(c3.getImag(), 6);

	Complex<int> c4 = c1 - c2;
	ASSERT_EQ(c4.getReal(), -2);
	ASSERT_EQ(c4.getImag(), -2);

	Complex<int> c5 = c1 * c2;
	ASSERT_EQ(c5.getReal(), -5);
	ASSERT_EQ(c5.getImag(), 10);

	ASSERT_TRUE(c1 != c2);
	c1 = c2;
	ASSERT_TRUE(c1 == c2);
}

// Test para la clase Complex con float
TEST(ComplexTest, Constructor_float) {
	Complex<float> c1;
	ASSERT_FLOAT_EQ(c1.getReal(), 0.0f);
	ASSERT_FLOAT_EQ(c1.getImag(), 0.0f);

	Complex<float> c2(3.5f, 4.5f);
	ASSERT_FLOAT_EQ(c2.getReal(), 3.5f);
	ASSERT_FLOAT_EQ(c2.getImag(), 4.5f);

	Complex<float> c3(c2);
	ASSERT_FLOAT_EQ(c3.getReal(), 3.5f);
	ASSERT_FLOAT_EQ(c3.getImag(), 4.5f);

	c3.setReal(5.5f);
	c3.setImag(6.5f);
	ASSERT_FLOAT_EQ(c3.getReal(), 5.5f);
	ASSERT_FLOAT_EQ(c3.getImag(), 6.5f);

	std::cout << "Debe imprimir c3: (5.5 + 6.5i)" << std::endl;
	c3.print();

	Complex<float> c4 = c2 + c3;
	ASSERT_EQ(c4.getReal(), 9.0f);
	ASSERT_EQ(c4.getImag(), 11.0f);

	c4 = c2-c3;
	ASSERT_EQ(c4.getReal(), (3.5f-5.5f));
	ASSERT_EQ(c4.getImag(), (4.5f-6.5f));

	c4 = c2 * c3;
	ASSERT_EQ(c4.getReal(), ((3.5f*5.5f)-(4.5f*6.5f)));
	ASSERT_EQ(c4.getImag(), ((3.5f*6.5f)+(4.5f*5.5f)));

	ASSERT_EQ(c2.getMagnitude(), 5.700877f);

	ASSERT_TRUE(c1 != c2);
	c1 = c2;
	ASSERT_TRUE(c1 == c2);
}

// TEST de la lista de numeros complejos
TEST(ComplexTest, List) {
	Complex<int> c1(1, 2);
	{
	Complex<int> c2(3, 4);
	Complex<int> c3(5, 6);


	std::cout << "Debe imprimir la lista de 3 numeros complejos: " << std::endl;
	c1.printList();

	c1.removeComplex(&c2);
	std::cout << "Debe imprimir la lista de numeros complejos despues de eliminar c2 (3+4i): " << std::endl;
	c1.printList();
	}
	std::cout << "Debe imprimir solo 1 numero complejo: 1+2i " << std::endl;
	c1.printList();
}



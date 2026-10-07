/*
 * Persona_test.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: luisl
 */

#include "Persona.h"
#include <gtest/gtest.h>

// Test destructor
TEST(Persona, destructor) {
	Persona p1("123456789A", "MiNombre", "Mis Apellidos");
	Persona p2;
	{
		Persona p3("000000000B", "MiNombre 2", "Mis Apellidos 2");
		ASSERT_EQ(p2.nPersonas(), 2);
		ASSERT_TRUE(p2.isOnList("000000000B"));
	}
	ASSERT_EQ(p2.nPersonas(), 1);
	ASSERT_FALSE(p2.isOnList("000000000B"));
}

TEST(Persona, constructor) {
	Persona p1("123456789A", "MiNombre", "Mis Apellidos");
	Persona p2;

	ASSERT_EQ(p2.nPersonas(), 1);
	ASSERT_TRUE(p2.isOnList("123456789A"));
	ASSERT_FALSE(p2.isOnList("000000000B"));
}

TEST(Persona, print) {
	Persona p1("123456789A", "MiNombre", "Mis Apellidos");
	Persona p2;
	Persona p3("000000000B", "MiNombre 2", "Mis Apellidos 2");

	std::cout << " printPersona() de p1 " << std::endl;
	std::cout << p1.printPersona() << std::endl;

	std::cout << " print() global " << std::endl;
	p1.print();
}



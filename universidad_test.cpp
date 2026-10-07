/*
 * universidad_test.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: luisl
 */


#include "Persona.h"
#include "Alumno.h"
#include <gtest/gtest.h>
#include <iostream>

TEST(Persona, prueba1) {
	Persona p1;
	Persona *p2 = new Persona("12345679M", "aula1", "Departamento TEISA");
	ASSERT_TRUE(p2->isIncluded);
	ASSERT_EQ(p1.getNumero(), 1);

	Persona *p3 = new Persona("22222222L", "aula2", "Universidad Cantabria");
	ASSERT_TRUE(p3->isIncluded);
	ASSERT_EQ(p1.getNumero(), 2);

	ASSERT_FALSE(*p2 == *p3);

	delete p2;
	delete p3;
}

TEST(Alumno, stream) {
	Alumno a1("12345679M", "aula1", "Departamento TEISA");

	// Se respeta el nombre exacto de la asignatura de la diapo ("Sistemas Emebidos")
	ASSERT_TRUE(a1.matricula("Sistemas Emebidos"));
	ASSERT_TRUE(a1.matricula("Trabajo fin de Master"));
	ASSERT_EQ(a1.getNumero(), 2);

	ASSERT_FALSE(a1.matricula("Sistemas Emebidos"));
	ASSERT_EQ(a1.getNumero(), 2);

	std::cout << a1 << std::endl;
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}


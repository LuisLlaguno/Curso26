/*
 * Alumno_test.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: luisl
 */

/*
 * Alumno_test.cpp
 */
#include "Alumno.h"
#include <gtest/gtest.h>
#include <iostream>

TEST(Alumno, test_matriculas) {
	// Trabajamos con 3 alumnos del curso 24
	Alumno<24> a1("123456789A", "Nombre 1", "Apellidos 1");
	Alumno<24> a2("222222222B", "Nombre 2", "Apellidos 2");
	Alumno<24> a3("333333333C", "Nombre 3", "Apellidos 3");

	// Creamos un objeto dummy
	Persona personList;

	// Comprobar número de elementos
	ASSERT_EQ(personList.nPersonas(), 3);

	// Verificar que uno está en la lista
	ASSERT_TRUE(personList.isOnList("123456789A"));

	// Matricular a1
	a1.matricula("ASE");
	a1.matricula("Embebidos");
	a1.matricula("SEM");
	a1.matricula("ASE"); // Intento repetido

	// Comprobar el número de asignaturas (El profesor pregunta: "¿Debe ser 4?")
	// No, debe ser 3 porque hemos filtrado la asignatura repetida.
	ASSERT_EQ(a1.courseList.size(), 3);

	// Escribir en pantalla el listado
	std::cout << "--- Listado de asignaturas de a1 ---" << std::endl;
	a1.print();

	// Cuestión a justificar en la memoria
	std::cout << "\n Cuestion a justificar en la memoria" << std::endl;
	Persona *dat;
	dat = &a1;
	dat->print();
}







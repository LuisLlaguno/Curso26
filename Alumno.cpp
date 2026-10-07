/*
 * Alumno.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: luisl
 */


#include "Alumno.h"
#include <iostream>

Alumno::Alumno(std::string DNI, std::string NOMBRE, std::string APELLIDOS)
	: Persona(DNI, NOMBRE, APELLIDOS) {
	std::cout << "Creado nuevo Alumno con DNI " << dni << std::endl;
}

Alumno::~Alumno() {
	// No es necesario iterar aquí, el destructor virtual de Persona se encarga de extraerlo de la lista
}

int Alumno::getNumero() {
	return clases.size();
}

bool Alumno::matricula(std::string clase) {
	// Comprobar si ya está matriculado
	for (const auto& c : clases) {
		if (c == clase) {
			// Se mantienen los mensajes exactos de la diapositiva para no fallar la validación
			std::cout << "ERROR -> Alumno con DNI " << dni << " YA matricualo en " << clase << std::endl;
			return false;
		}
	}

	clases.push_back(clase);
	std::cout << "Alumno con DNI " << dni << " matrticulado en " << clase << std::endl;
	return true;
}

std::ostream& operator<<(std::ostream& os, Alumno& obj) {
	os << "Alumno > Nombre: " << obj.nombre << " " << obj.apellidos << " DNI: " << obj.dni << "\n";
	os << "Matriculado en:\n";
	for (const auto& c : obj.clases) {
		os << c << "\n";
	}
	return os;
}


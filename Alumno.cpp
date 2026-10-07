/*
 * Alumno.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: luisl
 */

#include "Alumno.h"
#include <iostream>

template <int curso>
Alumno<curso>::Alumno(std::string ID, std::string Nombre, std::string Apellidos)
	: Persona(ID, Nombre, Apellidos) {
}

template <int curso>
Alumno<curso>::~Alumno() {
	// TODO Auto-generated destructor stub
}

template <int curso>
bool Alumno<curso>::matricula(std::string asignatura) {
	for(const auto& asig : courseList) {
		if(asig == asignatura) {
			return false; // Ya está matriculado
		}
	}
	courseList.push_back(asignatura);
	return true; // Matriculado con éxito
}

template <int curso>
void Alumno<curso>::print() {
	std::cout << "Listado de asignaturas en curso " << curso << "-" << curso+1 << std::endl;
	std::cout << "Alumno: " << this->ID << ": " << this->apellidos << " " << this->nombre << std::endl;
	for(const auto& asig : courseList) {
		std::cout << "Asignatura: " << asig << std::endl;
	}
}

// Instanciación explícita de la plantilla para el curso 24
template class Alumno<24>;



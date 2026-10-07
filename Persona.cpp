/*
 * Persona.cpp
 *
 *  Created on: 7 oct 2026
 *      Author: luisl
 */

/*
 * Persona.cpp
 *
 *  Created on: 6 oct 2026
 *      Author: luisl
 */

#include "Persona.h"

// Inicialización de la variable estática
std::vector<Persona *> Persona::listaPersonas;

Persona::Persona() {
	dni = "ERROR";
	nombre = "ERROR";
	apellidos = "ERROR";
	isIncluded = false;
	std::cout << "Creado elemento dummy" << std::endl;
}

Persona::Persona(std::string dni_in, std::string nombre_in, std::string apellidos_in) {
	dni = dni_in;
	nombre = nombre_in;
	apellidos = apellidos_in;
	isIncluded = true;
	listaPersonas.push_back(this);
	std::cout << "Creado nuevo elemento de lista con DNI=" << dni << std::endl;
}

Persona::~Persona() {
	if(isIncluded) {
		for (std::vector<Persona *>::iterator it = listaPersonas.begin(); it != listaPersonas.end();) {
			if (*it == this) {
				std::cout << "Extraida de la lista la Persona " << this->dni << std::endl;
				// Nota: Se asigna el retorno de erase a 'it' para evitar violaciones de segmento (undefined behavior)
				it = listaPersonas.erase(it);
			} else {
				++it;
			}
		}
	}
}

int Persona::getNumero() {
	return listaPersonas.size();
}

bool Persona::operator==(const Persona& other) const {
	return this->dni == other.dni;
}

void Persona::print() const {
	std::cout << "ALUMNO: " << nombre << " " << apellidos << " DNI: " << dni << std::endl;
}




/*
 * Persona.h
 *
 *  Created on: 7 oct 2026
 *      Author: luisl
 */

#ifndef PERSONA_H_
#define PERSONA_H_

#include <string>
#include <vector>
#include <iostream>

class Persona {
public:
	std::string dni;
	std::string apellidos;
	std::string nombre;
	bool isIncluded;

	static std::vector<Persona *> listaPersonas;

	Persona();
	Persona(std::string dni, std::string nombre, std::string apellidos);
	virtual ~Persona();

	virtual int getNumero();
	bool operator==(const Persona& other) const;

	void print() const;
};

#endif /* PERSONA_H_ */

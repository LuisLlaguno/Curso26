/*
 * Persona.h
 *
 *  Created on: 7 oct 2026
 *      Author: luisl
 */

#ifndef PERSONA_H_
#define PERSONA_H_

#include <iostream>
#include <string>
#include <vector>

class Persona {
protected:
	std::string nombre;
	std::string apellidos;
	std::string ID;

	static std::vector<Persona *> personList; // Lista de personas

public:
	// Constructor dummy. No inserta nada en personList
	Persona();

	// Inserta persona en personList si no está en la lista
	Persona(std::string ID, std::string Nombre, std::string Apellidos);

	// Destructor
	virtual ~Persona();

	// Retorna true si hay persona con ese identificador en personList
	bool isOnList(std::string identificador);

	// Escribe lista de personas en personList
	virtual void print();

	// Escribe la identificación de la persona --> ID:apellidos,nombre
	std::string printPersona() {
		std::string ret = ID + std::string(":") + apellidos + std::string(",") + nombre;
		return ret;
	}

	// Retorna el número de elementos en la lista de personas
	int nPersonas() { return personList.size(); }
};

#endif /* PERSONA_H_ */

/*
 * Alumno.h
 *
 *  Created on: 7 oct 2026
 *      Author: luisl
 */

#ifndef ALUMNO_H_
#define ALUMNO_H_




/*
 * Alumno.h
 *
 *  Created on: 6 oct 2026
 *      Author: luisl
 */

#include "Persona.h"
#include <vector>
#include <string>

class Alumno: public Persona {
public:
	std::vector<std::string> clases;

	Alumno(std::string DNI, std::string NOMBRE, std::string APELLIDOS);
	virtual ~Alumno();

	virtual int getNumero() override;
	bool matricula(std::string clase);
};

// Sobrecarga del operador << fuera de la clase
std::ostream& operator<<(std::ostream& os, Alumno& obj);

#endif /* ALUMNO_H_ */

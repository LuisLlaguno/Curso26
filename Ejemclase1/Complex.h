/*
 * Complex.h
 *
 *  Created on: 5 oct 2026
 *      Author: sanchezep
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <vector>

template <typename T>
class Complex {
	T real;	// Parte real
	T imag;	// Parte imaginaria
	static std::vector<Complex<T> *> lista;	//Lista de numeros complejos creados

public:
	Complex();
	Complex(T r, T i);
	Complex(const Complex<T>& c);

	// Operadores de sobrecarga
	Complex<T> operator+(const Complex<T>& c);
	Complex<T> operator-(const Complex<T>& c);
	Complex<T> operator*(const Complex<T>& c);
	bool operator==(const Complex<T>& c);
	bool operator!=(const Complex<T>& c);
	Complex<T> operator=(const Complex<T>& c);

	// Metodos de acceso
	T getReal();
	T getImag();
	T getMagnitude();
	T getPhase();

	// Metodos de modificacion
	void setReal(T r);
	void setImag(T i);

	// Metodos de impresion
	void print() const;

	// Lista de numeros complejos
	void addComplex( Complex<T>* c);
	void printList() ;
	void removeComplex( Complex<T>* c);

	// Destructor
	virtual ~Complex();
};



#endif /* COMPLEX_H_ */

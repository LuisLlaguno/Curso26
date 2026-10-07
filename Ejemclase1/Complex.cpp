/*
 * Complex.cpp
 *
 *  Created on: 5 oct 2026
 *      Author: sanchezep
 */

#include "Complex.h"
#include <iostream>
#include <cmath>	// para  sqrt() en getMagnitude()

// Iniciando con 0 los miembros de la clase Complex
template <typename T> Complex<T>::Complex() {
	real = 0;
	imag = 0;
	addComplex(this);	// Agregar el objeto a la lista de numeros complejos
}

// Iniciando con los valores (r+ji)
template <typename T> Complex<T>::Complex(T r, T i) {
	real = r;
	imag = i;
	addComplex(this);	// Agregar el objeto a la lista de numeros complejos
}

// Clonando los valores de otro objeto Complex
template <typename T> Complex<T>::Complex(const Complex<T>& c) {
	real = c.real;
	imag = c.imag;
	addComplex(this);	// Agregar el objeto a la lista de numeros complejos
}

// Destructor de la clase Complex
template <typename T> Complex<T>::~Complex() {
	// extraer de la lista el objeto que se va a destruir
	removeComplex(this);
}

// Operador de suma de dos numeros complejos
template <typename T> Complex<T> Complex<T>::operator+(const Complex<T>& c) {
	return Complex<T>(real + c.real, imag + c.imag);
}

// Operador de resta de dos numeros complejos
template <typename T> Complex<T> Complex<T>::operator-(const Complex<T>& c) {
	return Complex<T>(real - c.real, imag - c.imag);
}

// Operador de multiplicacion de dos numeros complejos
template <typename T> Complex<T> Complex<T>::operator*(const Complex<T>& c) {
	return Complex<T>(real * c.real - imag * c.imag, real * c.imag + imag * c.real);
}

// Operador de igualdad de dos numeros complejos
template <typename T> bool Complex<T>::operator==(const Complex<T>& c) {
	return (real == c.real && imag == c.imag);
}

// Operador de desigualdad de dos numeros complejos
template <typename T> bool Complex<T>::operator!=(const Complex<T>& c) {
	return (real != c.real || imag != c.imag);
}

// Operador de asignacion de dos numeros complejos
template <typename T> Complex<T> Complex<T>::operator=(const Complex<T>& c) {
	if(this != &c) {	// Caso patologico de autoasignacion		real = c.real;		imag = c.imag;	}	return *this;}

// Metodos de acceso: Get real
template <typename T> T  Complex<T>::getReal()  {
	return real;
}

// Get imag
template <typename T> T  Complex<T>::getImag()  {
	return imag;
}

// Get magnitude
template <typename T> T  Complex<T>::getMagnitude()  {
	T result;
	double raiz=sqrt((double)(real * real + imag * imag));	result = (T)raiz;	return result;}

// Metodos de modificacion: Set real
template <typename T> void Complex<T>::setReal(T r) {	real = r;}

// Set imag
template <typename T> void Complex<T>::setImag(T i) {	imag = i;}

// Metodos de impresion: Print complex number
template <typename T> void Complex<T>::print() const {	std::cout << real << " + " << imag << "i" << std::endl;}

// Lista de numeros complejos: Declaracion de la lista de numeros complejos
template <typename T>  std::vector<Complex<T> *> Complex<T>::lista;

// Inserta un numero complejo en la lista
template <typename T> void Complex<T>::addComplex( Complex<T>* c) {
	lista.push_back(c);
}

// Imprime la lista de numeros complejos
template <typename T> void Complex<T>::printList()  {
	std::cout << "Lista de numeros complejos: " << std::endl;
	for (const auto& c : lista) {
		(*c).print();
	}
}

// Elimina un numero complejo de la lista
template <typename T> void Complex<T>::removeComplex( Complex<T>* c) {
	for (auto it = lista.begin(); it != lista.end(); ++it) {
		if (*it == c) {
			lista.erase(it);
			break;
		}
	}
}


// Declara los posibles valores de T para que se pueda usar la clase Complex con esos tipos
template class Complex<int>;
template class Complex<float>;
template class Complex<double>;




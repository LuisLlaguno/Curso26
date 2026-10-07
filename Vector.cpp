/*
 * Vector.cpp
 *
 *  Created on: 28 sept 2026
 *      Author: luisl
 */

#include "Vector.h"
#include <iostream>

Vector::Vector() {
	n=0;
	dat = nullptr;
	std::cout << "Estoy en Vector()" << std::endl;
}

// Constructor con tamaño array
Vector::Vector(int nelem) {
	n=nelem;
	dat=new int[n];
	std::cout << "Estoy en Vector(int nelem)" << std::endl;
}

Vector::~Vector() {
	if(n>0) {
		delete [] dat;
	}
	n=0;
	dat=nullptr;
	std::cout << "Estoy en ~Vector()" << std::endl;
}

//set
bool Vector::set(int pos, int val) {
	if(pos>=0 && pos <n) {
		dat[pos]=val;
		return true;
	}
	std::cout << "Error en método set" << std::endl;
	return false;
}

//set
bool Vector::get(int pos, int &val) {
	if(pos>=0 && pos <n) {
			val=dat[pos];
			return true;
		}
		std::cout << "Error en método get" << std::endl;
		return false;

}

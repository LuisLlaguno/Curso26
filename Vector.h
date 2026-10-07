/*
 * Vector.h
 *
 *  Created on: 28 sept 2026
 *      Author: luisl
 */

#ifndef VECTOR_H_
#define VECTOR_H_

class Vector {

public:
	Vector(); //Array
	Vector(int nelem); // Array nelem
	~Vector();
	bool set(int pos, int val);
	bool get(int pos, int &val);
private:
		int n; // numero de elementos
		int *dat; // array de valores
};


#endif /* VECTOR_H_ */

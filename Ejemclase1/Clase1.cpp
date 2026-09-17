/*
 * Clase1.cpp
 *
 *  Created on: 17 sept 2026
 *      Author: luisl
 */


int suma(int d1, int d2){
	return d1+d2;

}


#include <cstdlib>
#include <iostream>
int main(int narg, char *arg[]) {
	int d1=50;
	int d2=100;
	if(narg > 1) {
		d1=std::atoi(arg[1]);
	}
	if(narg > 2) {
			d1=std::atoi(arg[2]);
	}
	std::cout << "suma" << d1 << "y" << d2 << "=" << suma(d1,d2) << std::endl;

	return 0;
}


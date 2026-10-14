/*
 * Circulo.cpp
 *
 *  Created on: 14 oct 2026
 *      Author: luisl
 */

#include "Circulo.h"
#include <cmath>

template <class T>
Circulo<T>::Circulo(T r) {
    radio = r;
}

template <class T>
T Circulo<T>::area() {
    return M_PI * radio * radio;
}

template <class T>
T Circulo<T>::perimetro() {
    return 2 * M_PI * radio;
}

template class Circulo<double>;

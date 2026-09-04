#include "punto.h"
#include <iostream>

Punto::Punto() : x(0), y(0) {
    std::cout << "Punto()\n";
}

Punto::Punto(int a) : x(a), y(a) {
    std::cout << "Punto(" << a << ")\n";
}

Punto::Punto(int a, int b) : x(a), y(b) {
    std::cout << "Punto(" << a << "," << b << ")\n";
}
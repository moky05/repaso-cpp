#include <iostream>
#include <string>
#include "arreglo.hpp"

int main() {
    Arreglo<double> a(2);
    a[0] = 1.5;
    a[1] = 2.5;

    Arreglo<double> b = a;
    b[0] = 9.5;

    std::cout << a[0] << " " << b[0] << '\n';

    Arreglo<std::string> nombres(2);
    nombres[0] = "Ana";
    nombres[1] = "Luis";

    Arreglo<std::string> copia = nombres;
    copia[0] = "Maria";

    std::cout << nombres[0] << " " << copia[0] << '\n';
}

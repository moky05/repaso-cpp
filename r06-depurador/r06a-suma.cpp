#include <iostream>

int suma(const int v[], int n) {
    int s = 0;
    for (int i = 0; i <= n; i++)
        s += v[i];
    return s;
}

int main() {
    int datos[5] = {1, 2, 3, 4, 5};
    std::cout << "Suma: " << suma(datos, 5) << '\n';
}
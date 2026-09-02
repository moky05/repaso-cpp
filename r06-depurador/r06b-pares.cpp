#include <iostream>

int pares(const int v[], int n) {
    int c = 0;
    for (int i = 0; i < n; i++)
        if (v[i] % 2 != 0) c++;
    return c;
}

int main() {
    int datos[5] = {1, 2, 3, 4, 5};
    std::cout << "Pares: " << pares(datos, 5) << '\n';
}
#include <iostream>

int maximo(const int v[], int n) {
    int mejor;
    for (int i = 0; i < n; i++)
        if (v[i] > mejor)
            mejor = v[i];
    return mejor;
}

int main() {
    int datos[5] = {1, 2, 3, 4, 5};
    std::cout << "Maximo: " << maximo(datos, 5) << '\n';
}
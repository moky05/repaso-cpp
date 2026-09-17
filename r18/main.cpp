#include <iostream>
#include <vector>

void medir(bool reservar) {
    std::vector<int> v;

    if (reservar)
        v.reserve(1000);

    std::size_t cap = v.capacity();
    int reasignaciones = 0;
    int copiados = 0;

    std::cout << "size 0 -> capacity " << cap << '\n';

    for (int i = 0; i < 1000; ++i) {
        std::size_t anteriores = v.size();
        v.push_back(i);

        if (v.capacity() != cap) {
            cap = v.capacity();
            ++reasignaciones;
            copiados += anteriores;

            std::cout << "size " << v.size()
                      << " -> capacity " << cap << '\n';
        }
    }

    std::cout << "Reasignaciones: " << reasignaciones << '\n';
    std::cout << "Elementos copiados: " << copiados << "\n\n";
}

int main() {
    std::cout << "Sin reserve:\n";
    medir(false);

    std::cout << "Con reserve:\n";
    medir(true);
}
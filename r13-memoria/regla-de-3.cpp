#include <iostream>

class Arreglo {
private:
    int* datos;
    int n;

public:
    Arreglo(int tam) : n(tam) {
        datos = new int[n];
        for (int i = 0; i < n; i++) datos[i] = 0;
        std::cout << "[+] Constructor: datos apunta a " << datos << "\n";
    }

    ~Arreglo() {
        std::cout << "[-] Destructor: liberando " << datos << "\n";
        delete[] datos;
    }

    void set(int i, int valor) {
        if (i >= 0 && i < n) datos[i] = valor;
    }

    int get(int i) const {
        return (i >= 0 && i < n) ? datos[i] : -1;
    }

    int tam() const { return n; }
};

int main() {
    Arreglo a(5);
    a.set(0, 42);

    std::cout << "\n--- Copia por default (bitwise) ---\n";
    Arreglo b = a;   // <-- constructor de copia generado por el compilador
                     //     copia el PUNTERO, no el arreglo

    std::cout << "a.get(0) = " << a.get(0) << "\n";
    std::cout << "b.get(0) = " << b.get(0) << "\n";

    std::cout << "\n--- Fin de main, se destruyen b y luego a ---\n";
    return 0;
} // aqui se destruye b (libera datos), luego a (intenta liberar el MISMO puntero)
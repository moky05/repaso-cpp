#include <iostream>

class Arreglo {
private:
    int* datos;
    int n;

public:
    // Constructor
    Arreglo(int tam) : n(tam) {
        datos = new int[n];
        for (int i = 0; i < n; i++) datos[i] = 0;
        std::cout << datos << "\n";
    }

  
    Arreglo(const Arreglo& otro) : datos(new int[otro.n]), n(otro.n) {
        for (int i = 0; i < n; ++i) datos[i] = otro.datos[i];
        std::cout << "copia: nueva memoria en " << datos
                  << " (copiado de " << otro.datos << ")\n";
    }


    Arreglo& operator=(const Arreglo& otro) {
        std::cout << "operator=: liberando " << datos
                   << ", reservando copia de " << otro.datos << "\n";
        if (this == &otro) return *this;
        delete[] datos;
        n = otro.n;
        datos = new int[n];
        for (int i = 0; i < n; ++i) datos[i] = otro.datos[i];
        return *this;
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

    std::cout << "\n--- Copia profunda ---\n";
    Arreglo b = a;   

    std::cout << "\nb.set(0, 99)\n";
    b.set(0, 99);

    std::cout << "\na.get(0) = " << a.get(0) << "  (debe seguir siendo 42)\n";
    std::cout << "b.get(0) = " << b.get(0) << "  (debe ser 99)\n";

    std::cout << "\n--- Probando operator= ---\n";
    Arreglo c(3);
    c = a;   
    c.set(0, -1);
    std::cout << "a.get(0) = " << a.get(0) << "  (sigue en 42)\n";
    std::cout << "c.get(0) = " << c.get(0) << "  (-1)\n";

    std::cout << "\n--- Fin de main ---\n";
    return 0;
}
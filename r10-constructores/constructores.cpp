#include <iostream>
#include <string>
using namespace std;

class Sesion {
public:
    string nombre;

    // Constructor por defecto (sin argumentos)
    Sesion() : nombre("sin_nombre") {
        cout << "Constructor: " << nombre << '\n';
    }

    // Constructor con nombre
    Sesion(string n) : nombre(n) {
        cout << "Constructor: " << nombre << '\n';
    }

    // Constructor con nombre + numero extra
    Sesion(string n, int extra) : nombre(n) {
        cout << "Constructor: " << nombre  << extra <<"\n";
    }

    ~Sesion() {
        cout << "Destructor: " << nombre << '\n';
    }
};

Sesion global("global");  // constructor y destructor imprimen

int main() {
    Sesion a("a");
    { Sesion b("b"); Sesion c("c", 2); }
    std::cout << "--- medio ---\n";
    Sesion d;
}

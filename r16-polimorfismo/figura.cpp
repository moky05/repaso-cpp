#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Figura {
public:
    virtual double area() const = 0;
    virtual string nombre() const = 0;
    virtual ~Figura() {}
};

class Circulo : public Figura {
    double radio;
public:
    Circulo(double r) : radio(r) {}
    double area() const override { return M_PI * radio * radio; }
    string nombre() const override { return "Circulo"; }
};

class Rectangulo : public Figura {
    double base, altura;
public:
    Rectangulo(double b, double h) : base(b), altura(h) {}
    double area() const override { return base * altura; }
    string nombre() const override { return "Rectangulo"; }
};

int main() {
    vector<Figura*> figs;
    figs.push_back(new Circulo(1.0));
    figs.push_back(new Rectangulo(3.0, 4.0));

    double total = 0.0;
    for (const Figura* f : figs) {
        cout << f->nombre() << ": " << f->area() << '\n';
        total += f->area();
    }
    cout << "total: " << total << '\n';

    for (Figura* f : figs) delete f;

    return 0;
}
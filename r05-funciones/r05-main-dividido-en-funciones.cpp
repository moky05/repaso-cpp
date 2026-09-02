#include <iostream>
using namespace std;
void PedirNotas(double n[], int cuantas){
    for (int i = 0; i < cuantas; i++) {
        cout << "Nota " << i + 1 << ": ";
        cin >> n[i];
    }
}

double promedio(const double n[], int cuantas) {
    double s = 0;
    for (int i = 0; i < cuantas; i++) s += n[i];
    return s / cuantas;
}

bool aprobado(double prom) { return prom >= 70.0; }

int main() {
    double notas[3];

    PedirNotas(notas, 3);
    double prom = promedio(notas, 3);

    cout << "Promedio: " << prom << '\n';
    if (aprobado(prom)) cout << "Aprobado\n";
    else                cout << "Reprobado\n";
}
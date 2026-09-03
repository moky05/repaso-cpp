#include <iostream>
#include <string>
using namespace std;

class reserva {
    public:
    bool asignarPersonas(int p) {
        if (p < 1 || p > 20) return false;
        personas = p; return true;
    }
    bool asignarHorario(int ini, int fin) {   // los dos juntos
        if (ini < 0 || fin > 23 || ini >= fin) return false;
        horaInicio = ini; horaFin = fin; return true;
    }
private:
    string sala = "sala";
    int personas = 1;
    int horaInicio = 8, horaFin = 9;
};


int main() {
    return 0;
}
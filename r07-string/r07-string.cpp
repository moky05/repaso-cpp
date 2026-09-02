#include <iostream>
#include <string>

int contarPalabras(const std::string& s) {
    int contador = 0;
    bool dentroDePalabra = false;

    for (size_t i = 0; i < s.size(); i++) {
        if (s[i] != ' ') {
            if (!dentroDePalabra) {
                contador++;
                dentroDePalabra = true;
            }
        } else {
            dentroDePalabra = false;
        }
    }

    return contador;
}

std::string voltear(const std::string& s) {
    std::string resultado = "";
    for (size_t i = s.size(); i > 0; i--) {
        resultado += s[i - 1];
    }
    return resultado;
}

int main() {
    std::string texto = "  hola   mundo  cruel  ";

    std::cout << "Palabras: " << contarPalabras(texto) << '\n';
    std::cout << "Volteada: \"" << voltear(texto) << "\"\n";
}
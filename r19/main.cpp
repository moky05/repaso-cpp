#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>

int main (){
    std::vector<std::string>palabras{
        "sol", "luna", "sol", "mar", "luna", "sol"
    };

    std::vector<std::string> claves;
    std::vector<int> cantidades;

    for (const std::string& w : palabras){
        bool encontrada = false;

        for (std::size_t i = 0; i <claves.size(); ++i){
            if (claves[i] == w){
                ++cantidades[i];
                encontrada = true;
                break;
            }
        }
        if (!encontrada){
            claves.push_back(w);
            cantidades.push_back(1);
        }
    }

    std::cout << "Vector:\n";
    for (std::size_t i = 0; i < claves.size(); ++i){
        std::cout << claves[i] <<": " << cantidades[i] <<'\n';
    }

    std::map<std::string, int> conteo;
    for (const std::string& w : palabras) {
        conteo[w]++;
    }

       std::cout << "\nMap:\n";
    for (const auto& par : conteo) {
        std::cout << par.first << ": " << par.second << '\n';
    }

    std::set<std::string> distintas(palabras.begin(), palabras.end());

    std::cout << "\nSet:\n";
    std::cout << "Palabras distintas: " << distintas.size() << '\n';

    return 0;
}
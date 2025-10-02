#include "DyV.h"
#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<int> numeros = {1, 3, 5, 7, 9};
    int resultado = BusquedaBinaria(numeros, 5, 0, numeros.size() - 1);
    std::cout << "Índice encontrado: " << resultado << std::endl;

    std::vector<std::string> palabras = {"casa", "gato", "perro"};
    int resultado2 = BusquedaBinaria(palabras, std::string("gato"), 0, palabras.size() - 1);
    std::cout << "Índice encontrado: " << resultado2 << std::endl;

    return 0;
}


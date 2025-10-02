
#include "DyV.h"
#include <iostream>
#include <vector>
#include <string>
#include <chrono>

template <typename T>
void probarQuickSort(std::vector<T>& vec, const std::string& nombre) {
    std::cout << "Original (" << nombre << "): ";
    for (const auto& v : vec) std::cout << v << " ";
    std::cout << std::endl;

    auto start = std::chrono::system_clock::now();
    QuickSort(vec, 0, vec.size() - 1);
    auto end = std::chrono::system_clock::now();

    std::cout << "Ordenado (" << nombre << "): ";
    for (const auto& v : vec) std::cout << v << " ";
    std::cout << std::endl;

    std::chrono::duration<float, std::milli> duration = end - start;
    std::cout << "Tiempo: " << duration.count() << " ms\n\n";
}

int main() {
    std::vector<int> vecInt = {9, 3, 7, 1, 5};
    std::vector<float> vecFloat = {3.2, 1.5, 4.8, 2.1};
    std::vector<char> vecChar = {'z', 'a', 'm', 'b'};
    std::vector<std::string> vecStr = {"gato", "casa", "perro", "arbol"};

    probarQuickSort(vecInt, "int");
    probarQuickSort(vecFloat, "float");
    probarQuickSort(vecChar, "char");
    probarQuickSort(vecStr, "string");

    return 0;
}



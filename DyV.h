#ifndef DYV_H
#define DYV_H

#include <algorithm> // para std::swap
#include <vector>

template <typename T>
int BusquedaBinaria(const std::vector<T>& V, T X, int ini, int fin) {
    if (ini > fin) {
        return -1; // No se encuentra en el array
    }

    int medio = (ini + fin) / 2;

    if (V[medio] == X) {
        return medio;
    } else if (V[medio] > X) {
        return BusquedaBinaria(V, X, ini, medio - 1);
    } else {
        return BusquedaBinaria(V, X, medio + 1, fin);
    }
}


#include <algorithm> // para std::swap

template <typename T>
int Partition(std::vector<T>& V, int ini, int fin) {
    T pivot = V[fin];
    int i = ini;

    for (int j = ini; j < fin; ++j) {
        if (V[j] <= pivot) {
            std::swap(V[i], V[j]);
            ++i;
        }
    }

    std::swap(V[i], V[fin]);
    return i;
}

template <typename T>
void QuickSort(std::vector<T>& V, int ini, int fin) {
    if (ini < fin) {
        int pivot = Partition(V, ini, fin);
        QuickSort(V, ini, pivot - 1);
        QuickSort(V, pivot + 1, fin);
    }
}


#endif


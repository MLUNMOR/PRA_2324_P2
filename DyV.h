#ifndef DYV_H
#define DYV_H

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

#endif


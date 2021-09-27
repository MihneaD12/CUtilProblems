#ifndef PROBLBAC_ARRAYS_H
#define PROBLBAC_ARRAYS_H

#include <iostream>
#include <fstream>

template<class T>
T *readArray(size_t &length) {
    std::cin >> length;
    T *result = new T[length];
    for (int i = 0; i < length; i++) std::cin >> result[i];
    return result;
}

template<class T>
T *readArray(size_t length, std::ifstream &in) {
    T *result = new T[length];
    for (int i = 0; i < length; i++) in >> result[i];
    return result;
}

#endif //PROBLBAC_ARRAYS_H

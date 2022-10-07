//
// Created by SPY_LY on 07.10.2022.
//

#include "output.h"
#include <iostream>
#include <vector>

template<typename T>
void CoutVector(const std::vector<T>& v) {
    for (size_t i = 0; i < v.size(); i++) {
        std::cout << v[i] << " ";
    }
    std::cout << std::endl;
}

void CoutInt(const int it) {
    std::cout << it;
}
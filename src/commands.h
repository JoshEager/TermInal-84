#pragma once
#include <iostream>


void clearScreen() {
    std::cout << "\033[2J\033[H";
}

template <typename T>
T clearWrapper() {
    clearScreen();
    return T();
}

#include "commands.h"
#include <iostream>

void clearScreen() {
    std::cout << "\033[2J\033[H";
}

void getHelp(){
    std::cout << "Help message (sorry)\n";
}

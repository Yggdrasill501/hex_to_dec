#include "functions.h"
#include <iostream>
#include <string>

int readInput(int &input) {
    std::cout << "Enter number: ";
    std::cin >> input;
    return input;
}

void printOutput(std::string output) {
    std::cout << "Result: " << output << std::endl;
}

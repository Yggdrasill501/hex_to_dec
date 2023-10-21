//
// Created by Filip Žitný on 21/10/2023.
//

#include "decimal_to_hex.h"
#include <iostream>

int readInput(int &input) {
    std::cout << "Enter number: ";
    std::cin >> input;
    return input;
}

void printOutput(std::string output) {
    std::cout << "Result: " << output << std::endl;
}

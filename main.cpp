#include <iostream>
#include "decimal_to_hex.h"
#include "hex_to_decimal.h"

int main() {
    int input;
    std::cout << "If you want to use decimal to hex converter, type 1. If you want to use hex to decimal converter, type 2." << std::endl;
    std::cin >> input;

    if(input == 1){
        DecimalToHex converter;
    }
    else if(input == 2){
        HexToDecimal converter;
    }
    else{
        std::cout << "Wrong input." << std::endl;
    }


    // input string hex number
    // convert it
    // display int decimal number

    // input int decimal number
    // convert it
    // display hex as string


    return 0;
}

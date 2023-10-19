// NumberConverter.cpp

#include "converter.h"

std::string Converter::toHex(int num) const {
    if (num == 0) {
        return "0";
    }

    const std::string hexChars = "0123456789ABCDEF";
    std::string hexResult = "";

    while (num != 0) {
        int remainder = num % 16;
        hexResult = hexChars[remainder] + hexResult;
        num /= 16;
    }

    return hexResult;
}

int Converter::fromHex(const std::string& hex) const {
    int decimalResult = 0;
    for (const char& c : hex) {
        decimalResult *= 16;
        if ('0' <= c && c <= '9') {
            decimalResult += c - '0';
        } else if ('A' <= c && c <= 'F') {
            decimalResult += 10 + (c - 'A');
        } else if ('a' <= c && c <= 'f') {
            decimalResult += 10 + (c - 'a');
        }
    }
    return decimalResult;
}

Converter::Converter() : decimalNumber(0), hexString("") {}

void Converter::getInput(int choice) {
    if (choice == 1) {
        std::cout << "Enter a number in decimal system: ";
        while (!(std::cin >> decimalNumber)) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a valid number: ";
        }
    } else {
        std::cout << "Enter a string in hexadecimal format (without 0x prefix): ";
        std::cin >> hexString;
        for (const char& c : hexString) {
            if (!std::isxdigit(c)) {
                std::cout << "Invalid hexadecimal string." << std::endl;
                exit(1);
            }
        }
    }
}

void Converter::displayResult(int choice) const {
    if (choice == 1) {
        std::cout << "The hexadecimal representation is: " << toHex(decimalNumber) << std::endl;
    } else {
        std::cout << "The decimal representation is: " << fromHex(hexString) << std::endl;
    }
}

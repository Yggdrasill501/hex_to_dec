#include "NumberConverter.hpp"

int main() {
    Converter converter;
    int choice;
    std::cout << "Choose a conversion type:" << std::endl;
    std::cout << "1. Decimal to Hexadecimal" << std::endl;
    std::cout << "2. Hexadecimal to Decimal" << std::endl;
    std::cout << "Enter your choice (1 or 2): ";
    std::cin >> choice;

    if (choice != 1 && choice != 2) {
        std::cout << "Invalid choice." << std::endl;
        return 1; // Exit with error code
    }

    converter.getInput(choice);
    converter.displayResult(choice);
    return 0;
}

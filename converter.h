#ifndef CONVERTER_H
#define CONVERTER_H

#include <iostream>
#include <string>
#include <limits>
#include <cctype>

class Converter {
private:
    int decimalNumber;
    std::string hexString;

    std::string toHex(int num) const;
    int fromHex(const std::string& hex) const;

public:
    Converter();
    void getInput(int choice);
    void displayResult(int choice) const;
};


#endif //CONVERTER_H

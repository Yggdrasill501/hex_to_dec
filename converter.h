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

    static std::string toHex(int num) ;
    static int fromHex(const std::string& hex) ;

public:
    Converter();
    void getInput(int choice);
    void displayResult(int choice) const;
};


#endif //CONVERTER_H

#ifndef CONVERTER_H
#define CONVERTER_H

#include <iostream>
#include <string>
#include <limits>
#include <cctype>
#include <type_traits>

template<typename T>
class Converter {
    static_assert(std::is_integral<T>::value, "Type must be an integral type!");

private:
    T decimalNumber;
    std::string hexString;

    std::string toHex(T num) const;
    T fromHex(const std::string& hex) const;

public:
    NumberConverter();
    void getInput(int choice);
    void displayResult(int choice) const;
};
#endif //CONVERTER_H

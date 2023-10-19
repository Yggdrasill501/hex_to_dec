#ifndef CONVERTER_H
#define CONVERTER_H

class Converter {
    int decimalNumber;
    std::string hexString;
    std::string toHex(int num);
    int fromHex(const std::string& hex);

public:
    Converter() : decimalNumber(0), hexString("");
    ~Converter();
    void getInput(int choice);
    void displayResult(int choice) const;
};

#endif //CONVERTER_H

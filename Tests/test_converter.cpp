#include <gtest/gtest.h>
#include "converter.h"

class TestConverter : public ::testing::Test {
protected:
    Converter converter;
};

TEST_F(TestConverter, ConvertDecimalToHex) {
EXPECT_EQ(converter.toHex(0), "0");
EXPECT_EQ(converter.toHex(10), "A");
EXPECT_EQ(converter.toHex(255), "FF");
EXPECT_EQ(converter.toHex(4096), "1000");
}

TEST_F(TestConverter, ConvertHexToDecimal) {
EXPECT_EQ(converter.fromHex("0"), 0);
EXPECT_EQ(converter.fromHex("A"), 10);
EXPECT_EQ(converter.fromHex("FF"), 255);
EXPECT_EQ(converter.fromHex("1000"), 4096);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
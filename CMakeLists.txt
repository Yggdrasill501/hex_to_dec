cmake_minimum_required(VERSION 3.26)
project(dec_to_hex)

set(CMAKE_CXX_STANDARD 23)

add_executable(dec_to_hex main.cpp
        decimal_to_hex.cpp
        decimal_to_hex.h
        hex_to_decimal.cpp
        hex_to_decimal.h
        number.cpp
        number.h
)

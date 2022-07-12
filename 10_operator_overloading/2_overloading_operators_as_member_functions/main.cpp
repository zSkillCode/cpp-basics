#include "Number.h"

#include <iostream>

int main() {
    Number number1{10};
    Number number2{10};

    std::cout << std::boolalpha << (number1 == number2) << std::endl;

    number1 = number2 + 5 * 10;
    std::cout << number1.getNum() << std::endl; // 60

    std::cout << -number1.getNum() << std::endl; // -60

    number1 = 9;
    std::cout << (number1 % 5).getNum() << std::endl; // 4
    return 0;
}
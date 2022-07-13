#include "Number.h"

#include <iostream>

int main() {
    const Number num1{5};
    const Number num2{10};
    const Number num3{(num1 + num2) - 4};

    std::cout << num3.getNum() << std::endl; // 11
    return 0;
}
#include <iostream>
#include <string>

int main() {
    // Creating simple lambda expressions
    // Return type is optional
    auto lambda1{[](const std::string &text) -> void { std::cout << text << std::endl; }};
    lambda1("Hello!"); // Hello!

    auto lambda2{[](const auto val) { std::cout << val << std::endl; }};
    lambda2(3); // 3

    // Lambda with return type
    auto multiply{[](const auto x, const auto y) { return x * y; }};

    const int x{multiply(2, 5)};
    const double y{multiply(2.3, 3.4)};

    std::cout << x << " " << y << std::endl; // 10 7.82

    // Creating and executing lambda expressions
    [](const int x) { std::cout << x * 10 << std::endl; }(10); // 100
    return 0;
}
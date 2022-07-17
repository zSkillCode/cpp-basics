#include <iostream>
#include <string>

constexpr int globalInt{10};

int main() {
    // Stateful lambdas can access local variables
    std::string localString{"Hello!"};

    [&localString]() {
        std::cout << localString << std::endl; // Hello!
        std::cout << globalInt << std::endl; // 10
    }();

    [&localString](const std::string &str) {
        localString = str;
    }("Hey!");

    std::cout << localString << std::endl; // Hey!
}
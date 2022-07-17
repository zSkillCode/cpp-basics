#include <iostream>

// "class" can also be used instead of typename
template<typename T>
T max(const T a, const T b) {
    return (a > b) ? a : b;
}

int main() {
    std::cout << max(10, 20) << std::endl; // 20
    std::cout << max(2.3, 3.2) << std::endl; // 3.2
    std::cout << max('b', 'a') << std::endl; // a
    return 0;
}
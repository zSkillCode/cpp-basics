#include <iostream>

// Macros
#define PI 3.141592
#define MAX(a, b) ((a > b) ? a : b)

/*
 * IMPORTANT: MACROS SHOULD BE AVOIDED
 */
int main() {
    std::cout << PI << std::endl; // 3.141592
    std::cout << MAX(3, 6) << std::endl; // 6
    std::cout << MAX(7.4, 3.2) << std::endl; // 7.4
    std::cout << MAX('a', 'c') << std::endl; // c
    return 0;
}
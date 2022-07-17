#include <iostream>
#include <array>

int main() {
    std::array<int, 5> array{1, 2, 3, 4, 5};

    std::cout << array.at(0) << std::endl; // 1
    std::cout << array[2] << std::endl; // 3 (No bounds checking)

    std::cout << array.front() << std::endl; // 1
    std::cout << array.back() << std::endl; // 5

    std::cout << array.empty() << std::endl; // 0 (false)
    std::cout << array.max_size() << std::endl; // 5

    std::cout << array.data() << std::endl; // raw array address
    // array.swap(otherArray) -> Swap the content of 2 arrays
    array.fill(0); // 0, 0, 0, 0, 0
    return 0;
}
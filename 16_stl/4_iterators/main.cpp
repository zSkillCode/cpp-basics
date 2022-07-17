#include <iostream>
#include <vector>

int main() {
    const std::vector<int> nums{1, 2, 3, 4, 5};
    // .begin = iterator, .cbegin = const_iterator
    auto iterator{nums.cbegin()};

    std::cout << *iterator << std::endl; // 1
    iterator++;
    std::cout << *iterator << std::endl; // 2
    iterator++;
    std::cout << *iterator << std::endl; // 3
    iterator++;
    std::cout << *iterator << std::endl; // 4
    iterator++;
    std::cout << *iterator << std::endl; // 5


    iterator = nums.cbegin();

    while (iterator != nums.end()) {
        std::cout << *iterator++;
    }
    std::cout << std::endl;
    // 12345
}
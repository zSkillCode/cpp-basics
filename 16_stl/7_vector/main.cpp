#include <iostream>
#include <vector>

int main() {
    std::vector<int> vector{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << vector.at(4) << std::endl; // 5
    std::cout << vector.at(7) << std::endl; // 8

    std::cout << vector.front() << std::endl; // 1
    std::cout << vector.back() << std::endl; // 10

    vector.push_back(11); // 1, 2, 3... 11
    vector.emplace_back(12); // 1, 2, 3... 12 (Can be more efficient)
    vector.pop_back(); // 1, 2, 3... 11

    std::cout << vector.size() << std::endl; // 11
    std::cout << vector.capacity() << std::endl; // 15
    std::cout << vector.max_size() << std::endl; // A large number

    // vector.swap(vector2); // Swap the content
    std::cout << vector.empty() << std::endl; // 0 (false)

    vector.insert(vector.begin() + 2, 100); // 1, 2, 100, 3...

    return 0;
}
#include <iostream>
#include <deque>

int main() {
    std::deque<int> deque{1, 2, 3, 4};

    std::cout << deque.at(2) << std::endl; // 3

    std::cout << deque.front() << std::endl; // 1
    std::cout << deque.back() << std::endl; // 4

    deque.push_back(5); // 1, 2, 3, 4, 5
    deque.push_front(0); // 0, 1, 2, 3, 4, 5
    // Also supports emplace_back() and emplace_front()

    deque.pop_back(); // 0, 1, 2, 3, 4
    deque.pop_front(); // 1, 2, 3, 4

    std::cout << deque.size() << std::endl; // 4
    std::cout << deque.size() << std::endl; // A very large number
    return 0;
}
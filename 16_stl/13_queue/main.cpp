#include <iostream>
#include <queue>

int main() {
    std::queue<int> queue;

    queue.push(1); // 1
    queue.push(2); // 1, 2
    queue.push(3); // 1, 2, 3

    queue.pop(); // 1, 2

    std::cout << queue.front() << std::endl; // 1
    std::cout << queue.back() << std::endl; // 2

    std::cout << queue.empty() << std::endl; // 0 (false)
    std::cout << queue.size() << std::endl; // 2
    return 0;
}
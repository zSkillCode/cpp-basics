#include <iostream>
#include <queue>

int main() {
    // Elements are sorted internally as a vector by default
    std::priority_queue<int> queue;

    queue.push(4); // 4
    queue.push(10); // 10, 4
    queue.push(1); // 10, 4, 1

    queue.pop(); // 10, 4

    std::cout << queue.top() << std::endl; // 4

    std::cout << queue.empty() << std::endl; // 0 (false)
    std::cout << queue.size() << std::endl; // 2
    return 0;
}
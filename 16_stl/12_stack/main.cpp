#include <iostream>
#include <stack>

int main() {
    std::stack<int> stack;

    stack.push(1); // 1
    stack.push(2); // 1, 2
    stack.push(3); // 1, 2, 3

    stack.pop(); // 1, 2

    stack.push(3); // 1, 2, 3

    std::cout << stack.top() << std::endl; // 3
    std::cout << stack.empty() << std::endl; // 0 (false)
    std::cout << stack.size() << std::endl; // 3
    return 0;
}
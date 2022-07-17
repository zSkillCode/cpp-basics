#include <iostream>
#include <list>
#include <forward_list>

int main() {
    std::list<int> list{1, 2, 3};

    std::cout << list.front() << std::endl; // 1
    std::cout << list.back() << std::endl; // 3

    std::cout << list.size() << std::endl; // 3
    std::cout << list.max_size() << std::endl; // A very large number

    list.push_back(4); // 1, 2, 3, 4
    list.push_front(0); // 0, 1, 2, 3, 4

    list.pop_back(); // 0, 1, 2, 3
    list.pop_front(); // 1, 2, 3
    // Also supports emplace_back() and emplace_front()

    list.insert(list.begin(), 0); // 0, 1, 2, 3
    list.erase(list.begin()); // 1, 2, 3

    list.resize(2); // 1, 2
    list.resize(5); // 1, 2, 0, 0, 0

    /*
     * Similar to list, but reverse iterators are not available
     * - Better performance
     * - .size() is not available
     */
    std::forward_list<int> fwdList{1, 2, 3, 4, 5};
    return 0;
}
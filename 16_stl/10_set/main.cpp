#include <iostream>
#include <set>

int main() {
    // Duplicate elements will be removed
    // Sorted
    std::set<int> set{3, 3, 3, 2, 1, 2, 3, 1, 2, 1}; // 1, 2, 3

    std::cout << set.size() << std::endl; // 3
    std::cout << set.max_size() << std::endl; // A very large number

    set.insert(4); // 1, 2, 3, 4
    set.erase(4); // 1, 2, 3
    // Also supports emplace()
    std::cout << set.empty() << std::endl; // 0 (false)
    set.clear(); // Clears the set

    /*
     * std::multi_set -> Allows duplicate elements
     * std::unordered_set -> Elements are unordered, no reverse iterators
     * std::unordered_multiset -> Elements are unordered, no reverse iterators, allows duplicate elements
     */
    return 0;
}
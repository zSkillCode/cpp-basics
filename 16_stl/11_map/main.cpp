#include <iostream>
#include <map>

int main() {
    // Keys are unique
    std::map<std::string, int> ages{
            {"Bob",   16},
            {"Jerry", 19},
            {"Jack",  18},
            {"Larry", 18}
    };

    std::cout << ages.size() << std::endl; // 4
    std::cout << ages.max_size() << std::endl; // A very large number

    ages.insert(std::make_pair("Ben", 21));
    ages.at("Ben") = 22;
    ages.erase("Ben");

    std::cout << ages.empty() << std::endl; // 0 (false)
    ages.clear(); // Removes all elements

    /*
     * std::multi_map -> Allows duplicate elements, ordered by key
     * std::unordered_map -> Unordered, no duplicate elements, no reverse iterators
     * std::unordered_multimap -> Unordered, allows duplicate elements, no reverse iterators
     */
    return 0;
}
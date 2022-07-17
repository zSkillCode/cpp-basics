#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {
    /*
     * FIND
     */
    const std::vector<int> vector{1, 2, 3, 4, 5};
    const auto location{std::find(vector.begin(), vector.end(), 3)};

    if (location != vector.end()) {
        std::cout << "Found the number: " << *location << std::endl;
    } else {
        std::cout << "Could not find the number." << std::endl;
    }

    /*
     * COUNT
     */
    const std::vector<char> charVector{'a', 'b', 'a', 'c', 'b', 'a', 'a', 'c'};
    const int count{std::count(charVector.begin(), charVector.end(), 'a')};
    std::cout << count << std::endl; // 4

    /*
     * COUNT IF
     */
    const std::vector<int> intVector{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    // Only count even numbers
    const int countEven{std::count_if(intVector.begin(), intVector.end(),
                                      [](const int x) { return x % 2 == 0; })};
    std::cout << "Even numbers found: " << countEven << std::endl; // Even numbers found: 7

    /*
     * REPLACE
     */
    std::vector<int> intVec{1, 1, 2, 2};
    std::replace(intVec.begin(), intVec.end(), 1, 2);

    /*
     * FOR EACH
     */
    std::for_each(intVec.begin(), intVec.end(), [](const int x) { std::cout << x << " "; });
    std::cout << std::endl; // 2 2 2 2

    /*
     * ALL OF
     */
    const std::vector<int> iVector{3, 10, 40, 7, 3};
    std::cout << ((std::all_of(iVector.begin(), iVector.end(),
                               [](const int x) { return x > 10; }))
                  ? "All numbers are > 10"
                  : "Some numbers are < 10")
              << std::endl;

    /*
     * TRANSFORM
     */
    std::string str{"I'm a string!"};
    std::transform(str.begin(), str.end(), str.begin(), ::toupper);
    std::cout << str << std::endl; // I'M A STRING!
    return 0;
}
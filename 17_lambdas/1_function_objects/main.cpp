#include <iostream>
#include <vector>
#include <algorithm>

class SquareFactor {
public:
    void operator()(const int x) const {
        std::cout << x * x << " ";
    }
};

int main() {
    const SquareFactor squareFactor;
    squareFactor(4); // 16 - This is not a function call!

    const std::vector<int> vec{1, 2, 3, 4, 5};
    std::for_each(vec.begin(), vec.end(), squareFactor); // 1 4 9 16 25
    return 0;
}
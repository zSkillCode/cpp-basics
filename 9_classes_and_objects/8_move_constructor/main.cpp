#include "Move.h"

#include <iostream>
#include <vector>

int main() {
    std::vector<Move> vector;

    const Move lValue{10};
    vector.push_back(lValue);
    std::cout << "--------------------" << std::endl;
    vector.push_back(Move{20});
    std::cout << "--------------------" << std::endl;
    return 0;
}
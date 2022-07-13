#include "Person.h"

#include <iostream>

int main() {
    Person pers{"Placeholder", 18};

    std::cout << "Enter a name >>" << std::endl;
    std::cin >> pers;
    std::cout << pers;

    return 0;
}
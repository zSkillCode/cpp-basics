#include <iostream>

enum Direction {
    North, South, East, West
};

int main() {
    const Direction direction{Direction::North};

    char result{};
    switch(direction) {
        case North:
            result = 'N';
            break;
        case South:
            result = 'S';
            break;
        case East:
            result = 'E';
            break;
        case West:
            result = 'W';
            break;
        default:
            result = '0';
    }
    std::cout << result << std::endl; // N
    return 0;
}
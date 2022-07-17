#include <iostream>

enum class Direction {
    North, South, East, West
};

int main() {
    const Direction direction{Direction::North};

    char result{};
    switch(direction) {
        case Direction::North:
            result = 'N';
            break;
        case Direction::South:
            result = 'S';
            break;
        case Direction::East:
            result = 'E';
            break;
        case Direction::West:
            result = 'W';
            break;
        default:
            result = '0';
    }
    std::cout << result << std::endl; // N
    return 0;
}
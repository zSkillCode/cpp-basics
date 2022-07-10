#pragma once

#include <string>

class Player {
public:
    explicit Player(
            std::string name = "none",
            int health = 0,
            int xp = 0
    );

private:
    const std::string name;
    const int health;
    const int xp;
};

#pragma once

#include <string>

class Player {
public:
    explicit Player(
            std::string name = "none",
            int health = 0,
            int xp = 0
    );

    // Copy constructor (called when a copy of the object is created)
    Player(const Player &source);

    // Destructor
    ~Player();

private:
    const int health;
    const std::string name;
    const int xp;
};

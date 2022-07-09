#pragma once

#include <string>

class Player {
public:
    Player(std::string name, int health, int xp);

    explicit Player(const std::string &name);

    Player();


    const std::string &getName() const;

    int getHealth() const;

    int getXp() const;

private:
    std::string name;
    int health;
    int xp;
};
